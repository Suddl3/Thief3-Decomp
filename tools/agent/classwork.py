#!/usr/bin/env python3
"""One declaration per class: the tool of a worker that removes the units' own copies of a class.

    python tools/agent/classwork.py list                    # classes the units still declare themselves
    python tools/agent/classwork.py next --id <ID>          # claim a class; prints its header and the copies
    python tools/agent/classwork.py diff <Class> [<unit>]   # a copy against the header, member by member
    python tools/agent/classwork.py check <Class>           # compile; every function still the same code?
    python tools/agent/classwork.py done <Class>            # check, then release the class
    python tools/agent/classwork.py giveup <Class> --why .. # put the files back as they were, release
    python tools/agent/classwork.py sweep                   # lead: restore what dead workers left claimed

A class has one declaration, in include/Game/<Class>.h (a native class: the generated package header and
its member file include/<Package>/<Class>.h). Units written before the header existed declare the class
themselves, each with the members its functions needed; tools/agent/adopt.py moved onto the header every
unit it could without judgement (members matched by offset and by vtable slot). What is left disagrees
with the header: a field the header types otherwise, a method with other parameters, a member the header
does not have. A worker (tools/agent/classer.md) settles one class: it makes the header say what the code
shows, removes the copies from the units, and adapts the code that used the copy's spelling.

`next` hands out a class none of whose units another worker holds, and keeps the files as they were
(build/agent/classwork/<Class>/orig/) for `giveup`. `check` compiles every unit that had a copy and
every unit that includes the header, and compares each function with the code it had in the last build
(bytes, relocations and their targets): the gate is that nothing changes. A unit another worker's
unfinished edit breaks is not held against this class (it fails with the header as it was, too).
"""
import argparse
import collections
import json
import os
import re
import shutil
import sys
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parent))

import classdecl  # noqa: E402
import coff  # noqa: E402
import headers  # noqa: E402
import integrate  # noqa: E402
import vslots  # noqa: E402
from common import FUNCTION_MARKER, Lock, Project, atomic_write, fmt_addr, read_json  # noqa: E402

DIR = "Game"
INCLUDE = re.compile(r'^\s*#\s*include\s+"([^"]+)"', re.M)
STALE = 3 * 3600


def state(p: Project) -> Path:
    return p.state_dir("classwork")


def unit_classes(text: str) -> Dict[str, Tuple[str, classdecl.ClassDecl]]:
    head, _ = integrate.parse_unit(text)
    out = {}
    for item in integrate.items(head):
        d = vslots.parse_class(item)
        if d is not None:
            out.setdefault(d.name, (item, d))
    return out


def header_of(p: Project, cls: str) -> Optional[Path]:
    path = p.include_dir / DIR / f"{cls}.h"
    if path.is_file():
        return path
    for h in p.include_dir.glob("*/*Classes.h"):
        if re.search(rf"^class {cls} : public \w+\s*$", h.read_text(encoding="utf-8"), re.M):
            return h
    return None


def copies(p: Project) -> Dict[str, List[str]]:
    """{class: the units that define it themselves}, for classes a header declares."""
    packaged = set()
    for h in p.include_dir.glob("*/*Classes.h"):
        packaged |= set(re.findall(r"^class (\w+) : public \w+\s*$", h.read_text(encoding="utf-8"), re.M))
    game = {h.stem for h in (p.include_dir / DIR).glob("*.h")}
    out = collections.defaultdict(list)
    for path in sorted((p.src_dir / DIR).glob("*.cpp")):
        for name in unit_classes(path.read_text(encoding="utf-8", errors="replace")):
            if name in game or name in packaged:
                out[name].append(f"{DIR}/{path.name}")
    return dict(out)


def claims(p: Project) -> Dict[str, dict]:
    out = {}
    for path in state(p).glob("*/claim.json"):
        rec = read_json(path, None)
        if rec:
            out[rec["class"]] = rec
    return out


