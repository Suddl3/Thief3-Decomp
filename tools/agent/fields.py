#!/usr/bin/env python3
"""Lead only: give placeholder fields (UnknownXX) the names a naming pass found, by asking the compiler.

    python tools/agent/fields.py apply <plan.json> [--dry-run] [--jobs N]
    python configure.py && ninja      # then compare the report (nothing may move)

A plan's "fields" section (tools/agent/namer.md) names members of classes:

    {"fields": {"cMotionControllerAnim": {"Unknown0E0": {"name": "m_ExpireTime", "evidence": "..."}}}}

A class key may be a placeholder names.py has renamed since; config/<version>/names.txt resolves it.
`Unknown0E0` names a member of hundreds of classes, so a field is not one identifier the way a
placeholder class or function is. For each class, `apply`:

  1. renames the members where the class is declared: its header (include/Game/, or a package
     header) and each unit's own definition of it;
  2. compiles every unit that declares the class, includes its header or uses the old names, and
     renames exactly the uses MSVC no longer resolves (C2039 "is not a member", C2065 "undeclared
     identifier" on an old name, in the unit or in a header), until each compiles;
  3. keeps the class's renames only if every such unit then compiles to the code of its last built
     object (build/<version>/src/), and else puts every file back as it was.
Each name kept is recorded, with its evidence, in config/<version>/names.txt (`field <Class>::<old> ...`).
"""
import argparse
import json
import re
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from common import Project  # noqa: E402
import headers  # noqa: E402
import names  # noqa: E402

PLACEHOLDER = re.compile(r"^(?:Unknown|Pad)[0-9A-Fa-f]+(?:_\d+)?$")
ERROR = re.compile(r"^(?P<file>.*?)\((?P<line>\d+)\) : error (?:(?:C2039|C2065): '(?P<ident>\w+)'"
                   r"|C2614: '\w+' : illegal member initialization: '(?P<init>\w+)' is not a base or member)")
ROUNDS = 12


def class_body(text: str, cls: str) -> Optional[Tuple[int, int]]:
    """The span of `class|struct <cls> ... { ... };` in `text` (a definition, not a declaration)."""
    m = re.search(rf"^(?:class|struct) {re.escape(cls)}\b[^;{{]*\{{", text, re.M)
    if not m:
        return None
    end = re.compile(r"^\};", re.M).search(text, m.end())
    return (m.start(), end.end()) if end else None


def rename_in(text: str, span: Tuple[int, int], renames: Dict[str, str]) -> str:
    """Whole identifiers, both ends: unlike a placeholder class, `Unknown10` is also the end of a type's name
    (`Class_10E5D548_Unknown10`), which must keep it."""
    pattern = re.compile(r"(?<![A-Za-z0-9_])(" + "|".join(map(re.escape, renames)) + r")(?![A-Za-z0-9_])")
    body = pattern.sub(lambda m: renames[m.group(1)], text[span[0]:span[1]])
    return text[:span[0]] + body + text[span[1]:]


def rename_line(text: str, line: int, old: str, new: str) -> Optional[str]:
    lines = text.split("\n")
    if not 0 < line <= len(lines) or not re.search(rf"\b{re.escape(old)}\b", lines[line - 1]):
        return None
    lines[line - 1] = re.sub(rf"\b{re.escape(old)}\b", new, lines[line - 1])
    return "\n".join(lines)


class ClassRename:
    """One class's field renames, applied to copies of the files they touch."""

    def __init__(self, p: Project, cls: str, renames: Dict[str, str]):
        self.p, self.cls, self.renames = p, cls, renames
        self.files: Dict[Path, str] = {}  # every file touched -> its text now (the originals are on disk)

    def text(self, path: Path) -> str:
        if path not in self.files:
            self.files[path] = path.read_text(encoding="utf-8", errors="replace")
        return self.files[path]

    def declare(self) -> List[Path]:
        """Rename the members where the class is defined; the units to compile."""
        p, cls = self.p, self.cls
        candidates = [p.include_dir / "Game" / f"{cls}.h"] + sorted(p.include_dir.glob("*/*Classes.h"))
        for path in candidates:
            if path.is_file():
                span = class_body(self.text(path), cls)
                if span:
                    self.files[path] = rename_in(self.text(path), span, self.renames)
                else:
                    self.files.pop(path, None)
        units = set(headers.dependents(p, cls)) if (p.include_dir / "Game" / f"{cls}.h").is_file() else set()
        old = re.compile(r"\b(?:" + "|".join(map(re.escape, self.renames)) + r")\b")
        for unit in sorted((p.src_dir / "Game").glob("*.cpp")):
            text = unit.read_text(encoding="utf-8", errors="replace")
            span = class_body(text, cls)
            if span:
                self.files[unit] = rename_in(text, span, self.renames)
                units.add(f"Game/{unit.name}")
            elif f"Game/{unit.name}" in units or (old.search(text) and re.search(rf"\b{re.escape(cls)}\b", text)):
                units.add(f"Game/{unit.name}")
        return [p.src_dir / u for u in sorted(units)]

    def compile(self, unit: Path, work: Path) -> Tuple[bool, str]:
        """Compile the unit's current text against the current headers (written to a scratch include tree)."""
        source = work / unit.name
        source.write_text(self.text(unit), encoding="utf-8", newline="\n")
        return self.p.compile(source, source.with_suffix(".obj"), headers.cflags(self.p, f"Game/{unit.name}"))


