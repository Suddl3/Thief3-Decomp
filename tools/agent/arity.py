#!/usr/bin/env python3
"""Lead only: names whose stack arguments disagree with what their function pops.

    python tools/agent/arity.py [addr ...] [-o build/agent/tmp/arity.json]

A function's returns say how many bytes of arguments it pops: `ret N` for __stdcall and __thiscall, a
plain `ret` for __cdecl. Each decorated name symbols.txt gives a function (its own or an alias), and each
name an accepted function proposes for an unnamed callee, is demangled and its stack arguments summed
(common.stack_bytes). A disagreement is a wrong name: a caller's guess (a no-argument placeholder on a
function that pops arguments, mostly), or a nested call whose pushes an accepted source gave to the wrong
call (MSVC pushes an outer call's arguments before it evaluates an inner one, so both spellings compile
alike when both callees clean the stack). try.py and accept.py refuse new ones (verify.py, _Check.arity);
this finds those already recorded. Signatures with a class passed by value or varargs are skipped.
"""
import argparse
import json
import sys
from collections import defaultdict
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from common import Project, demangle, fmt_addr, stack_bytes  # noqa: E402
from verify import TargetImage  # noqa: E402


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("addrs", nargs="*", help="only these functions")
    ap.add_argument("-o", "--out", help="the findings as JSON (default build/agent/tmp/arity.json)")
    args = ap.parse_args()
    p = Project()
    image = TargetImage(p)
    wanted = {p.parse_addr(a) for a in args.addrs}

    names = defaultdict(set)  # address -> {(name, where it comes from)}
    for s in p.symbols:
        if s.is_function or s.type == "alias":
            if s.name.startswith("?"):
                names[s.address].add((s.name, "symbols.txt"))
    for record in p.accepted().values():
        for b in record.get("bindings", []):
            if b.get("kind") == "function" and b.get("status") == "provisional" and b["name"].startswith("?"):
                names[int(b["addr"], 16)].add((b["name"], f"accepted {record['addr']}"))
    if wanted:
        names = {a: v for a, v in names.items() if a in wanted}

    dem = demangle(p, sorted({n for v in names.values() for n, _ in v}))
    findings = []
    for address in sorted(names):
        if address not in p.by_addr or not p.by_addr[address].is_function:
            continue
        pops = image.pops(address)
        if pops is None:
            continue
        for name, where in sorted(names[address]):
            sig = stack_bytes(dem.get(name, ""))
            if not sig:
                continue
            conv, total, sret = sig
            if pops in ({0} if conv == "__cdecl" else {total, total + 4} if sret else {total}):
                continue
            findings.append({"addr": fmt_addr(address), "pops": pops, "name": name, "convention": conv,
                             "name_pops": total, "from": where, "demangled": dem.get(name, "")})
    out = Path(args.out) if args.out else p.state / "tmp" / "arity.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(findings, indent=1) + "\n", encoding="utf-8")
    for f in findings:
        print(f"{f['addr']} ret {f['pops']:#x}, the name {f['name_pops']:#x} ({f['convention']}): {f['name']}  "
              f"[{f['from']}]")
    print(f"{len(findings)} names on {len({f['addr'] for f in findings})} functions disagree with their returns; "
          f"wrote {out}")


if __name__ == "__main__":
    main()
