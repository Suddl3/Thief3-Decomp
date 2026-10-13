#!/usr/bin/env python3
"""Lead only: move the units off their own copies of the native classes, onto the package headers.

    python tools/agent/adopt.py methods [--rev HEAD]         # include/<Package>/<Class>.h: what the units declare
    python tools/assets/t3classes.py headers                 # the package headers, with those and every slot
    python tools/agent/adopt.py apply [--rev HEAD] [units]   # move the units; build/agent/adopt/report.json
    python tools/agent/adopt.py check [units]                # each unit's functions against the target

The package headers (include/<Package>/<Package>Classes.h, tools/assets/t3classes.py) declare each native
class once: its fields from the scripts, its whole vtable from the exe (tools/agent/vslots.py). A unit
written before they did declares the class itself: with a row of `Virtual<N>` up to the slot it calls,
numbered from wherever its base stopped, with fields named after their offsets, and with the methods it
defines. `apply` replaces that copy with the header:

  1. each virtual function of the copy is the slot the copy's layout gives it (vslots.Sources, with the
     headers as they were at --rev: the copy was numbered against those), or, for one the unit defines,
     the slot the exe's table has that function in; each field is the header's field at its offset (the
     copy's layout measured by MSVC). Where the header's name differs, the copy's member is renamed to a
     token and the compiler finds its uses: a use of a member that is gone is an error at its line;
  2. the tokens take the header's names, the copy goes, the header is included, and every function of
     the unit is compared with the target (the gate integrate.py uses). A unit that fails is left as it
     was, with the reason in the report: a parameter a caller typed otherwise, a field whose type the
     script does not know, a method that is in no table.

The methods a class has besides its virtual functions are nowhere in the scripts or the tables: `methods`
collects them from the units' copies into include/<Package>/<Class>.h, which the generated header includes
inside the class (as Unreal's own headers do). Those files are then kept by hand.
"""
import argparse
import collections
import json
import os
import re
import struct
import subprocess
import sys
import threading
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parent))

import classdecl  # noqa: E402
import coff  # noqa: E402
import integrate  # noqa: E402
import vslots  # noqa: E402
from common import (FUNCTION_MARKER, Project, addr_key, atomic_write, demangle, fmt_addr, qualified_name,  # noqa: E402
                    tool_path)
from verify import Verifier  # noqa: E402

CORE_CLASSES = ("UObject", "UField", "UStruct", "UState", "UClass", "UFunction", "UProperty")
ERROR = re.compile(r"\((\d+)\) : (?:fatal )?error (C\d+): (.*)$")
QUOTED = re.compile(r"'([^']*)'")
PACKAGE_HEADER = re.compile(r"^(\w+)Classes\.h$")
FIELD_COMMENT = re.compile(r"^\s*(?P<type>[\w:<>\*\s,]+?)\s+(?P<name>\w+)(?P<array>\[[^\]]*\])?(?::1)?;\s*//\s*0x(?P<off>[0-9A-Fa-f]+)")


def package_classes(p: Project) -> Dict[str, str]:
    """{class: package} for the classes the generated headers define."""
    out = {}
    for h in sorted(p.include_dir.glob("*/*Classes.h")):
        for m in re.finditer(r"^class (\w+) : public \w+\s*$", h.read_text(encoding="utf-8"), re.M):
            out[m.group(1)] = h.parent.name
    return out


def old_include(p: Project, rev: str) -> Path:
    """include/ as it was at `rev`, for the files the generator writes and Core.h: a unit's own copies were
    numbered and laid out against those."""
    root = p.state_dir("adopt") / "old-include"
    then = vslots.export_of(p, rev) / p.include_dir.relative_to(p.main)
    for h in list(then.glob("*/*Classes.h")) + [then / "Core" / "Core.h"]:
        out = root / h.relative_to(then)
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(h.read_bytes())
    return root


def compile_with(p: Project, source: Path, output: Path, cflags: List[str], first: Optional[Path] = None) -> Tuple[bool, str]:
    """Project.compile, with `first` searched before include/."""
    if first is None:
        return p.compile(source, output, cflags)
    output.parent.mkdir(parents=True, exist_ok=True)
    if output.exists():
        output.unlink()
    command, cwd = p.compile_command(source, output, cflags)
    if not isinstance(command, str) or " /Iinclude " not in command:
        return False, "cannot place an include directory first: the cc rule is not the one configure.py writes"
    command = command.replace(" /Iinclude ", f" /I{tool_path(first, cwd)} /Iinclude ", 1)
    program, sep, rest = command.partition(" ")
    if os.name == "nt" and not Path(program.strip('"')).is_absolute() and (cwd / program).is_file():
        command = f'"{cwd / program}"{sep}{rest}'
    try:
        proc = subprocess.run(command, cwd=cwd, shell=os.name != "nt", capture_output=True, text=True, errors="replace",
                              timeout=300)
    except (OSError, subprocess.TimeoutExpired) as e:
        return False, f"cannot run the compiler: {e}"
    lines = [ln for ln in (proc.stdout + proc.stderr).splitlines() if ln.strip() and ln.strip() != source.name]
    return proc.returncode == 0 and output.is_file(), "\n".join(lines)


def header_fields(p: Project, model: vslots.Model) -> Dict[str, Dict[int, Tuple[str, str]]]:
    """{class: {offset: (name, type)}} from the generated headers' offset comments, bases included."""
    own: Dict[str, Dict[int, Tuple[str, str]]] = collections.defaultdict(dict)
    for h in sorted(p.include_dir.glob("*/*Classes.h")):
        cls = None
        for line in h.read_text(encoding="utf-8").splitlines():
            m = re.match(r"^class (\w+) : public \w+\s*$", line)
            if m:
                cls = m.group(1)
            elif line.startswith("};"):
                cls = None
            elif cls:
                f = FIELD_COMMENT.match(line)
                if f and "BITFIELD" not in f.group("type"):
                    own[cls][int(f.group("off"), 16)] = (f.group("name"), f.group("type").strip() + (f.group("array") or ""))
    out = {}
    for cls in model.classes:
        merged = {}
        for c in reversed(model.lineage(cls)):
            merged.update(own.get(c, {}))
        out[cls] = merged
    out["<own>"] = own
    return out


