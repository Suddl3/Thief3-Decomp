#!/usr/bin/env python3
"""Lead only: every native class's vtable as declarations, each slot in the class that introduces it.

    python tools/agent/vslots.py show <Class>        # its slots: introducer, name, signature, function
    python tools/agent/vslots.py stats               # how many slots have a name and a signature
    python tools/agent/vslots.py pin                 # config/<version>/slots.txt: keep what is known of each slot
    python tools/agent/vslots.py names [--dry-run]   # symbols.txt: each slot's function by the name declared

classes.txt gives each native class its super and its vtable; a table runs to the next address an
instruction names (tools/agent/xbox.py reads them). A class's table starts with its super's slots, so
slot k belongs to the topmost ancestor whose table reaches it: that class declares it, and a class whose
function there differs from its super's overrides it. Core.h declares UObject's own slots by hand.

A slot's name is the real method name of a function in it, the introducer's first, else its
descendants' when they agree; without one it is `Virtual<k>`. Its signature is the demangled one of a
function there that symbols.txt names as a method (a matched function's name is what its source compiles
to), the introducer's first; without one the slot is `void Virtual<k>()`, which a caller must not trust.
tools/assets/t3classes.py writes the declarations into the generated class headers (include/<Package>/).
"""
import argparse
import collections
import os
import re
import struct
import sys
from pathlib import Path
from typing import Dict, List, Optional, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parent))
from common import Project, demangle, fmt_addr  # noqa: E402

PLACEHOLDER = re.compile(r"^(?:FUN_[0-9a-f]{8}|Virtual\d+|Unknown[0-9A-Fa-f]+)$")
MEMBER = re.compile(r"^(?:public|protected|private): (virtual )?(.*?)\b__thiscall (\w+)::(~?\w+)\((.*)\)\s*(const)?\s*$")
CORE_SLOTS = 20  # Core.h declares UObject's


# UObject's slots as Core.h names them: a function called so past slot 19 was named after a worker's
# short stand-in class, not after its place in the real table.
CORE_NAMES = {"Destroy", "ProcessEvent", "ProcessState", "ProcessRemoteFunction", "Modify", "PostLoad", "Serialize",
              "IsPendingKill", "GotoState", "GotoLabel", "InitExecution", "ShutdownAfterError", "PostEditChange",
              "CallFunction", "ScriptConsoleExec", "Register", "StaticConstructor"}


MACRO = re.compile(r"(\bDECLARE_(?:CLASS|WITHIN)\([^)]*\))(?!\s*;)")


def parse_class(item: str):
    """classdecl.parse, with Core.h's DECLARE_CLASS line ended: it has no `;`, and would take the member
    after it (a class's first virtual function) into itself."""
    import classdecl
    return classdecl.parse(MACRO.sub(r"\1;", item))