def includers(p: Project, header: Path) -> List[str]:
    """The units that include the header, directly or through another header."""
    rel = header.relative_to(p.include_dir).as_posix()
    graph: Dict[str, Set[str]] = {}
    for h in p.include_dir.rglob("*.h"):
        graph[h.relative_to(p.include_dir).as_posix()] = set(INCLUDE.findall(h.read_text(encoding="utf-8", errors="replace")))
    reach = {rel}
    changed = True
    while changed:
        changed = False
        for h, incs in graph.items():
            if h not in reach and incs & reach:
                reach.add(h)
                changed = True
    out = []
    for path in sorted((p.src_dir / DIR).glob("*.cpp")):
        if set(INCLUDE.findall(path.read_text(encoding="utf-8", errors="replace"))) & reach:
            out.append(f"{DIR}/{path.name}")
    return out


def same(p: Project, source: str, work: Path, first: Optional[Path] = None) -> Optional[str]:
    """None when the unit compiles each of its functions to the code it had in the last build."""
    path = p.src_dir / source
    text = path.read_text(encoding="utf-8", errors="replace")
    ref = p.main / "build" / p.version / "src" / source.replace(".cpp", ".obj")
    if not ref.is_file():
        return "has no object from the last build (the lead runs ninja)"
    obj = work / source.replace(".cpp", ".obj")
    cflags = headers.cflags(p, source)
    if first is not None:
        import adopt
        ok, log = adopt.compile_with(p, path, obj, cflags, first)
    else:
        ok, log = p.compile(path, obj, cflags)
    if not ok:
        errors = [re.sub(r"^.*\\", "", l) for l in log.splitlines() if " error " in l]
        return "does not compile: " + " | ".join(errors[:3])[:500]
    old, new = headers.code_of(coff.Coff.load(ref)), headers.code_of(coff.Coff.load(obj))
    for m in FUNCTION_MARKER.finditer(text):
        name, a = m.group(2).strip(), int(m.group(1), 16)
        if name not in old:  # an alias of the address's name: tools/cc.py gives the object that one
            sym = p.by_addr.get(a)
            name = sym.name if sym is not None and sym.address == a else name
            if name not in old:
                continue
        if name not in new:
            return f"{fmt_addr(a)} ({name}) is no longer emitted: its name or signature changed"
        if new[name] != old[name]:
            return f"{fmt_addr(a)} ({name}) compiles to other code"
        for extra in old:  # its EH tables and funclets: a member that gained or lost a destructor shows here
            if f"${name}" in extra and (extra not in new or new[extra] != old[extra]):
                return (f"{fmt_addr(a)} ({name}): its exception tables changed ({extra.split('$')[0].strip('_')}): "
                        f"a member's type now has, or no longer has, a constructor or destructor")
    return None


def check(p: Project, cls: str, jobs: int) -> Tuple[List[str], List[str]]:
    """(problems, units checked)."""
    rec = claims(p).get(cls)
    if rec is None:
        return [f"{cls} is not claimed: run next"], []
    header = p.main / rec["header"]
    units = sorted(set(rec["units"]) | set(includers(p, header)))
    work = state(p) / cls / "check"
    orig = state(p) / cls / "orig" / "include"
    problems = []
    left = [u for u in rec["units"] if cls in unit_classes((p.src_dir / u).read_text(encoding="utf-8", errors="replace"))]
    problems += [f"{u} still defines {cls} itself" for u in left]

    def one(source: str) -> Optional[str]:
        why = same(p, source, work)
        if why and source not in rec["units"] and same(p, source, work / "before", orig):
            return None  # broken without this class's changes too: another worker's unit, mid-edit
        return f"{source}: {why}" if why else None
    with ThreadPoolExecutor(jobs) as pool:
        problems += [x for x in pool.map(one, units) if x]
    return problems, units


def snapshot(p: Project, cls: str, header: Path, units: List[str]) -> None:
    root = state(p) / cls / "orig"
    if root.is_dir():
        shutil.rmtree(root)
    for path in [header] + [p.src_dir / u for u in units]:
        out = root / path.relative_to(p.main)
        out.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, out)
    # the package header's member file too, when the class is a native one
    member = next(iter(p.include_dir.glob(f"*/{cls}.h")), None)
    if member is not None and member != header:
        out = root / member.relative_to(p.main)
        out.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(member, out)


def restore(p: Project, cls: str) -> int:
    root = state(p) / cls / "orig"
    n = 0
    for path in root.rglob("*"):
        if path.is_file():
            shutil.copy2(path, p.main / path.relative_to(root))
            n += 1
    return n