class Unit:
    def __init__(self, source: str, text: str):
        self.source, self.text = source, text
        self.head, self.blocks = integrate.parse_unit(text)
        self.items = integrate.items(self.head)
        self.classes: Dict[str, Tuple[int, classdecl.ClassDecl]] = {}
        for i, item in enumerate(self.items):
            d = vslots.parse_class(item)
            if d is not None and d.name not in self.classes:
                self.classes[d.name] = (i, d)

    def local(self) -> Dict[str, classdecl.ClassDecl]:
        return {n: d for n, (_, d) in self.classes.items()}

    def compose(self) -> str:
        first = self.text.split("\n", 2)
        banner = "\n".join(first[:2]) + "\n" if self.text.startswith("// ") else ""
        includes = [i for i in self.items if integrate.normal(i).startswith("#")]
        rest = [i for i in self.items if not integrate.normal(i).startswith("#")]
        parts = [banner, "".join(includes), "\n".join(rest)] + [self.blocks[a] for a in sorted(self.blocks)]
        return "\n".join(x.rstrip("\n") + "\n" for x in parts if x.strip())


class Adopter:
    def __init__(self, p: Project, rev: str):
        self.p, self.rev = p, rev
        self.model = vslots.Model(p, rev=rev)
        self.old = self.model.sources               # the headers as the units' copies were written against
        self.new = vslots.Sources(p)                # the tree's
        self.packages = package_classes(p)
        self.fields = header_fields(p, self.model)
        self.own_fields = self.fields.pop("<own>")
        self.old_dir = old_include(p, rev)
        self.verifier = Verifier(p)
        self.work = p.state_dir("tmp") / "adopt"
        self._slot_names: Dict[str, Dict[int, str]] = {}
        self.only: Optional[set] = None   # the classes to move, when not all
        self.check_all = False            # compare a unit with no copy too
        self.migrated: set = set()        # units an earlier run moved
        self.all_defined = self.definitions()
        self.game: Dict[str, Path] = {}  # the classes include/Game/ declares, each in its header
        for path in sorted((p.include_dir / "Game").glob("*.h")):
            for item in integrate.items(path.read_text(encoding="utf-8", errors="replace")):
                d = vslots.parse_class(item)
                if d is not None:
                    self.game.setdefault(d.name, path)
        self._game_fields: Dict[str, Dict[int, Tuple[str, str]]] = {}
        self._lock = threading.Lock()
        self._class_locks: Dict[str, threading.Lock] = {}
        # Classes of include/Game/ that add virtual functions to a native class: {class: (file, tokens, final)}.
        self.header_rebased: Dict[str, Tuple[Path, Dict[Tuple[str, str], str], Dict[str, Optional[str]]]] = {}

    def include_of(self, cls: str) -> str:
        if cls in self.packages:
            return f'#include "{self.packages[cls]}/{self.packages[cls]}Classes.h"\n'
        return f'#include "Game/{self.game[cls].name}"\n'

    def fields_of(self, cls: str) -> Dict[int, Tuple[str, str]]:
        """{offset: (name, type)} of a class as its header lays it out: the generated headers say, MSVC
        measures the others (the class's own fields and its bases')."""
        if cls in self.packages:
            return self.fields.get(cls, {})
        with self._lock:
            if cls in self._game_fields:
                return self._game_fields[cls]
            mine = self._class_locks.setdefault(cls, threading.Lock())
        with mine:  # one measurement of a class at a time: its probe is one file
            with self._lock:
                if cls in self._game_fields:
                    return self._game_fields[cls]
            return self._measure_fields(cls)

    def _measure_fields(self, cls: str) -> Dict[int, Tuple[str, str]]:
        out: Dict[int, Tuple[str, str]] = {}
        chain = [c for c in self.new.chain(cls, {}) if c in self.new.headers]
        fields = [f for c in chain for f in self.new.headers[c].fields() if "static " not in classdecl.normal(f.text)]
        if fields:
            work = self.work / "headers"
            work.mkdir(parents=True, exist_ok=True)
            names = [f.name for f in fields]
            values = ", ".join([f"T3_OFFSETOF({cls}, {n})" for n in names])
            source = work / f"{cls}.cpp"
            source.write_text("#define private public\n#define protected public\n" + self.include_of(cls)
                              + "#define T3_OFFSETOF(c, m) ((unsigned)(&((c*)0)->m))\n"
                              + f'extern "C" const unsigned int t3_probe[] = {{ {values} }};\n', encoding="utf-8")
            ok, _ = self.p.compile(source, source.with_suffix(".obj"), list(self.p.configure.CFLAGS))
            if ok:
                c = coff.Coff(source.with_suffix(".obj").read_bytes())
                sym = next((s for s in c.symbols if s.name == "_t3_probe"), None)
                if sym is not None:
                    data = c.sections[sym.section - 1].data
                    for i, f in enumerate(fields):
                        out.setdefault(struct.unpack_from("<I", data, sym.value + 4 * i)[0], (f.name, f.type + f.array))
        with self._lock:
            self._game_fields[cls] = out
        return out

    def definitions(self) -> Dict[Tuple[str, str], int]:
        """{(class, method): address} for every function src/ defines."""
        marks = {}
        for path in sorted(self.p.src_dir.rglob("*.cpp")):
            for m in FUNCTION_MARKER.finditer(path.read_text(encoding="utf-8", errors="replace")):
                marks[int(m.group(1), 16)] = m.group(2).strip()
        dem = demangle(self.p, [n for n in marks.values() if n.startswith("?")])
        out = {}
        for a, n in marks.items():
            q = qualified_name(n, dem.get(n, ""))
            if "::" in q:
                cls, name = q.rsplit("::", 1)
                out[(cls, name)] = a
        return out

    def grown(self, cls: str, local: Dict[str, classdecl.ClassDecl]) -> Optional[Tuple[str, int]]:
        """(base, its length now) when `cls`, not a native class itself, adds virtual functions to a base
        whose table the headers now declare longer than its copy counted from."""
        decl = local.get(cls) or self.old.headers.get(cls)
        if decl is None or cls in self.packages:
            return None
        base = self.old.base(decl)
        if not base:
            return None
        lay, was = self.old.layout(cls, local), self.old.layout(base, local)
        now = self.new.layout(base, {}) if base in self.packages or base in CORE_CLASSES else None
        if lay is None or was is None or now is None or not any(added for _, _, added in lay[2]):
            return None
        return (base, now[1]) if now[1] != was[1] else None

    def rebase(self, cls: str, decl: classdecl.ClassDecl, local: Dict[str, classdecl.ClassDecl], base: str,
               length: int) -> Tuple[Optional[str], Dict[Tuple[str, str], str], Dict[str, Optional[str]], str]:
        """(the class with its virtual functions where the table has them, tokens, final names, problem).
        A virtual the copy added below the base's real length is the base's slot: it goes, unless src/
        defines it (then it stays, as the override it is); the others keep their order from the base's
        length on, each named after its slot, with the slots between declared too."""
        tokens: Dict[Tuple[str, str], str] = {}
        final: Dict[str, Optional[str]] = {}
        names = self.slot_names(base)
        text, kept, first = decl.text, {}, True
        for m, slot, added in self.old.layout(cls, local)[2]:
            if not added or m.kind == "dtor":
                continue
            if m.text not in text:
                return None, {}, {}, f"{cls}::{m.name}: its declaration is not found in the class"
            placeholder = bool(vslots.PLACEHOLDER.match(m.name))
            if slot < length:
                new = names.get(slot)
                if new is None:
                    return None, {}, {}, f"{cls}::{m.name} is slot {slot}, which {base} does not declare"
                stays = (cls, m.name) in self.all_defined
            else:
                new = f"Virtual{slot}" if placeholder else m.name
                stays = True
            if new != m.name:
                token = f"T3S_{cls}_{slot}_"
                tokens[(cls, m.name)] = token
                final[token] = new
            if stays and slot >= length:
                line = re.sub(rf"\b{re.escape(m.name)}\b", new, classdecl.normal(m.text))
                kept[slot] = f"    {line}\n"
            elif stays:
                line = re.sub(rf"\b{re.escape(m.name)}\b", new, classdecl.normal(m.text))
                kept[-1 - len(kept)] = f"    {line}\n"  # an override: its place does not matter
            text = text.replace(m.text, "/*T3_VIRTUALS*/" if first else "", 1)
            first = False
        own = [k for k in kept if k >= length]
        rows = [kept[k] for k in sorted(k for k in kept if k < 0)]
        for k in range(length, max(own) + 1 if own else length):
            rows.append(kept.get(k, f"    virtual void Virtual{k}();\n"))
        text = text.replace("/*T3_VIRTUALS*/", "\n" + "".join(rows).rstrip("\n") if rows else "", 1)
        return re.sub(r"\n{3,}", "\n\n", text), tokens, final, ""

    def absorb_methods(self, units: List[str], write: bool) -> List[str]:
        """Declare in each class's header the member functions the units' copies declare and it lacks: a
        declaration more changes no other unit's code, and without it the copy cannot go. A method the
        header has under the same name with as many parameters is left alone (one of the two guessed its
        types: that is for a reader to settle)."""
        wanted: Dict[str, Dict[str, str]] = collections.defaultdict(dict)
        for source in units:
            path = self.p.src_dir / source
            unit = Unit(source, path.read_text(encoding="utf-8", errors="replace"))
            for cls, (_, decl) in unit.classes.items():
                head = self.new.headers.get(cls)
                if cls not in self.game or head is None or (self.only is not None and cls not in self.only):
                    continue
                have = {m.key for m in head.members}
                same = {(m.name, arity(m.key)) for m in head.members if m.kind in ("method", "virtual", "ctor")}
                for m in decl.members:
                    if m.kind not in ("method", "ctor") or m.key in have or (m.name, arity(m.key)) in same:
                        continue
                    if classdecl.normal(m.text).startswith(("virtual ", "friend ", "DECLARE_")):
                        continue
                    m = classdecl.declaration_only(m) if m.body else m
                    wanted[cls].setdefault(m.key, "    " + " ".join(classdecl.normal(m.text).split()) + "\n")
        notes = []
        for cls, members in sorted(wanted.items()):
            path = self.game[cls]
            text = path.read_text(encoding="utf-8", errors="replace")
            head = self.new.headers[cls]
            last = None
            for m in head.members:
                if m.kind in ("method", "virtual", "ctor", "dtor") and m.text in text:
                    last = m
            if last is None:
                continue
            anchor = last.text if last.text.endswith("\n") else last.text + "\n"
            if anchor not in text:
                continue
            if write:
                added = "".join(members[k] for k in sorted(members))
                grown = text.replace(anchor, anchor + added, 1)
                # The game's classes the new declarations name are declared ahead of the class.
                words = set(re.findall(r"[A-Za-z_]\w*", added))
                forward = "".join(f"{self.new.headers[w].kind} {w};\n" for w in sorted(words)
                                  if w in self.game and w != cls and not re.search(rf"\b{w}\b", text))
                at = grown.find(head.text.lstrip("\n")[:40])
                if forward and at > 0:
                    grown = grown[:at] + forward + "\n" + grown[at:]
                probe = self.work / "headers" / f"alone_{cls}.cpp"
                probe.parent.mkdir(parents=True, exist_ok=True)
                probe.write_text(f'#include "Game/{path.name}"\n', encoding="utf-8")
                ok = False
                for candidate in (grown, re.sub(r"(#define \w+_H\n)", r'\1\n#include "Core/Core.h"\n', grown, count=1)):
                    atomic_write(path, candidate)
                    ok, _ = self.p.compile(probe, probe.with_suffix(".obj"), list(self.p.configure.CFLAGS))
                    if ok:
                        break
                if not ok:  # a parameter of a type the header cannot name: the copy stays
                    atomic_write(path, text)
                    continue
            notes.append(f"{path.name}: {len(members)} member functions declared")
        if notes and write:
            self.new = vslots.Sources(self.p)
            self._slot_names = {}
        return notes

    def prepare_headers(self, write: bool) -> List[str]:
        """Re-base the classes of include/Game/ that need it: the header in the tree as it will be, and
        beside the old package headers a copy whose members are tokens, for finding their uses."""
        notes = []
        for path in sorted((self.p.include_dir / "Game").glob("*.h")):
            now = path.read_text(encoding="utf-8", errors="replace")
            then = vslots.export_of(self.p, self.rev) / path.relative_to(self.p.main)
            text = then.read_text(encoding="utf-8", errors="replace").replace("\r\n", "\n") if then.is_file() else now
            for item in integrate.items(text):
                d = vslots.parse_class(item)
                grown = self.grown(d.name, {}) if d is not None else None
                if grown is None:
                    continue
                new, tokens, final, problem = self.rebase(d.name, d, {}, *grown)
                if new is None:
                    notes.append(f"{path.name}: {problem}")
                    continue
                marked = item
                for m in d.members:
                    token = tokens.get((d.name, m.name))
                    if token and m.kind == "virtual":
                        marked = marked.replace(m.text, re.sub(rf"\b{re.escape(m.name)}\b", token, m.text), 1)
                out = self.old_dir / "Game" / path.name
                out.parent.mkdir(parents=True, exist_ok=True)
                out.write_text(text.replace(item, marked, 1), encoding="utf-8", newline="\n")
                self.header_rebased[d.name] = (path, tokens, final)
                if write and now.replace("\r\n", "\n") == text:  # not moved by an earlier run
                    atomic_write(path, text.replace(item, new, 1))
                notes.append(f"{path.name}: {d.name} now starts at {grown[0]}'s slot {grown[1]}; "
                             f"{len(tokens)} of its virtual functions renamed")
        self.new = vslots.Sources(self.p)
        self._slot_names = {}
        return notes

    def slot_names(self, cls: str) -> Dict[int, str]:
        """{slot: name} as the tree's headers declare the class's table."""
        if cls not in self._slot_names:
            lay = self.new.layout(cls, {})
            names = {}
            if lay is not None:
                for key, slot in lay[0].items():
                    names[slot] = key.split("(")[0]
            self._slot_names[cls] = names
        return self._slot_names[cls]

    def cflags(self, source: str) -> List[str]:
        return list(self.p.configure.UNITS.get(source, {}).get("cflags", self.p.configure.CFLAGS))

    # -- step 1: tokens ----------------------------------------------------------------------
    def measure(self, unit: Unit, names: List[str], work: Path) -> Optional[str]:
        decls = [unit.classes[n][1] for n in names]
        text, order = classdecl.probe_source(unit.head, decls)
        path = work / "probe.cpp"
        path.write_text(text, encoding="utf-8")
        ok, log = compile_with(self.p, path, path.with_suffix(".obj"), self.cflags(unit.source), self.old_dir)
        if not ok:
            return "its declarations do not compile alone: " + first_error(log)
        classdecl.read_probe(path.with_suffix(".obj").read_bytes(), decls, order)
        return None

    def plan(self, unit: Unit, drop: List[str], work: Path) -> Tuple[Dict[Tuple[str, str], str], Dict[str, Optional[str]], List[str]]:
        """({(class, member): token}, {token: the header's name, None without one}, problems)."""
        tokens: Dict[Tuple[str, str], str] = {}
        final: Dict[str, Optional[str]] = {}
        problems: List[str] = []
        local = unit.local()
        defined = self.defined(unit)
        for cls in drop:
            decl = unit.classes[cls][1]
            lay = self.old.layout(cls, local)
            names = self.slot_names(cls)
            table = self.model.tables.get(cls, [])
            if lay is None:
                problems.append(f"{cls}: its copy's bases are not all known")
                continue
            seen: Dict[str, int] = {}
            for m, slot, _ in lay[2]:
                if m.kind == "dtor":
                    continue
                at = defined.get((cls, m.name))
                if at is not None:  # a function the unit defines is in the slot the exe has it in
                    slots = [k for k, f in enumerate(table) if f == at]
                    old_name = names.get(slot)
                    if not slots:
                        problems.append(f"{cls}::{m.name} ({fmt_addr(at)}) is declared virtual, and is in no slot of {cls}'s table")
                        continue
                    if slot not in slots:
                        slot = slots[0] if len(slots) == 1 or old_name is None else next(
                            (k for k in slots if names.get(k) == m.name), slots[0])
                if m.name in seen and seen[m.name] != slot:
                    problems.append(f"{cls}::{m.name} is declared for slots {seen[m.name]} and {slot}")
                    continue
                seen[m.name] = slot
                new = names.get(slot)
                if new == m.name:
                    continue
                token = f"T3S_{cls}_{slot}_"
                tokens[(cls, m.name)] = token
                final[token] = new
            for m in decl.members:  # a method the copy does not call virtual, which the table has in a slot
                at = defined.get((cls, m.name)) if m.kind == "method" else None
                slots = [k for k, f in enumerate(table) if f == at] if at is not None else []
                if len(slots) == 1 and names.get(slots[0]) not in (None, m.name) and (cls, m.name) not in tokens:
                    token = f"T3S_{cls}_{slots[0]}_"
                    tokens[(cls, m.name)] = token
                    final[token] = names[slots[0]]
            for f in decl.fields():
                if f.offset < 0:
                    continue
                known = self.fields_of(cls).get(f.offset)
                if known and known[0] == f.name:
                    continue
                token = f"T3F_{cls}_{f.offset:X}_"
                tokens[(cls, f.name)] = token
                final[token] = known[0] if known else None
        return tokens, final, problems

    def defined(self, unit: Unit) -> Dict[Tuple[str, str], int]:
        """{(class, method): address} for the functions the unit defines."""
        marks = {a: FUNCTION_MARKER.search(b).group(2).strip() for a, b in unit.blocks.items()}
        dem = demangle(self.p, [n for n in marks.values() if n.startswith("?")])
        out = {}
        for a, n in marks.items():
            q = qualified_name(n, dem.get(n, ""))
            if "::" in q:
                cls, name = q.rsplit("::", 1)
                out[(cls, name)] = a
        return out

    def tokenize(self, unit: Unit, drop: List[str], tokens: Dict[Tuple[str, str], str], work: Path) -> Tuple[Optional[str], Optional[str]]:
        """(the unit's text with every use of a renamed member as its token, None) or (None, why not)."""
        items = list(unit.items)
        for cls in drop:
            if cls not in unit.classes:
                continue  # a header's class: its members are tokens in the copy beside the old headers
            i, decl = unit.classes[cls]
            item = items[i]
            for m in decl.members:
                token = tokens.get((cls, m.name))
                if token and m.kind in ("virtual", "field", "method"):
                    renamed = re.sub(rf"\b{re.escape(m.name)}\b(?!\s*::)", token, m.text, count=0)
                    if m.text not in item:
                        return None, f"{cls}::{m.name}: its declaration is not found in the copy"
                    item = item.replace(m.text, renamed, 1)
            items[i] = item
        by_name: Dict[str, Dict[str, str]] = collections.defaultdict(dict)
        for (cls, name), token in tokens.items():
            by_name[name][cls] = token
        local = unit.local()
        head = "".join(items)
        blocks = {a: b for a, b in unit.blocks.items()}
        path = work / "tokens.cpp"
        for _ in range(40):
            order = sorted(blocks)
            text = head + "\n" + "".join(blocks[a] for a in order)
            path.write_text(text, encoding="utf-8")
            ok, log = compile_with(self.p, path, path.with_suffix(".obj"), self.cflags(unit.source), self.old_dir)
            if ok:
                return text, None
            lines = text.split("\n")
            changed = False
            for raw in log.splitlines():
                e = ERROR.search(raw)
                if not e:
                    continue
                n, code, message = int(e.group(1)) - 1, e.group(2), e.group(3)
                quoted = QUOTED.findall(message)
                if code not in ("C2039", "C2065", "C3861", "C2509", "C2614") or not quoted or n >= len(lines):
                    continue
                name = quoted[1] if code == "C2614" and len(quoted) > 1 else quoted[0]
                owner = quoted[0] if code == "C2614" else quoted[1] if code in ("C2039", "C2509") and len(quoted) > 1 else None
                options = by_name.get(name)
                if not options:
                    continue
                if owner is None:
                    owner = enclosing_class(lines, n)
                token = None
                for c in self.old.chain(owner, local) if owner else []:
                    if c in options:
                        token = options[c]
                        break
                if token is None and len(set(options.values())) == 1:
                    token = next(iter(options.values()))
                if token is None:
                    continue
                at = n
                if code == "C2614":  # reported at the constructor's brace: the initializer is above
                    at = next((k for k in range(n, max(n - 8, -1), -1) if re.search(rf"\b{re.escape(name)}\b", lines[k])), n)
                new_line = re.sub(rf"\b{re.escape(name)}\b", token, lines[at])
                if new_line != lines[at]:
                    lines[at] = new_line
                    changed = True
            if not changed:
                return None, "with its members renamed: " + first_error(log)
            text = "\n".join(lines)
            head, blocks = split_blocks(text)
        return None, "its members' uses were not all found"

    # -- step 2: the header ------------------------------------------------------------------
    def convert(self, source: str) -> dict:
        """Move the unit onto the headers: every copy it has at once, else (when the unit matched before)
        the ones that can go, tried one at a time on top of those already gone."""
        path = self.p.src_dir / source
        text = path.read_text(encoding="utf-8", errors="replace")
        unit = Unit(source, text)
        candidates = [n for n in unit.classes if n in self.packages or n in self.game]
        if self.only is not None:
            candidates = [n for n in candidates if n in self.only]
        first = self.attempt(source, text, candidates, True)
        if first["status"] != "failed" or len(candidates) < 2 or first.get("broken"):
            return first
        done, whys = [], {}
        for cls in candidates:
            r = self.attempt(source, text, [cls], False)
            if r["status"] == "moved":
                text = r["text"]
                done.append(cls)
            else:
                whys[cls] = r.get("why", "")
        if not done:
            return first
        failures, renamed, text = self.verify(source, text, self.work / source.replace("/", "_").replace(".cpp", ""))
        if failures:
            return first
        return {"unit": source, "status": "moved", "text": text, "classes": done, "renamed": renamed, "kept": whys}

    def attempt(self, source: str, text: str, drop: List[str], whole: bool) -> dict:
        unit = Unit(source, text)
        local = unit.local()
        drop = [n for n in drop if n in unit.classes]
        work = self.work / source.replace("/", "_").replace(".cpp", "")
        work.mkdir(parents=True, exist_ok=True)
        whole = whole and source not in self.migrated
        grown = {n: g for n in unit.classes if n not in drop for g in [self.grown(n, local)] if g} if whole else {}
        from_headers = [c for c in self.header_rebased if c not in unit.classes
                        and re.search(rf"\b{c}\b", unit.text)] if whole else []
        if not drop and not grown and not from_headers:
            if not whole or not self.check_all:
                return {"unit": source, "status": "nothing"}
            failures, _, _ = self.verify(source, unit.text, work)
            if failures:
                a, reason = sorted(failures.items())[0]
                return {"unit": source, "status": "failed", "broken": True,
                        "why": f"as it is, {fmt_addr(a)}: {reason}"[:400]}
            return {"unit": source, "status": "nothing"}
        why = self.measure(unit, drop, work) if drop else None
        if why:
            return {"unit": source, "status": "failed", "why": why, "broken": True}
        tokens, final, problems = self.plan(unit, drop, work)
        rebased: Dict[str, str] = {}
        for cls, (base, length) in grown.items():
            new, more, names, problem = self.rebase(cls, unit.classes[cls][1], local, base, length)
            if new is None:
                problems.append(problem)
                continue
            rebased[cls] = new
            tokens.update(more)
            final.update(names)
        for cls in from_headers:
            tokens.update(self.header_rebased[cls][1])
            final.update(self.header_rebased[cls][2])
        if problems:
            return {"unit": source, "status": "failed", "why": problems[0], "more": problems[1:]}
        text, why = self.tokenize(unit, drop + list(rebased) + from_headers, tokens, work)
        if text is None:
            return {"unit": source, "status": "failed", "why": why}
        used = sorted({t for t in final if re.search(rf"\b{t}\b", text.split("// FUNCTION:", 1)[-1])})
        missing = [t for t in used if final[t] is None]
        if missing:
            return {"unit": source, "status": "failed",
                    "why": "the header has no member for " + ", ".join(describe(t) for t in missing[:4])}
        head, blocks = split_blocks(text)
        new_unit = Unit(source, unit.text)
        new_unit.blocks = blocks
        kept = []
        for i, item in enumerate(integrate.items(head)):
            d = vslots.parse_class(item)
            if d is not None and d.name in drop:
                continue
            if d is not None and d.name in rebased:
                item = rebased[d.name]
            kept.append(item)
        wanted = []
        for cls in drop:
            inc = self.include_of(cls)
            if inc not in wanted and not any(integrate.normal(k) == integrate.normal(inc) for k in kept):
                wanted.append(inc)
        includes = [k for k in kept if integrate.normal(k).startswith("#")]
        new_unit.items = includes + wanted + [k for k in kept if not integrate.normal(k).startswith("#")]
        out = new_unit.compose()
        for token, name in final.items():
            if name is not None:
                out = re.sub(rf"\b{token}\b", name, out)
        if re.search(r"\bT3[SF]_\w+_", out):
            return {"unit": source, "status": "failed", "why": "a renamed member is left in what the unit keeps"}
        failures, renamed, out = self.verify(source, out, work)
        if failures:
            a, reason = sorted(failures.items())[0]
            return {"unit": source, "status": "failed", "why": f"{fmt_addr(a)}: {reason}"[:400], "failing": len(failures)}
        return {"unit": source, "status": "moved", "text": out, "classes": drop + list(rebased) + from_headers,
                "renamed": renamed}

    def verify(self, source: str, text: str, work: Path) -> Tuple[Dict[int, str], Dict[int, Tuple[str, str]], str]:
        """({address: failure}, {address: (old name, new name)}, the text with its `// FUNCTION:` lines
        naming what the functions compile to now)."""
        p = self.p
        path = work / "new" / source
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text, encoding="utf-8")
        obj = path.with_suffix(".obj")
        ok, log = p.compile(path, obj, self.cflags(source))
        marks = {int(m.group(1), 16): m.group(2).strip() for m in FUNCTION_MARKER.finditer(text)}
        if not ok:
            return {a: "on the header: " + first_error(log) for a in marks}, {}, text
        c = coff.Coff.load(obj)
        defined = {s.name for s in c.functions() if s.external}
        renamed: Dict[int, Tuple[str, str]] = {}
        gone = {a: n for a, n in marks.items() if n not in defined and n not in self.verifier.names_at(a)}
        if gone:
            dem = demangle(p, list(defined) + list(gone.values()))
            free = [n for n in defined if n not in marks.values()]
            for a, old in gone.items():
                want = shape(dem.get(old, old))
                found = [n for n in free if shape(dem.get(n, n)) == want]
                if len(found) == 1:
                    renamed[a] = (old, found[0])
                    free.remove(found[0])
        failures = {}
        for a in sorted(marks):
            symbol = renamed[a][1] if a in renamed else marks[a]
            res = self.verifier.run(a, None, work / addr_key(a), symbol=symbol, compiled=obj)
            if not res.match:
                problems = [x for x in res.problems if not (a in renamed and "the target is named" in x)]
                if problems or res.mismatch_rows or not res.build_ok:
                    failures[a] = (problems or [f"{res.mismatch_rows} rows differ"])[0]
        for a, (old, new) in renamed.items():
            text = text.replace(f"// FUNCTION: {fmt_addr(a)} {old}", f"// FUNCTION: {fmt_addr(a)} {new}")
        return failures, renamed, text

    def check(self, source: str) -> Optional[str]:
        work = self.work / source.replace("/", "_").replace(".cpp", "")
        text = (self.p.src_dir / source).read_text(encoding="utf-8", errors="replace")
        failures, _, _ = self.verify(source, text, work)
        if failures:
            a, reason = sorted(failures.items())[0]
            return f"{fmt_addr(a)}: {reason} ({len(failures)} functions)"
        return None


