#!/usr/bin/env python3
"""Lead only: evidence for names from the Xbox builds of the game, paired with T3Main.exe's code.

    python tools/agent/xbox.py pair <T3Opt.xbe> [<T3Debug.xbe> ...]   # writes build/agent/xbox.json
    python tools/agent/xbox.py show <address|Class_X>                 # one function's or class's evidence
    python tools/agent/xbox.py classes [<regex>]                      # class-name candidates of placeholder classes

The Xbox development builds of April 2004 (T3Opt.xbe: optimized with assertions; T3Debug.xbe) carry
what the PC release dropped: assertion messages with their source files (`.\\TriggerSys\\TriggerSystem.cpp`),
debug names of arrays (`cTriggerSystem::m_ConditionTypes`) and log messages naming their functions.
They have no symbols. `pair` reads each build (your own copy; nothing of it enters the repository) and
pairs its functions with T3Main.exe's:

  1. through strings: a string one function of each program references, and no other;
  2. through vtables: tables with paired slots at the same index, or whose constructors are paired, are
     the same class; tables of one length pair every slot;
  3. through calls: paired functions calling as many functions pair their callees in order;
and repeats 2 and 3 until nothing new pairs. String pairs are reliable; the others are leads (about nine
in ten were right on T3Opt.xbe when the PC function's own strings could check them; fewer on
T3Debug.xbe, whose class layouts differ). Strings that more than 25 functions use (inline array checks,
timers) are dropped from the evidence.

`show` and tools/agent/classinfo.py print, for a function, its partner's strings, and for a class
(a vtable), the `Class::` prefixes its own methods' and constructors' partners use, most frequent first,
with their source files. A name still needs the PC code to agree with it.
"""
import argparse
import bisect
import collections
import json
import re
import struct
import sys
from pathlib import Path
from typing import Dict, List, Optional

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parent))
from common import Project, fmt_addr  # noqa: E402

PRINTABLE = re.compile(rb"[\x20-\x7e\t\r\n]{4,}")
PREFIX = re.compile(r"\b([A-Za-z_]\w+)::(~?[A-Za-z_]\w*)")
SOURCE = re.compile(r"([\w./\\-]+\.(?:cpp|c))\b", re.I)
COMMON = 25  # a string more functions use than this says nothing about any of them
TRUSTED = 0.7  # a pairing rule checked right less often than this, on a build, is dropped for that build


class Xbe:
    """An XBE's sections, read-only."""

    def __init__(self, path: Path):
        self.data = path.read_bytes()
        d = self.data
        if d[:4] != b"XBEH":
            raise SystemExit(f"{path}: not an XBE")
        self.base, = struct.unpack_from("<I", d, 0x104)
        self.time, = struct.unpack_from("<I", d, 0x114)
        count, headers = struct.unpack_from("<II", d, 0x11C)
        self.sections = []
        for k in range(count):
            flags, va, vsize, raw, rsize, name_addr = struct.unpack_from("<IIIIII", d, headers - self.base + 56 * k)
            name = d[name_addr - self.base:].split(b"\0", 1)[0].decode("latin-1")
            self.sections.append({"name": name, "va": va, "raw": raw, "rsize": rsize})

    def read(self, va: int, n: int) -> bytes:
        for s in self.sections:
            if s["va"] <= va < s["va"] + s["rsize"]:
                off = s["raw"] + va - s["va"]
                return self.data[off:off + n]
        raise ValueError(hex(va))

    def section(self, name: str):
        s = next(s for s in self.sections if s["name"] == name)
        return s["va"], self.data[s["raw"]:s["raw"] + s["rsize"]]