def describe(decl: classdecl.ClassDecl) -> List[str]:
    rows = []
    for m in decl.members:
        if m.kind == "field":
            where = f"+0x{m.offset:03X} size 0x{m.size:X}" if m.offset >= 0 else "+?"
            rows.append(f"  field  {where:<22} {m.type}{' ' + m.array if m.array else ''} {m.name}")
        elif m.kind in ("method", "virtual", "ctor", "dtor"):
            rows.append(f"  {m.kind:<7}{'':<22} {' '.join(classdecl.normal(classdecl.declaration_only(m).text).split())}")
        elif m.kind == "other":
            rows.append(f"  other  {'':<22} {' '.join(classdecl.normal(m.text).split())[:120]}")
    return rows


def measure(p: Project, declarations: str, decl: classdecl.ClassDecl, work: Path, first: Optional[Path] = None) -> Optional[str]:
    text, order = classdecl.probe_source(declarations, [decl])
    work.mkdir(parents=True, exist_ok=True)
    path = work / f"probe_{decl.name}.cpp"
    path.write_text(text, encoding="utf-8")
    ok, log = p.compile(path, path.with_suffix(".obj"), list(p.configure.CFLAGS))
    if not ok:
        return next((l for l in log.splitlines() if " error " in l), log[:200])
    classdecl.read_probe(path.with_suffix(".obj").read_bytes(), [decl], order)
    return None