class Sources:
    """Where the tree's own declarations put each virtual function. A unit declares the classes it uses
    itself, each with the virtuals its functions needed, so `Virtual7` is the eighth one that copy adds to
    its base, not the table's slot 7: the slot is the base's length (from its declaration in the unit, else
    in include/) plus the member's place among the ones the class adds. A member whose name and parameter
    types a base declares overrides that slot, as the compiler has it."""

    def __init__(self, p: Project, rev: Optional[str] = None):
        import classdecl
        import integrate
        self.p, self.classdecl, self.integrate = p, classdecl, integrate
        self.rev = rev
        self.headers: Dict[str, object] = {}
        # With `rev`, as they were then: a copy written before the headers declared every slot counts from
        # those, and a class of include/Game/ since moved to its real slots is read as it was numbered.
        for h in headers_of(p, rev):
            text = h.read_text(encoding="utf-8", errors="replace")
            for item in integrate.items(text):
                d = parse_class(item)
                if d is not None:
                    self.headers.setdefault(d.name, d)
        self._header_layout: Dict[str, Optional[Tuple[Dict[str, int], int]]] = {}

    @staticmethod
    def base(decl) -> Optional[str]:
        """The one base of a class, "" without one, None with several."""
        bases = [b.split()[-1] for b in decl.bases.split(",") if b.strip()]
        return "" if not bases else bases[0] if len(bases) == 1 else None

    def layout(self, name: str, local: Dict[str, object], seen=()) -> Optional[Tuple[Dict[str, int], int, List[Tuple[object, int, bool]]]]:
        """({member key: slot}, length, [(member, slot, added here)]) of a class as `local` (a unit's
        definitions) and include/ declare it; None when a base is unknown or it has several."""
        decl = local.get(name) or self.headers.get(name)
        if decl is None or name in seen:
            return None
        cached = name not in local and name in self._header_layout
        if cached:
            return self._header_layout[name]
        base = self.base(decl)
        if base is None:
            return None
        slots, length = {}, 0
        if base:
            up = self.layout(base, local, seen + (name,))
            if up is None:
                return None
            slots, length = dict(up[0]), up[1]
        rows = []
        for m in decl.members:
            if m.kind not in ("virtual", "dtor") or not self.classdecl.normal(m.text).startswith("virtual "):
                continue
            key = "~" if m.kind == "dtor" else m.key
            if key in slots:
                rows.append((m, slots[key], False))
            else:
                slots[key] = length
                rows.append((m, length, True))
                length += 1
        out = (slots, length, rows)
        if not any(c in local for c in self.chain(name, local)):
            self._header_layout[name] = out
        return out

    def chain(self, name: str, local: Dict[str, object]) -> List[str]:
        out = []
        while name and name not in out:
            out.append(name)
            decl = local.get(name) or self.headers.get(name)
            name = self.base(decl) if decl is not None else ""
        return out

    def unit(self, text: str) -> Dict[str, object]:
        head, _ = self.integrate.parse_unit(text)
        out = {}
        for item in self.integrate.items(head):
            d = parse_class(item)
            if d is not None:
                out.setdefault(d.name, d)
        return out


SIGNATURE = re.compile(r"^\s*virtual\s+(?P<ret>.*?)\s*\b(?P<name>\w+)\s*\((?P<params>.*)\)\s*(?P<const>const)?\s*(?:=\s*0\s*)?;?\s*$", re.S)


def unit_votes(p: Project, model, sources: "Sources") -> dict:
    """{(class, slot): Counter((return, parameters))}: how the units declare each slot of a native class."""
    out = collections.defaultdict(collections.Counter)
    for unit in sources_of(p, sources.rev):
        local = sources.unit(unit.read_text(encoding="utf-8", errors="replace"))
        for cls in local:
            if cls not in model.tables:
                continue
            lay = sources.layout(cls, local)
            if lay is None:
                continue
            for m, slot, _ in lay[2]:
                sig = SIGNATURE.match(sources.classdecl.normal(m.text.split("{")[0]))
                if m.kind == "dtor" or not sig or slot >= len(model.tables[cls]):
                    continue
                ret, params = sig.group("ret").strip(), sig.group("params").strip()
                if ret == "void" and not params and PLACEHOLDER.match(sig.group("name")):
                    continue  # what a worker writes for a slot it only needed to count
                out[(cls, slot)][(ret, "" if params == "void" else params, sig.group("name"))] += 1
    return out


PIN = re.compile(r"^(?P<cls>\w+) (?P<slot>\d+) (?P<ret>.*?)\b(?P<name>\w+)\((?P<params>.*)\)(?P<const> const)?$")


def load_pins(p: Project) -> Dict[Tuple[str, int], Tuple[str, str, str, bool]]:
    """config/<version>/slots.txt: `Class slot return Name(parameters)`, the declaration of a slot in the
    class that introduces it."""
    out = {}
    path = p.config_dir / "slots.txt"
    if path.is_file():
        for line in path.read_text(encoding="utf-8").splitlines():
            m = PIN.match(line.split("#", 1)[0].strip())
            if m:
                out[(m.group("cls"), int(m.group("slot")))] = (m.group("ret").strip(), m.group("name"), m.group("params"),
                                                               bool(m.group("const")))
    return out