class Program:
    """One program's function starts, each function's strings, callees and data references, and its vtables."""

    def __init__(self, read, code, data, starts):
        self.read = read
        self.starts = sorted(starts)
        self.start_set = set(starts)
        self.strings = collections.defaultdict(list)
        self.calls = collections.defaultdict(list)
        self.refs_from = collections.defaultdict(set)  # data address -> the functions whose code holds it
        dlo = min(lo for lo, _ in data)
        dhi = max(lo + len(b) for lo, b in data)
        highs = b"|".join(re.escape(struct.pack("<H", h)) for h in range(dlo >> 16, ((dhi - 1) >> 16) + 1))
        candidate = re.compile(b"(?=..(?:" + highs + b"))", re.S)
        for lo, b in code:
            for m in candidate.finditer(b):
                v = struct.unpack_from("<I", b, m.start())[0]
                f = self.function_of(lo + m.start())
                if not dlo <= v < dhi or f is None:
                    continue
                self.refs_from[v].add(f)
                s = self.string(v)
                if s:
                    self.strings[f].append(s)
            for m in re.finditer(b"\xE8", b):
                i = m.start()
                if i + 5 > len(b):
                    continue
                t = self.through_thunk((lo + i + 5 + struct.unpack_from("<i", b, i + 1)[0]) & 0xFFFFFFFF)
                f = self.function_of(lo + i)
                if t in self.start_set and f is not None and f != t and t not in self.calls[f]:
                    self.calls[f].append(t)
        # Vtables: runs of function pointers in data, split where code points.
        self.vtables: Dict[int, List[int]] = {}
        for lo, b in data:
            n = len(b) // 4
            words = struct.unpack(f"<{n}I", b[:4 * n])
            run, start = [], None
            for k, v in enumerate(words + (0,)):
                at = lo + 4 * k
                if run and (v not in self.start_set or at in self.refs_from):
                    if len(run) >= 2 or start in self.refs_from:
                        self.vtables[start] = run
                    run = []
                if k < n and v in self.start_set:
                    if not run:
                        start = at
                    run.append(v)
        self.slots = collections.defaultdict(list)  # function -> [(vtable, slot)]
        for t, fs in self.vtables.items():
            for k, f in enumerate(fs):
                self.slots[f].append((t, k))
        self.owned = collections.defaultdict(set)  # function -> the vtables its code stores
        for t in self.vtables:
            for f in self.refs_from.get(t, ()):
                self.owned[f].add(t)

    def function_of(self, at: int) -> Optional[int]:
        k = bisect.bisect_right(self.starts, at) - 1
        return self.starts[k] if k >= 0 else None

    def through_thunk(self, t: int) -> int:
        """The function an incremental-link thunk (`jmp rel32`) at `t` jumps to; else `t`."""
        try:
            b = self.read(t, 5)
        except ValueError:
            return t
        return (t + 5 + struct.unpack_from("<i", b, 1)[0]) & 0xFFFFFFFF if len(b) == 5 and b[0] == 0xE9 else t

    def string(self, va: int) -> Optional[str]:
        try:
            raw = self.read(va - 1, 161)
        except ValueError:
            return None
        if len(raw) < 5 or (raw[0] != 0 and va & 3):  # the middle of a string
            return None
        text = raw[1:].split(b"\0", 1)[0]
        return text.decode("latin-1") if len(text) >= 4 and PRINTABLE.fullmatch(text) else None


def xbe_program(path: Path) -> Program:
    x = Xbe(path)
    lo, code = x.section(".text")
    data = [x.section(n) for n in (".rdata", ".data")]
    starts = set()
    for m in re.finditer(b"\xE8", code):  # call targets
        i = m.start()
        if i + 5 <= len(code):
            t = (lo + i + 5 + struct.unpack_from("<i", code, i + 1)[0]) & 0xFFFFFFFF
            if lo <= t < lo + len(code):
                starts.add(t)
    for m in re.finditer(b"(?<=[\\xC3\\xCC\\x90])\\x55\\x8B\\xEC", code):  # push ebp; mov ebp, esp after ret/padding
        starts.add(lo + m.start())
    for m in re.finditer(b"\\xC2..\\x55\\x8B\\xEC", code, re.S):  # after a ret N
        starts.add(lo + m.start() + 3)
    for dlo, b in data:  # pointers to code
        for k in range(0, len(b) - 3, 4):
            v = struct.unpack_from("<I", b, k)[0]
            if lo <= v < lo + len(code):
                starts.add(v)
    return Program(x.read, [(lo, code)], data, starts)


def pc_program(p: Project) -> Program:
    from verify import TargetImage
    pe = TargetImage(p).pe
    if pe is None:
        raise SystemExit("needs T3Main.exe (orig/)")
    base = pe.image_base
    code = [(base + s.va, pe.read_rva(s.va, s.initialized_size)) for s in pe.sections if s.executable]
    data = [(base + s.va, pe.read_rva(s.va, s.initialized_size)) for s in pe.sections
            if not s.executable and s.initialized_size]
    return Program(lambda va, n: pe.read_rva(va - base, n), code, data, {f.address for f in p.functions})