def shape(demangled: str) -> str:
    """A function's demangled name without its own name: its class, return and parameter types."""
    return re.sub(r"::~?\w+\(", "::(", demangled)


def describe(token: str) -> str:
    kind, rest = token[:3], token[4:-1]
    cls, _, n = rest.rpartition("_")
    return f"{cls}'s slot {n}" if kind == "T3S" else f"{cls}'s field at 0x{n}"


def first_error(log: str) -> str:
    return next((re.sub(r"^.*?\\(?=[^\\]*\(\d+\) :)", "", l) for l in log.splitlines() if " error " in l), log[:200])[:300]


def split_blocks(text: str) -> Tuple[str, Dict[int, str]]:
    marks = list(FUNCTION_MARKER.finditer(text))
    head = text[:marks[0].start()] if marks else text
    blocks = {}
    for i, m in enumerate(marks):
        end = marks[i + 1].start() if i + 1 < len(marks) else len(text)
        blocks[int(m.group(1), 16)] = text[m.start():end].rstrip() + "\n"
    return head, blocks


def enclosing_class(lines: List[str], n: int) -> Optional[str]:
    """The class of the member function a line is in: the nearest definition header above it."""
    for k in range(n, -1, -1):
        m = re.match(r"^[A-Za-z_][\w\s\*&:<>,]*?\b(\w+)::~?\w+\s*\(", lines[k])
        if m:
            return m.group(1)
        if lines[k].startswith("// FUNCTION:"):
            return None
    return None