def write_pins(p: Project, model: "Model") -> None:
    """Record every slot that has a name or a signature (not `void Virtual<k>()`, which says nothing)."""
    rows = []
    for cls in sorted(model.slots):
        for s in model.slots[cls]:
            if s.index >= CORE_SLOTS and (s.ret != "void" or s.params or s.const or not PLACEHOLDER.match(s.name)):
                rows.append(f"{cls} {s.index} {s.ret} {s.name}({s.params}){' const' if s.const else ''}")
    head = ["# The virtual functions past UObject's own twenty, where something is known of one: `Class slot",
            "# declaration`, in the class that introduces the slot (tools/agent/vslots.py). The generated class",
            "# headers declare them so; edit a line to rename a slot or to type its parameters, then regenerate",
            "# (tools/assets/t3classes.py headers) and rebuild.", ""]
    (p.config_dir / "slots.txt").write_text("\n".join(head + rows) + "\n", encoding="utf-8", newline="\n")
    print(f"{len(rows)} slots recorded in config/{p.version}/slots.txt")


def typed(params: str) -> int:
    """How many parameters say more than their size: `APawn*` rather than `int`, which is what a caller
    writes for an argument it only pushes."""
    return sum(1 for q in params.split(",") if q.strip() and not re.match(
        r"^(?:unsigned |signed )?(?:int|long|char|short|INT|DWORD|UBOOL|BYTE|void\s*\*)(?:\s+\w+)?$", q.strip()))


FUNCTION_LINE = re.compile(r"^// FUNCTION: (?:0x)?([0-9A-Fa-f]{8})\b", re.M)
_exports: Dict[str, Path] = {}


def export_of(p: Project, rev: str) -> Path:
    """src/ and include/ as they were at a commit, exported once under build/ (one `git archive`: a
    `git show` per file takes minutes over a few thousand files)."""
    if rev not in _exports:
        import io
        import subprocess
        import tarfile
        sha = subprocess.run(["git", "rev-parse", rev], cwd=p.main, capture_output=True, text=True).stdout.strip()
        root = p.state_dir("adopt") / f"tree-{sha[:12]}"
        if not (root / "done").is_file():
            archive = subprocess.run(["git", "archive", sha, p.src_dir.relative_to(p.main).as_posix(),
                                      p.include_dir.relative_to(p.main).as_posix()], cwd=p.main, capture_output=True).stdout
            tarfile.open(fileobj=io.BytesIO(archive)).extractall(root)
            (root / "done").write_text(sha, encoding="utf-8")
        _exports[rev] = root
    return _exports[rev]


def sources_of(p: Project, rev: Optional[str]) -> List[Path]:
    """The units: the tree's, or with `rev` the ones of that commit."""
    if not rev:
        return sorted(p.src_dir.rglob("*.cpp"))
    return sorted((export_of(p, rev) / p.src_dir.relative_to(p.main)).rglob("*.cpp"))


def headers_of(p: Project, rev: Optional[str]) -> List[Path]:
    root = export_of(p, rev) / p.include_dir.relative_to(p.main) if rev else p.include_dir
    return sorted(root.rglob("*.h"))


class Slot:
    def __init__(self, index: int, introducer: str):
        self.index, self.introducer = index, introducer
        self.name = f"Virtual{index}"
        self.ret, self.params, self.const = "void", "", False
        self.known = False  # a signature from a function's own name
        self.voted = False  # else from the units' declarations of the slot
        self.rivals = 0     # other signatures the units give it
        self.score = 0.0    # how well its name is attested