def pair(pc: Program, xb: Program):
    """({pc function: (xbe function, how)}, {pc vtable: xbe vtable})."""
    by_string = [collections.defaultdict(set), collections.defaultdict(set)]
    for side, prog in enumerate((pc, xb)):
        for f, ss in prog.strings.items():
            for s in ss:
                by_string[side][s].add(f)
    votes = collections.defaultdict(collections.Counter)
    for s, fs in by_string[0].items():
        if len(fs) == 1 and len(by_string[1].get(s, ())) == 1:
            votes[next(iter(fs))][next(iter(by_string[1][s]))] += 1
    fp = {}
    for f, c in votes.items():
        (g, n), = c.most_common(1)
        if n == sum(c.values()):
            fp[f] = (g, "string")
    taken = collections.Counter(g for g, _ in fp.values())
    fp = {f: v for f, v in fp.items() if taken[v[0]] == 1}
    vp: Dict[int, int] = {}
    for _ in range(8):
        before = len(fp)
        used = {g for g, _ in fp.values()}
        vv = collections.defaultdict(collections.Counter)
        for v, fs in pc.vtables.items():
            for k, f in enumerate(fs):  # a table's own slots (in no other table) vote for its twin
                g = fp.get(f, (None,))[0]
                if g is not None and len(pc.slots[f]) == 1 and len(xb.slots.get(g, ())) == 1 and xb.slots[g][0][1] == k:
                    vv[v][xb.slots[g][0][0]] += 1
            for f in pc.refs_from.get(v, ()):  # so do its constructors and destructors
                g = fp.get(f, (None,))[0]
                for w in xb.owned.get(g, ()) if g is not None else ():
                    vv[v][w] += 2
        for v, c in vv.items():
            top = c.most_common(2)
            if len(top) == 1 or top[1][1] < top[0][1]:
                vp[v] = top[0][0]
        twins = collections.Counter(vp.values())
        for v, w in vp.items():
            if twins[w] == 1 and len(pc.vtables[v]) == len(xb.vtables[w]):
                for f, g in zip(pc.vtables[v], xb.vtables[w]):
                    if f not in fp and g not in used and len(pc.slots[f]) <= 2 * len(xb.slots[g]) + 1:
                        fp[f] = (g, "vtable")
                        used.add(g)
        for f, (g, _) in list(fp.items()):  # call lists of one length, every paired callee in place
            a, b = pc.calls.get(f, []), xb.calls.get(g, [])
            if a and len(a) == len(b) and all(fp.get(c, (d,))[0] == d for c, d in zip(a, b)) \
                    and any(c in fp for c in a):
                for c, d in zip(a, b):
                    if c not in fp and d not in used:
                        fp[c] = (d, "calls")
                        used.add(d)
        # Strings no function uses alone, together: the one Xbox function using all of a PC function's strings.
        for f, ss in pc.strings.items():
            own = set(ss)
            if f in fp or len(own) < 2:
                continue
            rarest = min(own, key=lambda s: len(by_string[1].get(s, ())) or 1 << 30)
            found = [g for g in by_string[1].get(rarest, ()) if g not in used and own <= set(xb.strings[g])]
            if len(found) == 1:
                fp[f] = (found[0], "strings")
                used.add(found[0])
        # Callees: the one Xbox function calling the twins of three or more of a PC function's callees.
        callers = collections.defaultdict(set)
        for g, cs in xb.calls.items():
            for d in cs:
                callers[d].add(g)
        for f, cs in pc.calls.items():
            twins = {fp[c][0] for c in cs if c in fp}
            if f in fp or len(twins) < 3:
                continue
            found = set.intersection(*(callers.get(d, set()) for d in twins)) - used
            if len(found) == 1:
                g = found.pop()
                fp[f] = (g, "callees")
                used.add(g)
        if len(fp) == before:
            break
    return fp, vp


def precision(pc: Program, xb: Program, fp) -> Dict[str, float]:
    """For each structural rule, the share of its pairs whose Xbox twin uses all the PC function's own strings,
    of those it pairs with a PC function that has strings and a twin that uses all or none of them."""
    right, wrong = collections.Counter(), collections.Counter()
    for f, (g, how) in fp.items():
        own = set(pc.strings.get(f, ()))
        if how in ("string", "strings") or not own:
            continue
        shared = own & set(xb.strings.get(g, ()))
        if shared == own:
            right[how] += 1
        elif not shared:
            wrong[how] += 1
    return {k: round(right[k] / (right[k] + wrong[k]), 2) for k in set(right) | set(wrong)}


def evidence(pc: Program, xb: Program, fp, vp, build: str) -> dict:
    df = collections.Counter(s for ss in xb.strings.values() for s in set(ss))
    specific = lambda g: [s for s in dict.fromkeys(xb.strings.get(g, ())) if df[s] <= COMMON]  # noqa: E731
    out = {"functions": {}, "vtables": {}}
    for f, (g, how) in sorted(fp.items()):
        own = set(pc.strings.get(f, ()))
        strings = [s for s in specific(g) if s not in own]
        if strings or how == "string":
            out["functions"][fmt_addr(f)] = {"build": build, "xbe": fmt_addr(g), "how": how, "strings": strings[:24]}
    for v, w in sorted(vp.items()):
        names, sources = collections.Counter(), collections.Counter()
        own = [g for g in xb.vtables[w] if len(xb.slots[g]) == 1] + sorted(xb.refs_from.get(w, ()))
        for g in own:
            ss = specific(g)
            for pre in {m[0] for s in ss for m in PREFIX.findall(s)}:
                names[pre] += 1
            for src in {m.replace("/", "\\").split("\\")[-1] for s in ss for m in SOURCE.findall(s)}:
                sources[src] += 1
        out["vtables"][fmt_addr(v)] = {"build": build, "xbe": fmt_addr(w),
                                      "slots": [len(pc.vtables[v]), len(xb.vtables[w])],
                                      "names": names.most_common(6), "sources": sources.most_common(4)}
    return out


