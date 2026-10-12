#!/usr/bin/env python3
"""A naming worker's packet: a class's declaration and matched methods, or some units' functions, with the
evidence around them.

    python tools/agent/classinfo.py <Class> [--max-lines N]
    python tools/agent/classinfo.py --units Game/A.cpp,Game/B.cpp [--max-lines N]

Sections of a class's packet, each left out when empty:
  class       the header (include/Game/<Class>.h, or the class in a package header, include/<Package>/),
              its bases and the classes that derive from it
  methods     every matched method (src/): address, name, the source, the strings its code points
              at, what it calls and who calls it (with their names)
  fields      each placeholder field (UnknownXX) and the methods that use it
  vtable      for a class named after its vtable (Class_10E4AC78), the functions in its slots
  xbox        what the Xbox builds' twins of the class and its methods say (tools/agent/xbox.py), when
              build/agent/xbox.json exists: `Class::` names and source files, assertion and log messages
--units prints, for each unit, its declarations (runs of placeholder slots folded to a line) and every
function the same way as a method: neighbouring units hold what one source file of the game compiled to.
The names it shows are symbols.txt's. Evidence for names: the strings a function uses (log and error
messages, config keys, file names), the names of what it calls and of its callers, script member
names (include/<Package>/), the Xbox builds' messages, and what the code does.
"""
import argparse
import bisect
import re
import struct
import sys
from collections import defaultdict
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from common import FUNCTION_MARKER, Project, fmt_addr  # noqa: E402
from verify import TargetImage  # noqa: E402
import xbox  # noqa: E402

SLOT_LINE = re.compile(r"^\s*virtual [^;(]*\bVirtual\d+\([^;]*\);\s*$")


def calls_index(p: Project, pe) -> dict:
    """callee address -> sorted caller function starts, from every `call rel32` in executable sections."""
    base = pe.image_base
    starts = sorted(f.address for f in p.functions)
    callers = defaultdict(set)
    for sec in pe.sections:
        if not sec.executable:
            continue
        data = pe.read_rva(sec.va, sec.vsize)
        start = base + sec.va
        for i in range(len(data) - 5):
            if data[i] == 0xE8:
                target = (start + i + 5 + struct.unpack_from("<i", data, i + 1)[0]) & 0xFFFFFFFF
                k = bisect.bisect_right(starts, start + i) - 1
                if k >= 0:
                    callers[target].add(starts[k])
    return callers


def strings_in(pe, code: bytes) -> list:
    """The C strings (4+ printable characters) the dwords in `code` point at."""
    out = []
    for i in range(len(code) - 3):
        value = struct.unpack_from("<I", code, i)[0]
        rva = value - pe.image_base
        sec = pe.section_for_rva(rva) if 0 <= rva < pe.image_size else None
        if not sec or sec.executable:
            continue
        try:
            raw = pe.read_rva(rva, 96)
        except ValueError:
            continue
        text = raw.split(b"\0", 1)[0]
        if len(text) >= 4 and all(32 <= c < 127 for c in text) and text.decode() not in out:
            out.append(text.decode())
    return out


def callees_in(code: bytes, address: int) -> list:
    out = []
    for i in range(len(code) - 4):
        if code[i] == 0xE8:
            target = (address + i + 5 + struct.unpack_from("<i", code, i + 1)[0]) & 0xFFFFFFFF
            if target not in out:
                out.append(target)
    return out


def fold_slots(text: str) -> str:
    """Declarations with each run of three or more placeholder slots (`virtual void Virtual7();`) as one line."""
    out, run = [], []

    def flush() -> None:
        if len(run) >= 3:
            names = [re.search(r"\b(Virtual\d+)\(", ln).group(1) for ln in run]
            out.append(f"    // {len(run)} placeholder slots, {names[0]} to {names[-1]}")
        else:
            out.extend(run)
        run.clear()

    for line in text.splitlines():
        if SLOT_LINE.match(line):
            run.append(line)
        else:
            flush()
            out.append(line)
    flush()
    return "\n".join(out)


class Packet:
    """Prints functions with their evidence."""

    def __init__(self, p: Project, max_lines: int):
        self.p, self.max_lines = p, max_lines
        self.pe = TargetImage(p).pe
        self.twins = xbox.load(p)
        self.callers = calls_index(p, self.pe)
        self.fields = defaultdict(set)

    def name_of(self, a: int) -> str:
        return self.p.by_addr[a].name if a in self.p.by_addr else fmt_addr(a)

    def function(self, address: int, decorated: str, unit: Path, source: str) -> None:
        p, pe = self.p, self.pe
        size = p.by_addr[address].size if address in p.by_addr else 0
        code = pe.read_rva(address - pe.image_base, size) if size else b""
        lines = source.splitlines()
        print(f"\n-- {fmt_addr(address)} {decorated}  ({unit.relative_to(p.main).as_posix()})")
        print("\n".join(lines[:self.max_lines]) + (f"\n    ... {len(lines) - self.max_lines} more lines"
                                                    if len(lines) > self.max_lines else ""))
        strings = strings_in(pe, code)
        if strings:
            print("   strings:", " | ".join(repr(s) for s in strings[:12]))
        calls = [self.name_of(t) for t in callees_in(code, address) if t in p.by_addr]
        if calls:
            print("   calls:", ", ".join(calls[:16]))
        line = xbox.describe_function(xbox.function_evidence(self.twins, address))
        if line:
            print("   xbox:", line)
        who = sorted(self.callers.get(address, ()))
        if who:
            print("   called by:", ", ".join(self.name_of(a) for a in who[:12])
                  + (f" (+{len(who) - 12})" if len(who) > 12 else ""))
        for f in set(re.findall(r"\b(Unknown[0-9A-Fa-f]+|Pad[0-9A-Fa-f]+)\b", source)):
            short = re.match(r"^\?([^@?]+)@", decorated)
            self.fields[f].add(short.group(1) if short else fmt_addr(address))