class Model:
    def __init__(self, p: Project, rev: Optional[str] = None):
        rev = rev or os.environ.get("T3_SLOTS_REV") or None
        import xbox
        self.p = p
        self.classes = self._classes()
        prog = xbox.pc_program(p)
        self.primary = {s.address: s.name for s in p.symbols if s.is_function and s.size > 0}
        self.tables: Dict[str, List[int]] = {}
        for cls, (sup, vt) in self.classes.items():
            if not vt or vt == self.classes.get(sup, ("", 0))[1]:
                # None recorded, or its super's (the internal constructor of an abstract class builds a
                # UObject): its own is the one symbols.txt names for it, when a destructor gave it away.
                vt = p.address_of(f"??_7{cls}@@6B@") or 0
            if vt and vt in prog.vtables:
                self.tables[cls] = prog.vtables[vt]
        self.children = collections.defaultdict(list)
        for cls, (sup, _) in self.classes.items():
            self.children[sup].append(cls)
        # A table ends at the next address an instruction names, and an instruction can name the middle
        # of one (a constructor storing a secondary base's pointer): it has at least its super's slots.
        self.defined = {int(m.group(1), 16) for path in sources_of(p, rev)
                        for m in FUNCTION_LINE.finditer(path.read_text(encoding="utf-8", errors="replace"))}
        for cls in sorted(self.tables, key=lambda c: len(self.lineage(c))):
            sup = self.super_of(cls)
            want = len(self.tables.get(sup, ()))
            table = list(self.tables[cls])
            start = self.classes[cls][1] or p.address_of(f"??_7{cls}@@6B@") or 0
            while len(table) < want and start:
                try:
                    f = struct.unpack("<I", prog.read(start + 4 * len(table), 4))[0]
                except Exception:
                    break
                if f not in prog.start_set:
                    break
                table.append(f)
            self.tables[cls] = table
        # A function in two slots is folded code (an empty body, `return 0`): it names and types neither.
        seen = collections.defaultdict(set)
        for table in self.tables.values():
            for k, f in enumerate(table):
                seen[f].add(k)
        self.folded = {f for f, ks in seen.items() if len(ks) > 1}
        self.sources = Sources(p, rev)
        self.votes = unit_votes(p, self, self.sources)
        names = [n for t in self.tables.values() for f in t for n in [self.primary.get(f, "")] if n.startswith("?")]
        self.plain = demangle(p, names)
        self.slots: Dict[str, List[Slot]] = {}
        self._length: Dict[str, int] = {}
        for cls in self.classes:
            if self.length(cls):
                self._build(cls)
        # slots.txt: what a slot was found to be stays so. The units that told (a copy's declaration, a
        # function's guessed name) move onto the headers and stop telling; a later, different guess must
        # not change a declaration units already compile against.
        self.pins = load_pins(p)
        for (cls, k), (ret, name, params, const) in self.pins.items():
            s = self.slot(cls, k)
            if s is not None and s.introducer == cls:
                s.ret, s.name, s.params, s.const, s.known, s.voted, s.score = ret, name, params, const, True, False, 99.0
        # One name, one slot in a line of classes: the better attested keeps it.
        named = collections.defaultdict(list)
        for ss in self.slots.values():
            for s in ss:
                if not PLACEHOLDER.match(s.name):
                    named[s.name].append(s)
        for name, group in named.items():
            group.sort(key=lambda s: -s.score)
            for i, s in enumerate(group):
                if any(self.related(s.introducer, o.introducer) for o in group[:i] if o.name == name):
                    s.name = f"Virtual{s.index}"

    def _classes(self) -> Dict[str, Tuple[str, int]]:
        out = {}
        for line in (self.p.config_dir / "classes.txt").read_text(encoding="utf-8").splitlines():
            m = re.match(r"^(\w+)\s", line)
            if not m or line.startswith("#"):
                continue
            sup = re.search(r"\bsuper:(\w+)", line)
            vt = re.search(r"\bvtable:(0x[0-9A-Fa-f]+)", line)
            out[m.group(1)] = (sup.group(1) if sup else "", int(vt.group(1), 16) if vt else 0)
        return out

    def length(self, cls: str) -> int:
        """The class's number of slots: its table's, or for a class no table is known for (an abstract
        one: nothing constructs it) the shortest of its nearest subclasses' tables, so that every
        subclass finds the slots it shares with its siblings in a base. That may hand the class a few
        slots a subclass really adds; the indexes stay right."""
        if cls in self.tables:
            return len(self.tables[cls])
        if cls not in self.classes:
            return 0
        if cls not in self._length:
            self._length[cls] = 0  # a cycle guard
            below = [self.length(d) for d in self.children.get(cls, ())]
            below = [n for n in below if n]
            up = self.length(self.super_of(cls)) if self.super_of(cls) in self.classes else 0
            self._length[cls] = max(min(below), up) if below else 0
        return self._length[cls]

    def function(self, cls: str, k: int) -> Optional[int]:
        table = self.tables.get(cls)
        return table[k] if table and k < len(table) else None

    def super_of(self, cls: str) -> str:
        return self.classes.get(cls, ("", 0))[0]

    def related(self, a: str, b: str) -> bool:
        return a == b or a in self.lineage(b) or b in self.lineage(a)

    def lineage(self, cls: str) -> List[str]:
        out = []
        while cls in self.classes and cls not in out:
            out.append(cls)
            cls = self.super_of(cls)
        return out

    def introducer(self, cls: str, k: int) -> str:
        top, c = cls, cls
        while c in self.classes:
            if self.length(c) > k:
                top = c
            c = self.super_of(c)
        return top

    def descendants(self, cls: str) -> List[str]:
        out, todo = [], [cls]
        while todo:
            for d in self.children.get(todo.pop(), ()):
                out.append(d)
                todo.append(d)
        return out

    def _signature(self, f: int):
        if f in self.folded:
            return None
        m = MEMBER.match(self.plain.get(self.primary.get(f, ""), ""))
        if not m:
            return None
        return m.group(4), m.group(2).strip(), m.group(5).strip(), bool(m.group(6))

    def _build(self, cls: str) -> None:
        """The slots `cls` introduces, named and typed from the functions of its family."""
        out = []
        family = [cls] + self.descendants(cls)
        for k in range(self.length(self.super_of(cls)) if self.super_of(cls) in self.classes else 0, self.length(cls)):
            if self.introducer(cls, k) != cls:
                continue
            slot = Slot(k, cls)
            names = collections.Counter()
            guess = None
            for c in family:
                f = self.function(c, k)
                sig = self._signature(f) if f is not None else None
                if not sig:
                    continue
                name, ret, params, const = sig
                params = "" if params == "void" else params
                if f in self.defined:
                    # A function src/ defines compiles to this signature; the introducer's comes first in
                    # `family`, and one that types its parameters says more.
                    if not slot.known or typed(params) > typed(slot.params):
                        slot.ret, slot.params, slot.const, slot.known = ret, params, const, True
                elif guess is None:
                    guess = (ret, params, const)  # a caller's name for it: what it pushed
                if not PLACEHOLDER.match(name) and not name.startswith("~") and name not in CORE_NAMES:
                    names[name] += 3 if c == cls else 1
            tally = collections.Counter()
            for c in family:
                tally.update(self.votes.get((c, k), {}))
            if tally:  # what the units calling the slot declare, where no function says or they type more
                (ret, params, _), _ = max(tally.items(), key=lambda kv: (typed(kv[0][1]), kv[1]))
                if not slot.known:
                    slot.ret, slot.params, slot.voted = ret, params, True
                elif typed(params) > typed(slot.params) and params.count(",") == slot.params.count(","):
                    slot.params = params  # the function's own return type stays
            elif guess and not slot.known:
                slot.ret, slot.params, slot.const, slot.known = guess[0], guess[1], guess[2], True
            slot.rivals = max(0, len({(r, self.sources.classdecl._params_key(q)) for r, q, _ in tally}) - (0 if slot.known else 1))
            if names:  # a caller's name for a slot is not asked: a unit declares what it defines anywhere
                (best, n), *rest = names.most_common(2)
                if not rest or rest[0][1] < n:
                    slot.name, slot.score = best, n
            out.append(slot)
        self.slots[cls] = out

    def slot(self, cls: str, k: int) -> Optional[Slot]:
        owner = self.introducer(cls, k)
        return next((s for s in self.slots.get(owner, ()) if s.index == k), None)

    def declaration(self, slot: Slot) -> str:
        return f"virtual {slot.ret} {slot.name}({slot.params}){' const' if slot.const else ''};"

    def declarations(self, cls: str) -> List[str]:
        """What the class declares past Core.h's slots: the ones it introduces, in order (their order is
        the table's), then the ones it overrides."""
        out = []
        if not self.length(cls):
            return out
        for s in self.slots.get(cls, ()):
            if s.index >= CORE_SLOTS:
                f = self.function(cls, s.index)
                note = f"slot {s.index}" + (f": {fmt_addr(f)}" if f is not None else "")
                note += "" if s.known else ", as its callers declare it" if s.voted else ", signature unknown"
                out.append(f"{self.declaration(s):<56}// {note}")
        sup = self.super_of(cls)
        for k in range(CORE_SLOTS, min(self.length(sup), self.length(cls)) if cls in self.tables else 0):
            f, g = self.function(cls, k), self.inherited(sup, k)
            if f != g and f is not None:
                s = self.slot(cls, k)
                if s:
                    out.append(f"{self.declaration(s):<56}// slot {k}: {fmt_addr(f)}, {s.introducer}'s")
        return out

    def inherited(self, cls: str, k: int) -> Optional[int]:
        """The function the nearest class with a table has at slot k."""
        while cls in self.classes:
            if cls in self.tables:
                return self.function(cls, k)
            cls = self.super_of(cls)
        return None