def store(p: Project) -> Path:
    return p.state / "xbox.json"


def load(p: Project) -> dict:
    path = store(p)
    return json.loads(path.read_text(encoding="utf-8")) if path.is_file() else {}


def function_evidence(data: dict, address: int) -> List[dict]:
    return (data.get("functions") or {}).get(fmt_addr(address), [])


def class_evidence(data: dict, cls: str) -> List[dict]:
    m = re.match(r"^Class_([0-9A-Fa-f]{8})$", cls)
    return (data.get("vtables") or {}).get(fmt_addr(int(m.group(1), 16)), []) if m else []


def rate(e: dict) -> str:
    """How far to trust a structural pair: its rule's checked share on that build."""
    return f" ~{e['rate']:.0%} right" if e.get("rate") else ""


def describe_function(entries: List[dict]) -> str:
    return " ; ".join(f"{e['build']} {e['how']}{rate(e)}: " + " | ".join(repr(s[:80]) for s in e["strings"][:8])
                      for e in entries if e["strings"])


def describe_class(entries: List[dict]) -> str:
    return " ; ".join(f"{e['build']} ({e['slots'][0]} slots, Xbox {e['slots'][1]}{rate(e)}): names "
                      + ", ".join(f"{n} {c}" for n, c in e["names"]) + (" ; files " + ", ".join(
                          f"{n} {c}" for n, c in e["sources"]) if e["sources"] else "")
                      for e in entries)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    a = sub.add_parser("pair")
    a.add_argument("xbe", nargs="+", type=Path)
    s = sub.add_parser("show")
    s.add_argument("what")
    c = sub.add_parser("classes")
    c.add_argument("pattern", nargs="?", default="")
    args = ap.parse_args()
    p = Project()
    if args.command == "pair":
        pc = pc_program(p)
        merged = {"builds": {}, "functions": collections.defaultdict(list), "vtables": collections.defaultdict(list)}
        for path in args.xbe:
            xb = xbe_program(path)
            fp, vp = pair(pc, xb)
            rates = precision(pc, xb, fp)
            dropped = sorted(k for k, r in rates.items() if r < TRUSTED)
            fp = {f: v for f, v in fp.items() if v[1] not in dropped}
            ev = evidence(pc, xb, fp, vp if "vtable" not in dropped else {}, path.stem)
            for e in ev["functions"].values():
                e["rate"] = rates.get(e["how"])
            for e in ev["vtables"].values():
                e["rate"] = rates.get("vtable")
            kinds = collections.Counter(how for _, how in fp.values())
            merged["builds"][path.stem] = {"functions": len(xb.starts), "vtables": len(xb.vtables),
                                           "paired": dict(kinds), "paired_vtables": len(ev["vtables"]),
                                           "precision": rates, "dropped": dropped}
            if dropped:
                print(f"{path.name}: dropped {', '.join(dropped)} pairs (checked right "
                      + ", ".join(f"{k} {rates[k]:.0%}" for k in dropped) + f", under {TRUSTED:.0%})")
            for kind in ("functions", "vtables"):
                for key, e in ev[kind].items():
                    merged[kind][key].append(e)
            print(f"{path.name}: {len(fp)} functions paired {dict(kinds)}, {len(ev['vtables'])} vtables")
        store(p).write_text(json.dumps(merged, indent=1) + "\n", encoding="utf-8")
        print(f"wrote {store(p).relative_to(p.main).as_posix()}")
        return
    data = load(p)
    if not data:
        raise SystemExit("no build/agent/xbox.json: run `xbox.py pair <T3Opt.xbe> [<T3Debug.xbe>]` first")
    if args.command == "show":
        if args.what.startswith("Class_"):
            print(describe_class(class_evidence(data, args.what)) or "no evidence")
        else:
            print(describe_function(function_evidence(data, p.parse_addr(args.what))) or "no evidence")
        return
    known = {h.stem for h in (p.include_dir / "Game").glob("*.h")}
    for v, entries in sorted(data["vtables"].items()):
        cls = f"Class_{int(v, 16):08X}"
        line = describe_class(entries)
        if any(e["names"] for e in entries) and re.search(args.pattern, f"{cls} {line}"):
            print(f"{cls}{'*' if cls in known else ' '} {line}")


if __name__ == "__main__":
    main()