# -- the methods the units declare -----------------------------------------------------------
def collect_methods(p: Project, rev: str) -> Dict[str, List[str]]:
    """{class: member declarations} of the package classes: what the units' copies declare besides fields
    and virtual functions, each once. Where copies disagree on a method's parameters, the unit that defines
    it is right (its function matches); the other callers' guesses are left out."""
    packages = package_classes(p)
    out: Dict[str, Dict[str, str]] = collections.defaultdict(dict)
    defined: Dict[Tuple[str, str], set] = collections.defaultdict(set)
    for path in sorted(p.src_dir.rglob("*.cpp")):
        unit = Unit(path.name, path.read_text(encoding="utf-8", errors="replace"))
        marks = [FUNCTION_MARKER.search(b).group(2).strip() for b in unit.blocks.values()]
        dem = demangle(p, [n for n in marks if n.startswith("?")])
        here = {qualified_name(n, dem.get(n, "")) for n in marks}
        for cls, (_, decl) in unit.classes.items():
            if cls not in packages:
                continue
            for m in decl.members:
                if m.kind not in ("method", "ctor"):
                    continue
                bare = classdecl.normal(m.text)
                if bare.startswith(("virtual ", "static UClass* ", "friend ", "DECLARE_")) or re.match(
                        r"^(?:StaticClass|InternalConstructor|GetPrivateStaticClass\w+|InitializePrivateStaticClass\w+"
                        r"|operator new|operator delete|DECLARE_\w+)$", m.name):
                    continue
                m = classdecl.declaration_only(m) if m.body else m
                out[cls].setdefault(m.key, " ".join(classdecl.normal(m.text).split()))
                if f"{cls}::{m.name}" in here:
                    defined[(cls, m.name)].add(m.key)
    result = {}
    for cls, members in out.items():
        keys = []
        for k in members:
            name = k.split("(")[0]
            right = defined.get((cls, name))
            if right and k not in right and any(arity(k) == arity(r) for r in right):
                continue
            keys.append(k)
        result[cls] = [members[k] for k in sorted(keys, key=lambda k: (k.split("(")[0] != cls, k))]
    return result