DECLARED = re.compile(r"^virtual (?P<ret>.*?)\b(?P<name>\w+)\((?P<params>.*)\)(?P<const> const)?;")


def decorated(p: Project, model: Model) -> Dict[Tuple[str, int], str]:
    """{(class, slot): decorated name} for every slot past Core.h's that a class declares (introduces or
    overrides): MSVC's own spelling, from a file that defines each one against the tree's headers."""
    packages = sorted({h.parent.name for h in p.include_dir.glob("*/*Classes.h")})
    lines = [f'#include "{pkg}/{pkg}Classes.h"' for pkg in packages]
    wanted: List[Tuple[str, int, str]] = []
    declared = set()
    declared.add("UObject")  # Core.h declares its other classes without the slots they add
    for h in list(p.include_dir.glob("*/*Classes.h")):
        declared |= set(re.findall(r"^class (" + chr(92) + r"w+)(?: : public " + chr(92) + r"w+)?" + chr(92) + r"s*$", h.read_text(encoding="utf-8"), re.M))
    for cls in sorted(model.classes):
        if cls not in declared:
            continue
        own = {s.index for s in model.slots.get(cls, ())}
        sup = model.super_of(cls)
        rows = [s for s in model.slots.get(cls, ()) if s.index >= CORE_SLOTS]
        for k in range(CORE_SLOTS, min(model.length(sup), model.length(cls)) if cls in model.tables else 0):
            f = model.function(cls, k)
            if k not in own and f is not None and f != model.inherited(sup, k) and model.slot(cls, k):
                rows.append(model.slot(cls, k))
        for s in rows:
            m = DECLARED.match(model.declaration(s))
            if m:
                wanted.append((cls, s.index, s.name))
                for word in set(re.findall(r"[A-Za-z_]" + chr(92) + r"w*", m.group("ret") + " " + m.group("params"))):
                    inc = f'#include "Game/{word}.h"'  # a type passed by value must be complete to define one
                    if (p.include_dir / "Game" / f"{word}.h").is_file() and inc not in lines:
                        lines.insert(len(packages), inc)
                lines.append(f"{m.group('ret')}{cls}::{s.name}({m.group('params')}){m.group('const') or ''} {{ for (;;) {{}} }}")
    work = p.state_dir("tmp") / "vslots"
    work.mkdir(parents=True, exist_ok=True)
    source = work / "slots.cpp"
    source.write_text("\n".join(lines) + "\n", encoding="utf-8")
    ok, log = p.compile(source, source.with_suffix(".obj"), list(p.configure.CFLAGS))
    if not ok:
        sys.exit("the slots do not compile as the headers declare them:\n" + "\n".join(log.splitlines()[:12]))
    import coff
    names = [s.name for s in coff.Coff.load(source.with_suffix(".obj")).functions() if s.external]
    plain = demangle(p, names)
    by_member = collections.defaultdict(list)
    for n in names:
        m = MEMBER.match(plain.get(n, ""))
        if m:
            by_member[(m.group(3), m.group(4))].append(n)
    return {(cls, k): by_member[(cls, name)][0] for cls, k, name in wanted if len(by_member.get((cls, name), ())) == 1}


