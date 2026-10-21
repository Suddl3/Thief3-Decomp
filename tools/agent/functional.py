#!/usr/bin/env python3
"""How close a function's source is to the game's code when it does not match byte for byte.

    python tools/agent/functional.py check <addr> <source.cpp> [--show N]   # the logic differences
    python tools/agent/functional.py list                                    # src/functional/ and its scores
    python tools/agent/functional.py write                                   # progress/<version>/functional.tsv

A large function rarely matches byte for byte for long: MSVC allocates registers and stack slots over
the whole function, so one variable more or less moves every offset after it. Such a function can still
be the game's logic exactly, written as C++ (Functional C, which bytematch.dev lists beside the matched
code and never counts as matched). `check` compiles the source and lines its code up with the target's
(objdiff, as try.py does), then sorts every differing row:

  - allocation: the same instruction with other registers or other stack slots, or a register spill,
    reload or copy one side has and the other does not (mov, push, pop, lea, xchg between registers and
    the stack);
  - logic: anything else: another operation, another constant, another field offset, another callee,
    another string, a branch the other side lacks.

It prints the share of the target's instructions that are equal or differ in allocation only, and the
logic rows, which are what to fix. A function whose logic rows are all explained (an inlined copy of a
helper where the game called it, a branch laid out elsewhere) may be listed as Functional C:

  src/functional/<Category>/<Unit>.cpp   // FUNCTIONAL: 0x<ADDR> <name> <confidence> <logic-equal %>

`write` lists those lines' functions in progress/<version>/functional.tsv (name, address, confidence),
which CI publishes beside the report. Confidence: high (logic rows all explained, or checked in game),
medium (90% or more logic-equal), low (less).
"""
import argparse
import re
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parent))

from common import Project, atomic_write, fmt_addr  # noqa: E402

REG = r"(?:e?[abcd]x|[abcd][lh]|e?[sd]i|e?[sb]p|st(?:\(\d\))?)"
STACK = re.compile(r"\[(?:esp|ebp)(?:[+-]0x[0-9a-f]+|[+-]\d+)?\]")
REGISTER = re.compile(rf"\b{REG}\b")
FUNCTIONAL = re.compile(r"^// FUNCTIONAL: (?:0x)?([0-9A-Fa-f]{8}) (\S+)(?: (high|medium|low))?(?: ([\d.]+)%?)?", re.M)
SHUFFLE = {"mov", "push", "pop", "lea", "xchg", "fld", "fstp", "fst", "fxch"}


def normal(text: str) -> str:
    """An instruction with its registers and stack slots made anonymous: what allocation cannot change."""
    text = STACK.sub("[S]", text.lower())
    text = REGISTER.sub("R", text)
    text = re.sub(r"\s+", " ", text).strip()
    return text


def allocation(text: str) -> bool:
    """A row only one side has that moves values between registers and the stack (a spill or a copy)."""
    t = text.lower().strip()
    op = t.split(" ", 1)[0]
    if op not in SHUFFLE:
        return False
    operands = t[len(op):]
    # registers and stack slots only: no field of an object, no global, no constant other than 0
    rest = REGISTER.sub("", STACK.sub("", operands))
    rest = re.sub(r"\b(?:dword|word|byte|qword|ptr|st)\b|[,\s]", "", rest)
    return rest in ("", "0x0", "0")


USES = re.compile(r"the candidate uses (\S+); the target uses (0x[0-9A-Fa-f]+)")


def same_names(p: Project, notes) -> bool:
    """Every note says only that the candidate calls the target's function by another of its names."""
    for n in notes:
        m = USES.search(n)
        if not m:
            return False
        sym = p.by_name.get(m.group(1))
        if sym is None or sym.address != int(m.group(2), 16):
            return False
    return bool(notes)


