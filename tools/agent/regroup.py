#!/usr/bin/env python3
"""Lead only: one unit per class. Move each class's functions into <Category>/<Class>.cpp.

    python tools/agent/regroup.py plan                     # what would move, by class
    python tools/agent/regroup.py apply [--classes A,B] [--jobs N] [--dry-run]
    python configure.py && ninja                           # then compare the report with the previous one

integrate.py puts a function where its address is: a class's functions end up in the unit named after
it, in overflow units beside it (<Class>_2.cpp, when the declarations of two of them clashed) and, for a
class nothing named yet, in the address chunk's Unsorted_<start>.cpp. The game's own sources had one file
per class. `apply` takes each class with functions outside <Class>.cpp and, one unit at a time, moves
them in:

  1. the functions are the ones whose `// FUNCTION:` name is a member of the class (a compiler-generated
     one follows the function that emits it);
  2. they bring the declarations they use from their unit (found by the names they mention, and the
     names those mention). A class the target already defines keeps the target's definition;
  3. the target, and the unit they left, are compiled and every function in both is compared with the
     code it had (bytes, relocations and their targets, in the objects of the last build). In one file
     MSVC inlines a small function into its callers and may order code otherwise: a move that changes
     any function is not made, and its functions stay where they are;
  4. a unit left without functions is deleted; one that keeps some loses the declarations only the
     moved ones used;
  5. splits.txt gets each changed unit's ranges (a function's code, and the .text$x ranges its unit
     held for it).

Run it on a built tree; build/agent/regroup-report.json lists what moved and what did not, and why.
"""
import argparse
import collections
import json
import re
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parent))

import coff  # noqa: E402
import headers  # noqa: E402
import integrate  # noqa: E402
import vslots  # noqa: E402
from common import (FUNCTION_MARKER, Project, atomic_write, demangle, fmt_addr, qualified_name, read_json,  # noqa: E402
                    splitslib)

WORD = re.compile(r"[A-Za-z_]\w*")
GENERATED = re.compile(r"emitted with the class's vtable by (0x[0-9A-Fa-f]+)")
DIR = "Game"
INCLUDED = re.compile(r'^#\s*include "Game/(\w+)\.h"')
PLACEHOLDER_CLASS = re.compile(r"[A-Za-z]+_[0-9A-Fa-f]{8}(?:_\w+)?")


class UnitState:
    def __init__(self, source: str, text: str):
        self.source = source
        head, self.blocks = integrate.parse_unit(text) if text else ("", {})
        self.items: List[str] = integrate.items(head)
        self.dirty = False

    def marks(self) -> Dict[int, str]:
        return {a: FUNCTION_MARKER.search(b).group(2).strip() for a, b in self.blocks.items()}

    def text(self) -> str:
        return integrate.compose(self.source, self.items, self.blocks)


def item_names(item: str) -> Set[str]:
    """The names an item declares: a class, a function, a variable, a typedef, a macro."""
    bare = integrate.normal(item)
    d = vslots.parse_class(item)
    if d is not None:
        return {d.name}
    m = re.match(r"^#\s*define\s+(\w+)", bare)
    if m:
        return {m.group(1)}
    if bare.startswith("#"):
        return set()
    m = re.match(r"^(?:class|struct|union|enum)\s+(\w+)\s*;", bare)
    if m:
        return {m.group(1)}
    m = re.match(r"^(?:typedef\b.*?|enum\s+)(\w+)\s*(?:;|\{)", bare)
    out = {m.group(1)} if m else set()
    head = bare.split("{")[0].split("=")[0]
    paren = head.find("(")
    before = head[:paren] if paren > 0 else head.rstrip(";")
    before = re.sub(r"\[[^\]]*\]", "", before)
    m = re.search(r"(\w+)\s*$", before)
    if m:
        out.add(m.group(1))
    if bare.startswith("enum"):
        out |= set(WORD.findall(bare))
    return out


