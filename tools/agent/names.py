#!/usr/bin/env python3
"""Lead only: give placeholder classes and functions the names a naming pass found, everywhere at once.

    python tools/agent/names.py apply <plan.json> [--dry-run]
    python configure.py && ninja      # the split takes the new names: the report must not move
    python tools/agent/names.py list [<regex>]
    python tools/agent/names.py units # units still named after a class renamed since (apply does it too)

A plan names placeholder classes and functions, each with its evidence:

    {"classes":   {"Class_10BFBD70": {"name": "PtrArray", "evidence": "..."}},
     "functions": {"0x10BFBD70":     {"name": "Empty", "evidence": "..."}}}

A placeholder carries its address (`Class_10BFBD70`, `FUN_10bfbd70`), so it is one identifier
wherever it appears, and renaming it is a whole-identifier replacement. `apply`:

  1. checks each entry: the old name is a placeholder still in use, the new one an identifier no
     class or global uses (a function's new name may repeat in other classes, but no two addresses
     may end up with one decorated name);
  2. renames the identifiers in src/, include/ (a class's header file too, with its include lines and
     guard), the accepted and deferred records (build/agent/), and every symbols.txt name, whose old
     spelling stays as an alias (tools/cc.py points a reference to an alias at the address's name,
     so a source still using the old name keeps pairing); a class's units (`Game/<old>.cpp`,
     `Game/<old>_2.cpp`) take its name, in splits.txt and configure.py too (unitnames.py);
  3. records each name and its evidence in config/<version>/names.txt, and the class names in
     classmap.txt, where the gate's [classmap] rule asks workers for the new name (classmap.py
     keeps them when it writes the map again).
Names change no code: after configure.py and ninja, compare the report (nothing may move).
"""
import argparse
import json
import keyword
import re
import sys
from pathlib import Path
from typing import Dict, List, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from common import Project, fmt_addr  # noqa: E402

CLASS_PLACEHOLDER = re.compile(r"^(?:Class|Struct|Object)_[0-9A-Fa-f]{8}$")
IDENTIFIER = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
GUARD = "GAME_{}_H"  # headers.py
CPP_KEYWORDS = {"class", "struct", "union", "enum", "public", "private", "protected", "virtual", "operator",
                "template", "typename", "this", "new", "delete", "return", "const", "static", "void", "int",
                "char", "short", "long", "float", "double", "bool", "signed", "unsigned", "inline", "friend"}
NAMES_HEADER = ("# Names the decompilation gave placeholder classes and functions, with the evidence for each.\n"
                "# Written by tools/agent/names.py apply; classmap.py keeps the class names in classmap.txt.\n"
                "#   class <placeholder> <name> <evidence>\n"
                "#   function <address> <name> <evidence>\n")


def load_names(p: Project) -> List[Tuple[str, str, str, str]]:
    """config/<version>/names.txt as (kind, old, new, evidence) rows."""
    path = p.config_dir / "names.txt"
    rows = []
    if path.is_file():
        for line in path.read_text(encoding="utf-8").splitlines():
            if line.strip() and not line.startswith("#"):
                kind, old, new, why = (line.split(None, 3) + [""])[:4]
                rows.append((kind, old, new, why))
    return rows


def class_names(p: Project) -> Dict[str, Tuple[str, str]]:
    """{placeholder: (name, evidence)} of the classes names.txt names."""
    return {old: (new, why) for kind, old, new, why in load_names(p) if kind == "class"}


def renamer(renames: Dict[str, str]):
    """Whole-identifier replacement (an identifier inside a decorated name or a path counts as one)."""
    if not renames:
        return lambda text: text
    pattern = re.compile(r"(?<![A-Za-z0-9_])(" + "|".join(sorted(map(re.escape, renames), key=len, reverse=True))
                         + r")(?![A-Za-z0-9_])")
    return lambda text: pattern.sub(lambda m: renames[m.group(1)], text)