def classify(res, p: Project) -> dict:
    out = {"equal": 0, "allocation": 0, "logic": [], "total": 0}
    for row in res.rows:
        t = row.t.text if row.t else None
        s = row.s.text if row.s else None
        if t is not None:
            out["total"] += 1
        if not row.kind:
            out["equal"] += 1
            continue
        if row.kind in ("reloc", "bytes") and (not any("uses" in n for n in row.notes) or same_names(p, row.notes)):
            out["allocation" if t else "equal"] += 1
            continue
        if t is not None and s is not None and normal(t) == normal(s) and not row.notes:
            out["allocation"] += 1
            continue
        if (t is None and s is not None and allocation(s)) or (s is None and t is not None and allocation(t)):
            if t is not None:
                out["allocation"] += 1
            continue
        out["logic"].append(row)
    return out


TOKEN = re.compile(r"\b(call|push)\s+(?:dword ptr \[)?([?@$\w]+(?:@[^\s\]]*)?)")


def literal(data: bytes) -> str:
    """A C string at the start of `data`, or "" when it is not one."""
    raw = data.split(b"\0", 1)[0]
    if len(raw) < 2 or any(c < 0x20 or c > 0x7e for c in raw):
        return ""
    return "str:" + raw.decode("latin-1")


def skeleton(p: Project, res, obj=None, image=None) -> tuple:
    """(target, candidate): the order each side calls functions and pushes globals, strings and constants
    in, each as the address or value it stands for: what the code does, wherever it lays it out."""
    names = {b.name: b.addr for b in res.bindings}
    strings = {}
    if obj is not None:
        for s in obj.symbols:
            if s.defined and s.name.startswith("??_C@"):
                a, b = obj.extent(s)
                strings[s.name] = literal(obj.section(s.section).data[a:b] + b"\0")

    def target_string(address: int):
        if image is None:
            return None
        try:
            text = literal(image.pe.read_rva(address - image.pe.image_base, 256))
        except Exception:
            return None
        return text or None

    def resolve(name: str):
        if name in strings and strings[name]:
            return strings[name]
        if re.fullmatch(r"0x[0-9a-f]+|\d+", name):
            return "imm:" + name
        m = re.fullmatch(r"(?:FUN|DAT|LAB)_([0-9a-fA-F]{8})", name)
        if m:
            address = int(m.group(1), 16)
            return target_string(address) or address
        if name in names:
            return names[name]
        sym = p.by_name.get(name)
        return sym.address if sym is not None else name

    sides = ([], [])
    for row in res.rows:
        for k, insn in enumerate((row.t, row.s)):
            if insn is None:
                continue
            m = TOKEN.search(insn.text)
            if m and not REGISTER.fullmatch(m.group(2)):
                sides[k].append((m.group(1), resolve(m.group(2)), insn.offset))
    return sides