def needed(items: List[str], blocks: List[str]) -> List[str]:
    """The items the blocks use, directly or through another item; #includes and what is not understood
    stay."""
    names = [item_names(i) for i in items]
    words = [set(WORD.findall(integrate.normal(i))) for i in items]
    used = set()
    for b in blocks:
        used |= set(WORD.findall(b))
    keep = [integrate.normal(i).startswith("#") and not integrate.normal(i).startswith("#define") or not names[k]
            for k, i in enumerate(items)]
    changed = True
    while changed:
        changed = False
        for k in range(len(items)):
            if not keep[k] and names[k] & used:
                keep[k] = True
            if keep[k] and not words[k] <= used:
                used |= words[k]
                changed = True
    return [i for k, i in enumerate(items) if keep[k]]


class Regrouper:
    def __init__(self, p: Project):
        self.p = p
        self.units: Dict[str, UnitState] = {}
        for path in sorted((p.src_dir / DIR).glob("*.cpp")):
            source = f"{DIR}/{path.name}"
            self.units[source] = UnitState(source, path.read_text(encoding="utf-8", errors="replace"))
        marks = {a: n for u in self.units.values() for a, n in u.marks().items()}
        dem = demangle(p, [n for n in marks.values() if n.startswith("?")])
        self.owner: Dict[int, str] = {}      # function -> its class
        self.home: Dict[int, str] = {}       # function -> the unit it was in when the tree was built
        for u in self.units.values():
            for a, n in u.marks().items():
                self.home[a] = u.source
                q = qualified_name(n, dem.get(n, ""))
                if "::" in q:
                    self.owner[a] = q.split("::")[0]
        for u in self.units.values():  # a compiler-generated function goes where its emitter goes
            for a, b in u.blocks.items():
                g = GENERATED.search(b)
                if g and int(g.group(1), 16) in self.owner:
                    self.owner[a] = self.owner[int(g.group(1), 16)]
        self.marks = marks
        self.ref: Dict[str, Dict[str, Tuple[bytes, Tuple]]] = {}
        self.work = Path(tempfile.mkdtemp(prefix="regroup-", dir=p.state_dir("tmp")))
        self.accepted = p.accepted()

    def reference(self, source: str) -> Dict[str, Tuple[bytes, Tuple]]:
        if source not in self.ref:
            obj = self.p.main / "build" / self.p.version / "src" / source.replace(".cpp", ".obj")
            self.ref[source] = headers.code_of(coff.Coff.load(obj)) if obj.is_file() else {}
        return self.ref[source]

    def same(self, source: str, items: List[str], blocks: Dict[int, str], tag: str) -> Optional[str]:
        """None when the unit, composed so, compiles each of its functions to the code it had."""
        if not blocks:
            return None
        path = self.work / tag / source
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(integrate.compose(source, items, blocks), encoding="utf-8")
        obj = path.with_suffix(".obj")
        ok, log = self.p.compile(path, obj, headers.cflags(self.p, source))
        if not ok:
            return "does not compile: " + next((re.sub(r"^.*\\", "", l) for l in log.splitlines() if " error " in l), log[:160])[:260]
        new = headers.code_of(coff.Coff.load(obj))
        for a in blocks:
            name = self.marks[a]
            old = self.reference(self.home[a])
            if name not in old:
                continue  # an alias of the address's name: tools/cc.py renames it; nothing to compare by
            if name not in new:
                return f"{fmt_addr(a)} is not emitted"
            if new[name] != old[name]:
                return f"{fmt_addr(a)} compiles to other code"
            for extra in old:  # its EH tables and funclets
                if extra != name and extra.endswith(name) or f"${name}$" in extra:
                    if extra in new and new[extra] != old[extra]:
                        return f"{fmt_addr(a)}: {extra.split('$')[1]} differs"
        return None

    def classes(self, only: Optional[Set[str]]) -> Dict[str, Dict[str, List[int]]]:
        """{class: {unit: its functions there}} for classes with functions outside <Class>.cpp."""
        out: Dict[str, Dict[str, List[int]]] = collections.defaultdict(lambda: collections.defaultdict(list))
        for u in self.units.values():
            for a in u.blocks:
                c = self.owner.get(a)
                if c and (only is None or c in only) and re.fullmatch(r"\w+", c):
                    out[c][u.source].append(a)
        # A class known only by one function's address (Class_<that address>) is not yet a class: its
        # function stays in its address chunk's unit until a second one joins it or it gets a name.
        return {c: dict(v) for c, v in out.items() if any(s != f"{DIR}/{c}.cpp" for s in v)
                and (not PLACEHOLDER_CLASS.fullmatch(c) or sum(map(len, v.values())) > 1)}

    def move(self, cls: str, where: Dict[str, List[int]]) -> dict:
        """Move the class's functions into its unit, a source unit at a time. Touches only the class's
        target and the units in `where`: classes with no unit in common run side by side."""
        target = f"{DIR}/{cls}.cpp"
        t = self.units.get(target) or UnitState(target, "")
        moved, kept = [], {}
        for source in sorted(where, key=lambda s: min(where[s])):
            if source == target:
                continue
            s = self.units[source]
            going = {a: s.blocks[a] for a in where[source]}
            staying = {a: b for a, b in s.blocks.items() if a not in going}
            have = {n for i in t.items for n in item_names(i) if vslots.parse_class(i) is not None}
            # and the classes its headers define: the copy a unit brings would define them again
            have |= {m.group(1) for i in t.items for m in [INCLUDED.match(integrate.normal(i))] if m}
            bring = [i for i in needed(s.items, list(going.values()))
                     if not (vslots.parse_class(i) is not None and item_names(i) & have)]
            seen = {integrate.normal(i) for i in t.items}
            t_items = t.items + [i for i in bring if integrate.normal(i) not in seen]
            t_blocks = {**t.blocks, **going}
            s_items = needed(s.items, list(staying.values())) if staying else []
            tag = f"{cls}-{len(moved) + len(kept)}"
            why = self.same(target, t_items, t_blocks, tag) or self.same(source, s_items, staying, tag)
            if why:
                kept[source] = why
                continue
            t.items, t.blocks, t.dirty = t_items, t_blocks, True
            s.items, s.blocks, s.dirty = s_items, staying, True
            moved.append(source)
        if moved:
            self.units[target] = t
        return {"class": cls, "moved": moved, "kept": kept, "functions": sum(len(where[s]) for s in moved)}