def rename_symbols(text: str, rename) -> Tuple[str, int]:
    """symbols.txt with every name renamed; each renamed name's old spelling stays, as an alias."""
    out, changed = [], 0
    line_re = re.compile(r"^(\S+) = (\.\w+):(0x[0-9A-Fa-f]+);(.*)$")
    present = {m.group(1) for m in map(line_re.match, text.splitlines()) if m}
    for line in text.splitlines():
        m = line_re.match(line)
        new = rename(m.group(1)) if m else line
        if not m or new == m.group(1) or new in present:  # unchanged, or the new name is there already
            out.append(line)
            continue
        changed += 1
        out.append(f"{new} = {m.group(2)}:{m.group(3)};{m.group(4)}")
        out.append(f"{m.group(1)} = {m.group(2)}:{m.group(3)}; // type:alias")
    return "\n".join(out) + "\n", changed


def check(p: Project, plan: dict) -> Tuple[Dict[str, str], List[str]]:
    """The identifier renames a plan asks for, and the problems that stop it."""
    problems, renames = [], {}
    symbol_names = {s.name for s in p.symbols}
    used = set()
    for path in list(p.src_dir.rglob("*.cpp")) + list(p.include_dir.rglob("*.h")):
        used.update(re.findall(r"[A-Za-z_][A-Za-z0-9_]*", path.read_text(encoding="utf-8", errors="replace")))
    mapped = p.class_map()
    new_names = [e["name"] for e in (plan.get("classes") or {}).values()]
    for old, entry in (plan.get("classes") or {}).items():
        new = entry["name"]
        if not CLASS_PLACEHOLDER.match(old):
            problems.append(f"class {old}: not a placeholder (Class_<address>)")
        elif mapped.get(old, new) != new:
            problems.append(f"class {old}: the class map says it is {mapped[old]}; name that class instead")
        elif new_names.count(new) > 1:
            problems.append(f"class {old}: {new} is given to two classes")
        elif (p.include_dir / "Game" / f"{new}.h").exists():
            problems.append(f"class {old}: include/Game/{new}.h exists")
        elif not IDENTIFIER.match(new) or keyword.iskeyword(new) or new in CPP_KEYWORDS:
            problems.append(f"class {old}: {new!r} is not an identifier")
        elif new in used or any(re.search(rf"(?<![A-Za-z0-9_]){re.escape(new)}@", s) for s in symbol_names):
            problems.append(f"class {old}: {new} is a name already in use")
        elif old not in used:
            problems.append(f"class {old}: not used in src/ or include/")
        else:
            renames[old] = new
    for addr, entry in (plan.get("functions") or {}).items():
        a = p.parse_addr(addr)
        old, new = f"FUN_{a:08x}", entry["name"]
        names_here = [s.name for s in p.symbols if s.address == a]
        if not any(re.search(rf"(?<![A-Za-z0-9_]){old}(?![A-Za-z0-9_])", n) for n in names_here):
            problems.append(f"function {fmt_addr(a)}: no name of it uses {old}")
        elif not IDENTIFIER.match(new) or keyword.iskeyword(new) or new in CPP_KEYWORDS:
            problems.append(f"function {fmt_addr(a)}: {new!r} is not an identifier")
        else:
            renames[old] = new
    # No two addresses may share a decorated name once renamed.
    rename = renamer(renames)
    owner: Dict[str, int] = {}
    for s in p.symbols:
        n = rename(s.name)
        if owner.setdefault(n, s.address) != s.address:
            problems.append(f"{n} would name both {fmt_addr(owner[n])} and {fmt_addr(s.address)}")
    return renames, problems