def diff(p: Project, cls: str, unit: Optional[str]) -> None:
    header = header_of(p, cls)
    work = state(p) / cls / "diff"
    hd = None
    if header is not None:
        for item in integrate.items(header.read_text(encoding="utf-8", errors="replace")):
            d = vslots.parse_class(item)
            if d is not None and d.name == cls:
                hd = d
                err = measure(p, f'#include "{header.relative_to(p.include_dir).as_posix()}"\n', d, work)
                print(f"== the header, {header.relative_to(p.main).as_posix()}" + (f"  (not measured: {err})" if err else f"  (0x{d.size:X} bytes)"))
                print("\n".join(describe(d)))
    listed = [unit] if unit else copies(p).get(cls, [])
    for source in listed:
        text = (p.src_dir / source).read_text(encoding="utf-8", errors="replace")
        found = unit_classes(text).get(cls)
        if found is None:
            print(f"== {source}: no copy of {cls}")
            continue
        _, d = found
        head, _ = integrate.parse_unit(text)
        err = measure(p, head, d, work)
        print(f"== {source}" + (f"  (not measured: {err})" if err else f"  (0x{d.size:X} bytes)"))
        if hd is None:
            print("\n".join(describe(d)))
            continue
        have = {m.key for m in hd.members}
        by_offset = {m.offset: m for m in hd.fields() if m.offset >= 0}
        for m in d.members:
            if m.kind == "field":
                h = by_offset.get(m.offset)
                if h is None:
                    inside = next((x for x in hd.fields() if 0 <= x.offset < m.offset < x.offset + x.size), None)
                    print(f"  field  +0x{m.offset:03X} {m.type}{' ' + m.array if m.array else ''} {m.name}: the header has "
                          + (f"it inside `{inside.type}{' ' + inside.array if inside.array else ''} {inside.name}` (+0x{inside.offset:03X})" if inside else "nothing there"))
                elif (h.name, classdecl.normal(h.type), h.array) != (m.name, classdecl.normal(m.type), m.array):
                    print(f"  field  +0x{m.offset:03X} {m.type}{' ' + m.array if m.array else ''} {m.name}: the header has "
                          f"`{h.type}{' ' + h.array if h.array else ''} {h.name}`")
            elif m.kind in ("method", "virtual", "ctor") and m.key not in have:
                near = [x for x in hd.members if x.name == m.name]
                print(f"  {m.kind} {' '.join(classdecl.normal(classdecl.declaration_only(m).text).split())}: the header has "
                      + (" / ".join(' '.join(classdecl.normal(classdecl.declaration_only(x).text).split()) for x in near) if near else "no such member"))
            elif m.kind == "other" and m.key not in have:
                print(f"  other  {' '.join(classdecl.normal(m.text).split())[:110]}: not in the header")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    sub.add_parser("list")
    s = sub.add_parser("next")
    s.add_argument("--id", required=True)
    s.add_argument("--max-units", type=int, default=12)
    s.add_argument("--only", help="a file listing the classes to hand out, one a line")
    s = sub.add_parser("diff")
    s.add_argument("cls")
    s.add_argument("unit", nargs="?")
    for name in ("check", "done", "giveup"):
        s = sub.add_parser(name)
        s.add_argument("cls")
        s.add_argument("--jobs", type=int, default=6)
        s.add_argument("--why", default="")
    sub.add_parser("sweep")
    args = ap.parse_args()
    p = Project()
    if args.command == "list":
        todo = copies(p)
        print(f"{sum(map(len, todo.values()))} copies of {len(todo)} classes")
        for cls, units in sorted(todo.items(), key=lambda kv: -len(kv[1]))[:40]:
            print(f"  {cls:<36} {len(units):4}")
        return
    if args.command == "next":
        with Lock(state(p) / "lock", wait=120):
            held = claims(p)
            busy = {u for r in held.values() for u in r["units"]}
            finished = set(read_json(state(p) / "finished.json", []) or [])
            only = None
            if args.only:
                only = [l.strip() for l in Path(args.only).read_text(encoding="utf-8").splitlines() if l.strip()]
            todo = copies(p)
            order = only if only is not None else sorted(todo, key=lambda c: (len(todo[c]), c))
            for cls in order:
                units = todo.get(cls)
                if not units or cls in held or cls in finished or len(units) > args.max_units or set(units) & busy:
                    continue
                header = header_of(p, cls)
                if header is None or header.name.endswith("Classes.h"):
                    continue  # a native class's slots and their names are the lead's (vslots.py, adopt.py)
                snapshot(p, cls, header, units)
                rec = {"class": cls, "id": args.id, "header": header.relative_to(p.main).as_posix(), "units": units,
                       "at": time.time()}
                atomic_write(state(p) / cls / "claim.json", json.dumps(rec, indent=1))
                member = next(iter(p.include_dir.glob(f"*/{cls}.h")), None)
                if member is not None and member != header:
                    rec["member_file"] = member.relative_to(p.main).as_posix()
                print(json.dumps(rec, indent=1))
                return
        print(json.dumps({"class": None, "note": "nothing left to hand out: stop"}))
        return
    if args.command == "diff":
        diff(p, args.cls, args.unit)
        return
    if args.command == "sweep":
        for cls, rec in claims(p).items():
            if time.time() - rec["at"] > STALE:
                n = restore(p, cls)
                (state(p) / cls / "claim.json").unlink()
                print(f"{cls}: claimed by {rec['id']} and left; {n} files put back")
        return
    rec = claims(p).get(args.cls)
    if rec is None:
        sys.exit(f"{args.cls} is not claimed")
    if args.command == "giveup":
        n = restore(p, args.cls)
        (state(p) / args.cls / "claim.json").unlink()
        with Lock(state(p) / "lock", wait=120):
            log = read_json(state(p) / "givenup.json", {}) or {}
            log[args.cls] = args.why
            atomic_write(state(p) / "givenup.json", json.dumps(log, indent=1))
            done = set(read_json(state(p) / "finished.json", []) or []) | {args.cls}
            atomic_write(state(p) / "finished.json", json.dumps(sorted(done)))
        print(json.dumps({"class": args.cls, "restored": n}))
        return
    problems, units = check(p, args.cls, args.jobs)
    if problems:
        print(f"{len(problems)} problems in {len(units)} units:")
        for x in problems[:12]:
            print("  " + x)
        sys.exit(1)
    print(f"{len(units)} units compile to the same code")
    if args.command == "done":
        (state(p) / args.cls / "claim.json").unlink()
        with Lock(state(p) / "lock", wait=120):
            done = set(read_json(state(p) / "finished.json", []) or []) | {args.cls}
            atomic_write(state(p) / "finished.json", json.dumps(sorted(done)))
            log = read_json(state(p) / "done.json", {}) or {}
            log[args.cls] = {"id": rec["id"], "units": rec["units"]}
            atomic_write(state(p) / "done.json", json.dumps(log, indent=1))
        print(json.dumps({"class": args.cls, "done": True, "copies_removed": len(rec["units"])}))


if __name__ == "__main__":
    main()