def write_splits(p: Project, rg: Regrouper, changed: List[str]) -> str:
    """splits.txt with the changed units' ranges: each function's code, and the .text$x ranges its
    unit held for it (a range stays with a unit that still has a function using it)."""
    declared = splitslib.load(p.splits_txt)
    text_x = p.text_x_range()
    held = {(a, b): u.source for u in declared for a, b in u.text if text_x[0] <= a < text_x[1]}
    wants: Dict[Tuple[int, int], List[str]] = collections.defaultdict(list)
    for source, u in rg.units.items():
        for a in u.blocks:
            for x, y in (rg.accepted.get(a) or {}).get("text_x", []):
                r = (int(x, 16), int(y, 16))
                if r in held:
                    wants[r].append(source)
    eh: Dict[str, List[Tuple[int, int]]] = collections.defaultdict(list)
    for r, sources in wants.items():
        owner = held[r] if held[r] in sources else sorted(sources)[0]
        eh[owner].append(r)
    text = p.splits_txt.read_text(encoding="utf-8")
    note = ".text$x: EH handlers and unwind funclets"
    for source in changed:
        u = rg.units[source]
        if not u.blocks:
            text = drop_unit(text, source)
            continue
        ranges = integrate.merge(p, [(a, p.code_extent(a)[1]) for a in u.blocks]) + sorted(eh.get(source, []))
        text = integrate.set_unit(drop_unit(text, source), source,
                                  [(a, b, note if text_x[0] <= a < text_x[1] else "") for a, b in ranges])
    return text