def check(p: Project, address: int, source: Path) -> dict:
    from verify import Verifier
    v = Verifier(p)
    work = p.state_dir("tmp") / f"functional-{address:08X}"
    work.mkdir(parents=True, exist_ok=True)
    obj = work / "candidate.obj"
    ok, log = p.compile(source, obj, p.cflags_for(address))
    if not ok:
        return {"error": "\n".join(l for l in log.splitlines() if " error " in l)[:2000]}
    res = v.run(address, None, work, compiled=obj)
    c = classify(res, p)
    target_rows = c["total"] or 1
    logic_target = sum(1 for r in c["logic"] if r.t is not None)
    c["match"] = res.match
    c["score"] = res.score
    c["logic_equal"] = 100.0 * (target_rows - logic_target) / target_rows
    import difflib
    import coff
    tgt, cand = skeleton(p, res, coff.Coff.load(obj), v.image)
    sm = difflib.SequenceMatcher(None, [x[:2] for x in tgt], [x[:2] for x in cand], autojunk=False)
    c["skeleton"] = 100.0 * sm.ratio()
    c["skeleton_diffs"] = [(op, tgt[i1:i2], cand[j1:j2]) for op, i1, i2, j1, j2 in sm.get_opcodes() if op != "equal"]
    import collections
    tc = collections.Counter(x[:2] for x in tgt)
    cc = collections.Counter(x[:2] for x in cand)
    c["missing"] = sorted((tc - cc).items(), key=str)   # the target does it, the candidate does not
    c["extra"] = sorted((cc - tc).items(), key=str)     # the other way round
    shared = sum((tc & cc).values())
    c["same_ops"] = 100.0 * shared / max(1, sum(tc.values()))
    c["calls"] = (len(tgt), len(cand))
    return c


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    s = sub.add_parser("check")
    s.add_argument("addr")
    s.add_argument("source")
    s.add_argument("--show", type=int, default=40)
    sub.add_parser("list")
    sub.add_parser("write")
    args = ap.parse_args()
    p = Project()
    if args.command == "check":
        address = p.parse_addr(args.addr)
        c = check(p, address, Path(args.source))
        if "error" in c:
            print("BUILD FAILED\n" + c["error"])
            sys.exit(1)
        logic = c["logic"]
        print(f"{fmt_addr(address)}: byte score {c['score']:.1f}%, logic-equal {c['logic_equal']:.1f}% "
              f"({c['equal']} equal, {c['allocation']} allocation only, {len(logic)} logic rows of "
              f"{c['total']}){' MATCH' if c['match'] else ''}")
        print(f"  calls and pushes: {c['same_ops']:.1f}% of the target's present ({c['calls'][0]} in the target, "
              f"{c['calls'][1]} in the candidate), {c['skeleton']:.1f}% in the same order")
        name = lambda v: fmt_addr(v) if isinstance(v, int) else str(v)[:60]
        for (op, v), n in c["missing"][:args.show]:
            print(f"    missing  {n}x {op} {name(v)}")
        for (op, v), n in c["extra"][:args.show]:
            print(f"    extra    {n}x {op} {name(v)}")
        for op, ts, cs in []:
            fmt = lambda xs: ", ".join(f"{x[0]} {fmt_addr(x[1]) if isinstance(x[1], int) else x[1][:28]}" for x in xs[:3]) + (" ..." if len(xs) > 3 else "")
            print(f"    {op:<8} {('@%04x ' % ts[0][2]) if ts else '      '}{fmt(ts)[:70]:<70} | {fmt(cs)[:70]}")
        if args.show:
            print("  first logic rows:")
        for row in logic[:args.show]:
            off = f"{row.t.offset:04x}" if row.t else "    "
            print(f"  {off}  {(row.t.text if row.t else '')[:46]:<46} | {(row.s.text if row.s else '')[:46]}")
            for n in row.notes[:1]:
                print(f"        ! {n[:150]}")
        return
    rows = []
    for path in sorted((p.src_dir / "functional").rglob("*.cpp")) if (p.src_dir / "functional").is_dir() else []:
        for m in FUNCTIONAL.finditer(path.read_text(encoding="utf-8", errors="replace")):
            rows.append((m.group(2), int(m.group(1), 16), m.group(3) or "", m.group(4) or "",
                         path.relative_to(p.src_dir).as_posix()))
    if args.command == "list":
        for name, a, conf, pct, unit in rows:
            print(f"{fmt_addr(a)}  {conf or 'unrated':<8} {pct + '%' if pct else '':>7}  {unit}  {name}")
        print(f"{len(rows)} functions in Functional C")
        return
    head = ["# Functions written as Functional C (src/functional/): the game's logic, not its bytes.",
            "# name\taddress\tconfidence"]
    out = p.main / "progress" / p.version / "functional.tsv"
    atomic_write(out, "\n".join(head + [f"{n}\t{fmt_addr(a)}\t{c}" for n, a, c, _, _ in rows]) + "\n")
    print(f"wrote {out.relative_to(p.main).as_posix()}: {len(rows)} functions")


if __name__ == "__main__":
    main()