def task_units(spec: str) -> list:
    """The units of `--units`: a comma-separated list, or `@<file>:<n>` for the nth task (from 1) of a JSON
    list of unit lists, `@<file>:<n>[a:b]` for a slice of it (a wave's queue file names the task)."""
    m = re.match(r"^@(.+):(\d+)(?:\[(\d*):(\d*)\])?$", spec)
    if not m:
        return [u for u in spec.split(",") if u]
    import json
    task = json.loads(Path(m.group(1)).read_text(encoding="utf-8"))[int(m.group(2)) - 1]
    return task[int(m.group(3) or 0):int(m.group(4)) if m.group(4) else len(task)]


def units_packet(p: Project, units: list, max_lines: int) -> None:
    packet = Packet(p, max_lines)
    for rel in units:
        unit = p.src_dir / rel
        if not unit.is_file():
            print(f"== unit {rel}: no such unit")
            continue
        text = unit.read_text(encoding="utf-8", errors="replace")
        marks = list(FUNCTION_MARKER.finditer(text))
        print(f"\n== unit {rel} ({len(marks)} functions)")
        print(fold_slots(text[:marks[0].start()] if marks else text).rstrip())
        for k, m in enumerate(marks):
            end = marks[k + 1].start() if k + 1 < len(marks) else len(text)
            packet.function(int(m.group(1), 16), m.group(2).strip(), unit, text[m.start():end].rstrip())


def class_packet(p: Project, cls: str, max_lines: int) -> None:
    header = p.include_dir / "Game" / f"{cls}.h"
    print(f"== class {cls}")
    if header.is_file():
        print(f"-- {header.relative_to(p.main).as_posix()}")
        print(header.read_text(encoding="utf-8", errors="replace").rstrip())
    else:
        for h in p.include_dir.glob("*/*Classes.h"):
            text = h.read_text(encoding="utf-8", errors="replace")
            m = re.search(rf"^class {re.escape(cls)}\b.*?^}};", text, re.M | re.S)
            if m:
                print(f"-- {h.relative_to(p.main).as_posix()}")
                print(m.group(0))
    derived = sorted(h.stem for h in (p.include_dir / "Game").glob("*.h")
                     if re.search(rf"^(?:class|struct) \w+ : public {re.escape(cls)}\b",
                                  h.read_text(encoding="utf-8", errors="replace"), re.M))
    if derived:
        print("-- derived:", ", ".join(derived))
    twins = xbox.load(p)
    tables = [cls] + [f"Class_{s.address:08X}" for s in p.symbols if s.name == f"??_7{cls}@@6B@"]
    for table in dict.fromkeys(tables):
        line = xbox.describe_class(xbox.class_evidence(twins, table))
        if line:
            print(f"-- xbox ({table}): {line}")

    methods = []  # (address, decorated, unit, source)
    for unit in sorted(p.src_dir.rglob("*.cpp")):
        text = unit.read_text(encoding="utf-8", errors="replace")
        marks = list(FUNCTION_MARKER.finditer(text))
        for k, m in enumerate(marks):
            decorated = m.group(2).strip()
            if re.search(rf"(?:^\?\?(?:_[GE]|[01])|@){re.escape(cls)}@@", decorated):
                end = marks[k + 1].start() if k + 1 < len(marks) else len(text)
                methods.append((int(m.group(1), 16), decorated, unit, text[m.start():end].rstrip()))
    if not methods:
        print(f"no matched methods of {cls} in src/")
        return
    packet = Packet(p, max_lines)
    pe = packet.pe
    print(f"\n== methods ({len(methods)})")
    for address, decorated, unit, source in sorted(methods):
        packet.function(address, decorated, unit, source)
    if packet.fields:
        print("\n== placeholder fields and the methods that use them")
        for f in sorted(packet.fields):
            print(f"   {f}: {', '.join(sorted(packet.fields[f]))}")
    m = re.match(r"^Class_([0-9A-Fa-f]{8})$", cls)
    if m:
        table = int(m.group(1), 16)
        slots = []
        for k in range(200):
            try:
                value = struct.unpack("<I", pe.read_rva(table - pe.image_base + 4 * k, 4))[0]
            except ValueError:
                break
            sec = pe.section_for_rva(value - pe.image_base) if value > pe.image_base else None
            if not sec or not sec.executable or (k and (table + 4 * k) in p.by_addr
                                                 and p.by_addr[table + 4 * k].name.startswith("??_7")):
                break
            slots.append(f"{k}: {packet.name_of(value)}")
        if slots:
            print(f"\n== vtable {fmt_addr(table)} ({len(slots)} slots)")
            print("   " + "\n   ".join(slots))


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cls", nargs="?")
    ap.add_argument("--units", help="comma-separated units (Game/X.cpp): their functions instead of a class's")
    ap.add_argument("--max-lines", type=int, default=80, help="source lines shown per function")
    args = ap.parse_args()
    p = Project()
    if args.units:
        units_packet(p, task_units(args.units), args.max_lines)
    elif args.cls:
        class_packet(p, args.cls, args.max_lines)
    else:
        ap.error("a class, or --units")


if __name__ == "__main__":
    main()