def apply(p: Project, plan: dict, dry_run: bool) -> int:
    renames, problems = check(p, plan)
    for line in problems:
        print("refused:", line)
    if problems:
        return 1
    rename = renamer(renames)
    changed: List[Path] = []
    files = (list(p.src_dir.rglob("*.cpp")) + list(p.include_dir.rglob("*.h"))
             + [f for d in ("accepted", "deferred") for f in (p.state / d).glob("*") if f.suffix in (".cpp", ".json")])
    for path in files:
        text = path.read_text(encoding="utf-8", errors="replace")
        new = rename(text)
        for old, name in renames.items():  # a header's include guard
            if CLASS_PLACEHOLDER.match(old):
                new = new.replace(GUARD.format(old.upper()), GUARD.format(name.upper()))
        if new != text:
            changed.append(path)
            if not dry_run:
                path.write_text(new, encoding="utf-8", newline="\n")
    moved = []
    for old, name in renames.items():
        header = p.include_dir / "Game" / f"{old}.h"
        if header.is_file():
            target = header.with_name(f"{name}.h")
            moved.append((header, target))
            if not dry_run:
                header.rename(target)
    symbols_text, symbols_changed = rename_symbols(p.symbols_txt.read_text(encoding="utf-8"), rename)
    units = unit_renames(p, {old: new for old, new in renames.items() if CLASS_PLACEHOLDER.match(old)})
    if not dry_run:
        p.symbols_txt.write_text(symbols_text, encoding="utf-8", newline="\n")
        record(p, plan)
        rename_units(p, units)
    print(f"{len(renames)} names; {len(changed)} files, {len(moved)} headers and {len(units)} units renamed, "
          f"{symbols_changed} symbols.txt names (the old ones kept as aliases)"
          + (" (dry run: nothing written)" if dry_run else "; next: python configure.py && ninja"))
    return 0


def unit_renames(p: Project, classes: Dict[str, str]) -> List[Tuple[str, str]]:
    """The units named after a renamed placeholder class (`Game/<old>.cpp`, `Game/<old>_2.cpp`) and their new
    names, numbered alike; a name already taken (on a case-blind disk too) keeps the unit as it is."""
    game = p.src_dir / "Game"
    taken = {x.name.lower() for x in game.glob("*.cpp")}
    out = []
    for old, new in classes.items():
        for path in sorted(game.glob(f"{old}*.cpp")):
            m = re.fullmatch(rf"{re.escape(old)}(_\d+)?\.cpp", path.name)
            target = f"{new}{m.group(1) or ''}.cpp" if m else None
            if target and target.lower() not in taken:
                taken.add(target.lower())
                out.append((f"Game/{path.name}", f"Game/{target}"))
    return out


def rename_units(p: Project, units: List[Tuple[str, str]]) -> None:
    if units:
        import unitnames
        unitnames.apply(p, units)


def record(p: Project, plan: dict) -> None:
    """names.txt rows for the plan, and its class names in classmap.txt."""
    path = p.config_dir / "names.txt"
    rows = [] if path.is_file() else [NAMES_HEADER.rstrip("\n")]
    for old, e in (plan.get("classes") or {}).items():
        rows.append(f"class {old} {e['name']} {' '.join(e.get('evidence', '').split())}")
    for addr, e in (plan.get("functions") or {}).items():
        rows.append(f"function {fmt_addr(p.parse_addr(addr))} {e['name']} {' '.join(e.get('evidence', '').split())}")
    with open(path, "a", encoding="utf-8", newline="\n") as out:
        out.write("\n".join(rows) + "\n")
    import classmap
    mapping = classmap.read(p)
    classmap.write(p, classmap.with_names(mapping, class_names(p)), classmap.rejected(p))


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    a = sub.add_parser("apply")
    a.add_argument("plan")
    a.add_argument("--dry-run", action="store_true")
    li = sub.add_parser("list")
    li.add_argument("pattern", nargs="?", default="")
    sub.add_parser("units")
    args = ap.parse_args()
    p = Project()
    if args.command == "apply":
        sys.exit(apply(p, json.loads(Path(args.plan).read_text(encoding="utf-8")), args.dry_run))
    if args.command == "units":  # units still named after a class names.txt has renamed
        units = unit_renames(p, {old: new for old, (new, _) in class_names(p).items()})
        rename_units(p, units)
        print(f"{len(units)} units renamed" + ("; next: python configure.py && ninja" if units else ""))
        return
    for kind, old, new, why in load_names(p):
        if re.search(args.pattern, f"{kind} {old} {new} {why}"):
            print(f"{kind:<9} {old:<16} {new:<28} {why}")


if __name__ == "__main__":
    main()