def drop_unit(text: str, source: str) -> str:
    lines = text.splitlines()
    out, skip = [], False
    for line in lines:
        bare = line.split("#", 1)[0].rstrip()
        if bare and not line[0].isspace() and bare.endswith(":"):
            skip = bare[:-1].strip() == source
        if not skip:
            out.append(line)
    return "\n".join(out) + "\n"


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    for name in ("plan", "apply"):
        s = sub.add_parser(name)
        s.add_argument("--classes")
        s.add_argument("--jobs", type=int, default=16)
        s.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    p = Project()
    rg = Regrouper(p)
    todo = rg.classes(set(args.classes.split(",")) if args.classes else None)
    if args.command == "plan":
        n = sum(len(a) for w in todo.values() for s, a in w.items() if s != f"{DIR}/{c_of(w, todo)}.cpp")
        print(f"{len(todo)} classes have functions outside their unit; {n} functions in "
              f"{len({s for w in todo.values() for s in w})} units")
        for cls, where in sorted(todo.items(), key=lambda kv: -sum(map(len, kv[1].values())))[:30]:
            print(f"  {cls:<40} {sum(map(len, where.values())):4} functions in {len(where):3} units")
        return
    results = []
    pending = dict(todo)
    while pending:  # rounds of classes that share no unit
        busy: Set[str] = set()
        batch = []
        for cls, where in sorted(pending.items(), key=lambda kv: -len(kv[1])):
            touched = set(where) | {f"{DIR}/{cls}.cpp"}
            if not touched & busy:
                busy |= touched
                batch.append(cls)
        with ThreadPoolExecutor(args.jobs) as pool:
            results += list(pool.map(lambda c: rg.move(c, pending[c]), batch))
        for cls in batch:
            del pending[cls]
        print(f"  {len(results)} of {len(todo)} classes done", flush=True)
    changed = sorted(s for s, u in rg.units.items() if u.dirty)
    moved = sum(r["functions"] for r in results)
    kept = {r["class"]: r["kept"] for r in results if r["kept"]}
    print(f"{moved} functions moved into their class's unit; {len(changed)} units changed, "
          f"{sum(1 for s in changed if not rg.units[s].blocks)} of them emptied; "
          f"{sum(len(k) for k in kept.values())} moves not made in {len(kept)} classes")
    why = collections.Counter(re.sub(r"0x[0-9A-Fa-f]+|'[^']*'|\(\d+\)|\S+\.cpp", "#", w)[:100] for k in kept.values() for w in k.values())
    for k, n in why.most_common(15):
        print(f"{n:5}  {k}")
    atomic_write(p.state / "regroup-report.json", json.dumps({"moved": {r["class"]: r["moved"] for r in results if r["moved"]},
                                                              "kept": kept}, indent=1) + "\n")
    if args.dry_run:
        return
    splits_text = write_splits(p, rg, changed)
    problems = integrate.check_splits(p, splits_text)
    if problems:
        sys.exit("splits.txt would be invalid:\n  " + "\n  ".join(problems[:10]))
    for source in changed:
        u = rg.units[source]
        path = p.src_dir / source
        if u.blocks:
            atomic_write(path, u.text())
        elif path.is_file():
            path.unlink()
    atomic_write(p.splits_txt, splits_text)
    # The state records where each function is now.
    for source in changed:
        for a in rg.units[source].blocks:
            rec_path = p.state / "accepted" / f"{a:08x}.json"
            rec = read_json(rec_path, None)
            if rec and rec.get("integrated") != source:
                rec["integrated"] = source
                atomic_write(rec_path, json.dumps(rec, indent=1))


def c_of(where, todo) -> str:
    return next(c for c, w in todo.items() if w is where)


if __name__ == "__main__":
    main()