def apply_class(p: Project, cls: str, renames: Dict[str, str], jobs: int, dry_run: bool) -> Optional[str]:
    """None when the class's fields were renamed with every unit keeping its code, else why not."""
    job = ClassRename(p, cls, renames)
    units = job.declare()
    if not job.files:
        return "no definition of the class in include/ or src/"
    if not units:
        return "no unit to check the renames with"
    work = Path(tempfile.mkdtemp(prefix="t3fields-", dir=p.state_dir("tmp")))
    for unit in units:
        (work / unit.stem).mkdir(exist_ok=True)
    originals: Dict[Path, str] = {}

    def write_header(path: Path, text: str) -> None:
        """Headers are shared, so the units compile against them on disk; `originals` puts them back."""
        originals.setdefault(path, path.read_text(encoding="utf-8", errors="replace"))
        path.write_text(text, encoding="utf-8", newline="\n")

    pending = list(units)
    try:
        for path in [path for path in job.files if path.suffix == ".h"]:
            write_header(path, job.files[path])
        for _ in range(ROUNDS):
            if not pending:
                break
            with ThreadPoolExecutor(jobs) as pool:
                results = list(pool.map(lambda u: job.compile(u, work / u.stem), pending))
            retry = []
            for unit, (ok, log) in zip(pending, results):
                if ok:
                    continue
                fixed = False
                for m in map(ERROR.match, log.splitlines()):
                    ident = m and (m.group("ident") or m.group("init"))
                    if not ident or ident not in job.renames:
                        continue
                    where = Path(m.group("file"))
                    if where.suffix == ".cpp" and where.name == unit.name:
                        target = unit
                    else:
                        target = (where if where.is_absolute() else p.main / where).resolve()
                        if target.suffix != ".h" or p.include_dir.resolve() not in target.parents:
                            continue
                    line = int(m.group("line"))
                    # C2614 names the constructor's line; its initializer list may start above it.
                    for at in ([line] if m.group("ident") else range(line, max(line - 8, 0), -1)):
                        new = rename_line(job.text(target), at, ident, job.renames[ident])
                        if new is not None:
                            break
                    if new is not None:
                        job.files[target] = new
                        fixed = True
                        if target.suffix == ".h":
                            write_header(target, new)
                if not fixed:
                    first = next((ln for ln in log.splitlines() if " error " in ln), log.splitlines()[0] if log else "")
                    return f"{unit.name} does not compile: {re.sub(r'^.*[\\/]', '', first)[:160]}"
                retry.append(unit)
            pending = retry
        if pending:
            return f"{pending[0].name} still does not compile after {ROUNDS} rounds"
        for unit in units:  # every unit keeps its code
            old = p.main / "build" / p.version / "src" / "Game" / unit.with_suffix(".obj").name
            new = work / unit.stem / unit.with_suffix(".obj").name
            ok, log = job.compile(unit, work / unit.stem)
            diff = headers.same_code(old, new) if ok and old.is_file() else (log or "no built object (ninja first)")
            if diff:
                return f"{unit.name}: {diff.splitlines()[0][:160]}"
    finally:
        for path, text in originals.items():  # the headers go back until everything is checked
            path.write_text(text, encoding="utf-8", newline="\n")
    if not dry_run:
        for path, text in job.files.items():
            path.write_text(text, encoding="utf-8", newline="\n")
    return None


def current_name(p: Project, cls: str) -> str:
    renamed = names.class_names(p)
    while cls in renamed:
        cls = renamed[cls][0]
    return cls


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    a = sub.add_parser("apply")
    a.add_argument("plan")
    a.add_argument("--dry-run", action="store_true")
    a.add_argument("--jobs", type=int, default=16)
    args = ap.parse_args()
    p = Project()
    plan = json.loads(Path(args.plan).read_text(encoding="utf-8"))
    rows, failed = [], 0
    for key, entries in (plan.get("fields") or {}).items():
        cls = current_name(p, key)
        renames = {old: e["name"] for old, e in entries.items()
                   if PLACEHOLDER.match(old) and names.IDENTIFIER.match(e.get("name", ""))}
        refused = sorted(set(entries) - set(renames))
        if refused:
            print(f"{cls}: not placeholders or not identifiers, left out: {', '.join(refused)}")
        if len(set(renames.values())) < len(renames):
            print(f"{cls}: two fields given one name: refused")
            failed += 1
            continue
        if not renames:
            continue
        why = apply_class(p, cls, renames, args.jobs, args.dry_run)
        if why:
            print(f"{cls}: kept the placeholders: {why}")
            failed += 1
            continue
        print(f"{cls}: {len(renames)} fields renamed" + (" (dry run: nothing written)" if args.dry_run else ""))
        rows += [f"field {cls}::{old} {new} {' '.join(entries[old].get('evidence', '').split())}"
                 for old, new in renames.items()]
    if rows and not args.dry_run:
        path = p.config_dir / "names.txt"
        prefix = "" if path.is_file() else names.NAMES_HEADER
        with open(path, "a", encoding="utf-8", newline="\n") as out:
            out.write(prefix + "\n".join(rows) + "\n")
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