def name_slots(p: Project, model: Model, dry_run: bool) -> None:
    """Give every function in a slot the name its class declares for it, as an alias of the address (a
    function known only by a placeholder takes it as its name): a unit that stores a vtable has each slot
    compared with the exe's by name."""
    want = decorated(p, model)
    path = p.config_dir / "symbols.txt"
    lines = path.read_text(encoding="utf-8").splitlines()
    row = re.compile(r"^(\S+) = (\.\w+):(0x[0-9A-Fa-f]+);(.*)$")
    where: Dict[str, int] = {}
    primary: Dict[int, int] = {}
    for i, line in enumerate(lines):
        m = row.match(line)
        if m:
            where[m.group(1)] = int(m.group(3), 16)
            if "type:function" in m.group(4):
                primary[int(m.group(3), 16)] = i
    add = collections.defaultdict(list)
    drop, notes, promoted = set(), [], 0
    for (cls, k), name in sorted(want.items()):
        f = model.function(cls, k)
        if f is None or where.get(name) == f:
            continue
        if f not in primary:
            notes.append(f"{fmt_addr(f)} ({cls} slot {k}) is not a function in symbols.txt")
            continue
        if name in where:  # a unit named another function so, counting slots from where its copy started
            g = where[name]
            i = next(i for i, line in enumerate(lines) if line.startswith(name + " = "))
            if "type:alias" not in lines[i]:
                notes.append(f"{name} is {fmt_addr(g)}'s own name; {fmt_addr(f)} ({cls} slot {k}) does not get it")
                continue
            drop.add(i)
        if name not in add[f]:
            add[f].append(name)
            where[name] = f
    out = []
    for i, line in enumerate(lines):
        if i in drop:
            continue
        m = row.match(line)
        f = int(m.group(3), 16) if m else None
        if m and primary.get(f) == i and add.get(f):
            names = add[f]
            if re.match(r"^\??FUN_[0-9a-f]{8}(?:@@|$)", m.group(1)):  # known by a placeholder only
                out.append(f"{names[0]} = {m.group(2)}:{m.group(3)};{m.group(4)}")
                out.append(f"{m.group(1)} = {m.group(2)}:{m.group(3)}; // type:alias")
                names = names[1:]
                promoted += 1
            else:
                out.append(line)
            out += [f"{n} = {m.group(2)}:{m.group(3)}; // type:alias" for n in names]
        else:
            out.append(line)
    print(f"{len(want)} slots declared; {sum(map(len, add.values()))} names given ({promoted} as the function's own), "
          f"{len(drop)} taken from another address; {len(notes)} not given")
    for n in notes[:20]:
        print("  " + n)
    if not dry_run:
        path.write_text("\n".join(out) + "\n", encoding="utf-8", newline="\n")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    sub.add_parser("pin")
    s = sub.add_parser("names")
    s.add_argument("--dry-run", action="store_true")
    s = sub.add_parser("show")
    s.add_argument("cls")
    sub.add_parser("stats")
    args = ap.parse_args()
    m = Model(Project())
    if args.command == "pin":
        write_pins(m.p, m)
        return
    if args.command == "names":
        name_slots(m.p, m, args.dry_run)
        return
    if args.command == "show":
        print(f"{args.cls}: {m.length(args.cls)} slots, super {m.super_of(args.cls)} ({m.length(m.super_of(args.cls))})")
        for line in m.declarations(args.cls):
            print("   ", line)
        return
    slots = [s for ss in m.slots.values() for s in ss if s.index >= CORE_SLOTS]
    print(f"{len(m.tables)} classes with a table; {len(slots)} slots introduced past Core.h's: "
          f"{sum(1 for s in slots if not s.name.startswith('Virtual'))} named, {sum(1 for s in slots if s.known)} with a signature")
    for cls in ("UObject", "AActor", "APawn", "AController", "AAIController", "AAIPawnController", "AAIPawn", "APlayerPawn", "AGarrett"):
        ss = [s for s in m.slots.get(cls, ()) if s.index >= CORE_SLOTS]
        print(f"  {cls:<20} table {m.length(cls):3}, introduces {len(ss):3}: {sum(1 for s in ss if not s.name.startswith('Virtual')):3} named, "
              f"{sum(1 for s in ss if s.known):3} with a signature, {sum(1 for s in ss if s.voted):3} from callers, "
              f"{sum(1 for s in ss if s.rivals):3} disputed")


if __name__ == "__main__":
    main()