def arity(key: str) -> int:
    inside = key[key.index("(") + 1:key.rindex(")")]
    return 0 if not inside else inside.count(",") + 1


def write_methods(p: Project, rev: str) -> None:
    packages = package_classes(p)
    members = collect_methods(p, rev)
    written = 0
    for cls, lines in sorted(members.items()):
        path = p.include_dir / packages[cls] / f"{cls}.h"
        if path.is_file():
            continue  # kept by hand from here on
        body = [f"// {packages[cls]}/{cls}.h: {cls}'s member functions, included inside the class by",
                f"// {packages[cls]}Classes.h (which declares its fields and its virtual functions).", ""]
        body += [f"    {line}" for line in lines]
        path.write_text("\n".join(body) + "\n", encoding="utf-8", newline="\n")
        written += 1
    print(f"{written} classes' member functions written to include/<Package>/<Class>.h")


SCALAR = re.compile(r"^(?:INT|DWORD|int|unsigned int|void\s*\*|BYTE\s*\*)$")


def write_natives(p: Project, ad: "Adopter", units: List[str], jobs: int) -> None:
    """natives.txt: the members a script declares as room only (`var native int pad`) and the units' copies
    hold as an object of one of the game's classes, of the same size at the same offset."""
    def one(source: str):
        unit = Unit(source, (p.src_dir / source).read_text(encoding="utf-8", errors="replace"))
        drop = [n for n in unit.classes if n in ad.packages]
        if not drop:
            return []
        work = ad.work / source.replace("/", "_").replace(".cpp", "")
        work.mkdir(parents=True, exist_ok=True)
        if ad.measure(unit, drop, work):
            return []
        out = []
        for cls in drop:
            for f in unit.classes[cls][1].fields():
                known = ad.fields_of(cls).get(f.offset)
                if (known and f.offset >= 0 and not f.array and SCALAR.match(known[1]) and f.size == 4
                        and re.fullmatch(r"[A-Za-z_]\w*", f.type) and f.type in ad.game):
                    owner = next((c for c in ad.model.lineage(cls) if known[0] in
                                  {n for n, _ in ad.own_fields.get(c, {}).values()}), cls)
                    out.append((owner, known[0], f.type))
        return out
    votes = collections.defaultdict(collections.Counter)
    with ThreadPoolExecutor(jobs) as pool:
        for rows in pool.map(one, units):
            for cls, name, ctype in rows:
                votes[(cls, name)][ctype] += 1
    path = p.config_dir / "natives.txt"
    known = {}
    if path.is_file():
        for line in path.read_text(encoding="utf-8").splitlines():
            bare = line.split("#", 1)[0].split()
            if len(bare) >= 2:
                known[bare[0]] = bare[1]
    for (cls, name), tally in votes.items():
        known.setdefault(f"{cls}.{name}", tally.most_common(1)[0][0])
    head = ["# The C++ type of members the scripts declare as room only (`var native int pad`): objects the class's",
            "# constructor and destructor build and destroy. `Class.member Type`; tools/assets/t3classes.py gives the",
            "# member that type in the generated header. From the units' own declarations (tools/agent/adopt.py natives).", ""]
    path.write_text("\n".join(head + [f"{k} {v}" for k, v in sorted(known.items())]) + "\n", encoding="utf-8", newline="\n")
    print(f"{len(known)} members typed in {path.relative_to(p.main).as_posix()}")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    for name in ("methods", "natives", "apply", "check"):
        s = sub.add_parser(name)
        s.add_argument("units", nargs="*")
        s.add_argument("--rev", default="HEAD", help="the commit whose headers the units' copies were written against")
        s.add_argument("--jobs", type=int, default=16)
        s.add_argument("--dry-run", action="store_true")
        s.add_argument("--classes", help="only these classes' copies (comma separated)")
        s.add_argument("--native", action="store_true", help="only the package headers' classes")
        s.add_argument("--all", action="store_true", help="compare the units that have no copy as well")
    args = ap.parse_args()
    p = Project()
    if args.command == "methods":
        write_methods(p, args.rev)
        return
    units = args.units or sorted(f.relative_to(p.src_dir).as_posix() for f in p.src_dir.rglob("*.cpp"))
    if len(units) == 1 and units[0].endswith(".json"):
        units = json.loads(Path(units[0]).read_text(encoding="utf-8"))
    ad = Adopter(p, args.rev)
    earlier = (json.loads((p.state_dir("adopt") / "report.json").read_text(encoding="utf-8"))["moved"]
               if (p.state_dir("adopt") / "report.json").is_file() else [])
    ad.migrated = set(earlier)  # their classes are numbered as the headers are now
    if args.classes:
        ad.only = set(args.classes.split(","))
    elif args.native:
        ad.only = set(ad.packages)
    ad.check_all = args.all
    if args.command == "natives":
        write_natives(p, ad, units, args.jobs)
        return
    if args.command == "check":
        with ThreadPoolExecutor(args.jobs) as pool:
            bad = {u: r for u, r in zip(units, pool.map(ad.check, units)) if r}
        for u, r in sorted(bad.items()):
            print(f"{u}: {r}"[:300])
        print(f"{len(units)} units, {len(bad)} with a function that does not match")
        atomic_write(p.state_dir("adopt") / "check.json", json.dumps(bad, indent=1) + "\n")
        sys.exit(1 if bad else 0)
    for note in ad.prepare_headers(not args.dry_run):
        print(note)
    grown = ad.absorb_methods(units, not args.dry_run) if not args.native else []
    print(f"{len(grown)} headers took member functions from the units' copies")
    def safely(source: str) -> dict:
        try:
            return ad.convert(source)
        except Exception as e:  # one unit's surprise does not cost the run
            return {"unit": source, "status": "failed", "why": f"{type(e).__name__}: {e}"[:300]}
    with ThreadPoolExecutor(args.jobs) as pool:
        results = list(pool.map(safely, units))
    moved = [r for r in results if r["status"] == "moved"]
    failed = [r for r in results if r["status"] == "failed"]
    renames: Dict[str, str] = {}
    for r in moved:
        if not args.dry_run:
            atomic_write(p.src_dir / r["unit"], r["text"])
        for a, (old, new) in r["renamed"].items():
            renames[old] = new
    if renames and not args.dry_run:
        import names
        path = p.config_dir / "symbols.txt"
        text, n = names.rename_symbols(path.read_text(encoding="utf-8"), lambda s: renames.get(s, s))
        atomic_write(path, text)
        print(f"{n} names changed in symbols.txt")
    report = {"moved": sorted(set(earlier) | {r["unit"] for r in moved}),
              "classes": dict(collections.Counter(c for r in moved for c in r["classes"]).most_common()),
              "kept": {r["unit"]: r["kept"] for r in moved if r.get("kept")},
              "failed": {r["unit"]: {k: v for k, v in r.items() if k not in ("unit", "status")} for r in failed}}
    atomic_write(p.state_dir("adopt") / "report.json", json.dumps(report, indent=1) + "\n")
    why = collections.Counter(re.sub(r"0x[0-9A-Fa-f]+|'[^']*'|\b\w+::\w+|\b[AU]\w+'s", "#", r["why"])[:110] for r in failed)
    print(f"{sum(len(r['classes']) for r in moved)} copies gone, "
          f"{sum(len(r.get('kept', ())) for r in moved)} kept in units that lost others")
    print(f"{len(units)} units: {len(moved)} moved onto the headers, {len(failed)} not, "
          f"{sum(1 for r in results if r['status'] == 'nothing')} with no copy of a native class"
          + (" (dry run)" if args.dry_run else ""))
    for k, n in why.most_common(25):
        print(f"{n:5}  {k}")


if __name__ == "__main__":
    main()
