#!/usr/bin/env python3
"""Lead only: give each game class one declaration, in include/Game/<Class>.h, and move the units onto it.

    python tools/agent/headers.py stats                 # which classes get a header, and why the others do not
    python tools/agent/headers.py build [--classes A,B] # write the headers and move the units onto them
    python configure.py && ninja                        # then compare the report with the previous one

integrate.py copies each accepted function's declarations into its unit, so a class has one
declaration per unit using it, each with the members that unit's functions needed. `build`:

  1. takes the classes with methods in src/ or declared by two units or more (not the ones
     include/Core/ or a package header defines), and every class those need complete;
  2. gives each one declaration: the units' own when they all declare it alike, else their
     merge (classdecl.merge: the union of their members, fields placed by offset, measured in
     each unit by MSVC itself with that unit's declarations). Bitfields or several fields to a
     line, declared differently, are left to the lead;
  3. writes include/Game/<Class>.h: the class, the headers its bases, fields held by value and
     inline bodies need (an include cycle leaves its classes out), forward declarations with
     each class's own keyword (MSVC decorates `class` and `struct` differently), and the free
     declarations its inline bodies call or its fields use, copied from a unit. A header must
     compile on its own;
  4. moves each unit onto the headers: the class's definition, and the unit's copies of what a
     header carries, give way to an #include, and the unit is compiled and compared with its
     current object, function by function (code bytes, relocations and their targets). A unit
     whose bytes would change keeps its own declaration of the classes that change them (found
     by trying them one at a time); build/agent/headers-report.json lists them. A header no
     unit uses is not kept: every header in the tree is one the build compiles.
"""

import argparse
import collections
import json
import os
import re
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))

import classdecl  # noqa: E402
import coff  # noqa: E402
import integrate  # noqa: E402
from common import Project  # noqa: E402

GAME_DIR = "Game"
GUARD = "GAME_{}_H"


class UnitDecls:
    """A unit's text, its declaration items and the classes they define."""

    def __init__(self, source: str, text: str):
        self.source = source
        self.text = text
        head, self.blocks = integrate.parse_unit(text)
        self.items = integrate.items(head)
        self.classes: Dict[str, Tuple[int, classdecl.ClassDecl]] = {}
        for i, item in enumerate(self.items):
            d = classdecl.parse(item)
            if d is not None and d.name not in self.classes:
                self.classes[d.name] = (i, d)

    def head(self) -> str:
        return "".join(self.items)


def load_units(p: Project) -> Dict[str, UnitDecls]:
    out = {}
    for path in sorted((p.src_dir / GAME_DIR).glob("*.cpp")):
        source = f"{GAME_DIR}/{path.name}"
        out[source] = UnitDecls(source, path.read_text(encoding="utf-8", errors="replace"))
    return out


def cflags(p: Project, source: str) -> List[str]:
    return p.configure.UNITS.get(source, {}).get("cflags", p.configure.CFLAGS)


def measure(p: Project, unit: UnitDecls, workdir: Path) -> Optional[str]:
    """Fill the unit's classes' layouts from a compiled probe; an error message on failure."""
    decls = [d for _, d in unit.classes.values()]
    if not decls:
        return None
    text, order = classdecl.probe_source(unit.head(), decls)
    path = workdir / (unit.source.replace("/", "_") + ".probe.cpp")
    path.write_text(text, encoding="utf-8")
    obj = path.with_suffix(".obj")
    ok, log = p.compile(path, obj, cflags(p, unit.source))
    if not ok:
        return " / ".join(log.splitlines()[:2])
    classdecl.read_probe(obj.read_bytes(), decls, order)
    return None


# -- comparing objects ---------------------------------------------------------------------
LOCAL_LABEL = re.compile(r"^\$[A-Z]+\d+$")  # MSVC's numbered labels ($T: an EH table): the number moves


def code_of(obj: coff.Coff) -> Dict[str, Tuple[bytes, Tuple]]:
    """Every defined symbol in a code section, and the EH tables: its bytes and its relocations
    (offset, type, target). A target that is a numbered label stands for its own contents."""
    def target(sym: Optional[coff.Symbol], depth: int = 0):
        if sym is None:
            return "?"
        if LOCAL_LABEL.match(sym.name) and sym.defined and depth < 3:
            start, end = obj.extent(sym)
            data = obj.section(sym.section).data[start:end]
            return ("label", data, tuple((r.offset - start, r.type, target(obj.slots[r.symbol], depth + 1))
                                         for _, r in obj.relocations(sym.section, start, end)))
        return sym.name

    out = {}
    for s in obj.symbols:
        if not s.defined or s.is_section or s.name.startswith("$"):
            continue
        sec = obj.section(s.section)
        if sec is None:
            continue
        if not sec.is_code and not s.name.startswith(("__ehfuncinfo$", "__unwindtable$", "__tryblocktable$",
                                                       "__catchsym$", "__ehhandler$")):
            continue
        start, end = obj.extent(s)
        relocs = tuple((r.offset - start, r.type, target(obj.slots[r.symbol]))
                       for _, r in obj.relocations(s.section, start, end))
        out[s.name] = (sec.data[start:end], relocs)
    return out


def same_code(old: Path, new: Path) -> Optional[str]:
    """None when every function of the old object is the same in the new one, else the first difference."""
    a, b = code_of(coff.Coff.load(old)), code_of(coff.Coff.load(new))
    for name, (data, relocs) in a.items():
        if name not in b:
            return f"{name} is gone"
        if b[name][0] != data:
            return f"{name}: code differs"
        if b[name][1] != relocs:
            return f"{name}: references differ"
    return None


# -- merging and writing -------------------------------------------------------------------
def variants(units: Dict[str, UnitDecls]) -> Dict[str, Dict[str, classdecl.ClassDecl]]:
    """class name -> {unit: its declaration there}."""
    out: Dict[str, Dict[str, classdecl.ClassDecl]] = collections.defaultdict(dict)
    for source, u in units.items():
        for name, (_, d) in u.classes.items():
            out[name][source] = d
    return out


def method_classes(units: Dict[str, UnitDecls]) -> Set[str]:
    """Classes with a method defined in src/."""
    out = set()
    for u in units.values():
        for block in u.blocks.values():
            code = block.split("\n", 1)[1] if "\n" in block else block
            m = re.search(r"^[^\n(]*?\b([A-Za-z_]\w*)::~?[A-Za-z_]\w*\s*\(", code, re.M)
            if m:
                out.add(m.group(1))
    return out


STORAGE_OTHERS = ("anon:", "bitfield:", "multi:")
DECLARATOR_AFTER_BODY = re.compile(r"\}\s*[A-Za-z_]\w*\s*(?:\[[^\]]*\])?\s*;\s*$")


def by_value_types(d: classdecl.ClassDecl) -> Set[str]:
    """Names a declaration needs complete: bases, fields held by value, and everything inline bodies use."""
    out = set(classdecl.IDENT.findall(d.bases))
    for m in d.members:
        if m.kind == "field" and "*" not in m.type and "&" not in m.type:
            out |= set(classdecl.IDENT.findall(m.type))
        if m.body or (m.kind == "other" and not m.key.startswith("access:")):
            out |= set(classdecl.uses(m.text))
    return out


def lays_out_others(d: classdecl.ClassDecl) -> bool:
    """Whether members merge() cannot place take room: bitfields, `int a, b;`, anonymous unions."""
    return any(m.kind == "other" and (m.key.startswith(STORAGE_OTHERS)
                                      or DECLARATOR_AFTER_BODY.search(classdecl.normal(m.text)))
               for m in d.members)


def kinds_of(units: Dict[str, "UnitDecls"]) -> Dict[str, str]:
    """Each class's keyword (class or struct), the commonest among its definitions, else its forward
    declarations: MSVC writes it into decorated names (V, U), so a forward declaration must agree."""
    votes: Dict[str, collections.Counter] = collections.defaultdict(collections.Counter)
    forward: Dict[str, collections.Counter] = collections.defaultdict(collections.Counter)
    for u in units.values():
        for name, (_, d) in u.classes.items():
            votes[name][d.kind] += 1
        for item in u.items:
            m = re.match(r"^\s*(class|struct)\s+([A-Za-z_]\w*)\s*;", classdecl.normal(item))
            if m:
                forward[m.group(2)][m.group(1)] += 1
    out = {n: c.most_common(1)[0][0] for n, c in forward.items()}
    out.update({n: c.most_common(1)[0][0] for n, c in votes.items()})
    return out


def package_index(p: Project) -> Dict[str, Tuple[str, str]]:
    """What include/Core/ and the package headers define -> (header, kind: class, struct, union,
    enum, typedef or define)."""
    out: Dict[str, Tuple[str, str]] = {}
    for h in sorted(p.include_dir.glob("*/*.h")):
        if h.parent.name == GAME_DIR:
            continue
        rel = h.relative_to(p.include_dir).as_posix()
        text = h.read_text(encoding="utf-8", errors="replace")
        found = [(m.group(2), m.group(1)) for m in re.finditer(
            r"^\s*(?:template\s*<[^>]*>\s*)?(class|struct|union|enum)\s+(?:[A-Z][A-Z0-9_]*\s+)?([A-Za-z_]\w*)\s*[:{]",
            text, re.M)]
        found += [(m.group(1), "typedef") for m in re.finditer(
            r"^\s*typedef\b[^;{]*?\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", text, re.M)]
        found += [(m.group(1), "define") for m in re.finditer(r"^\s*#\s*define\s+([A-Za-z_]\w*)", text, re.M)]
        for name, kind in found:
            out.setdefault(name, (rel, kind))
    return out


def free_name(item: str) -> Optional[str]:
    """The name a free declaration declares: a function, an extern variable, an enum or a typedef."""
    bare = classdecl.normal(item)
    if not bare or bare.startswith("#") or classdecl.parse(item) is not None:
        return None
    if re.match(r"^(?:class|struct|union)\s+\w+\s*;$", bare) or bare.startswith("template"):
        return None
    m = re.match(r"^enum\s+([A-Za-z_]\w*)\s*\{", bare)
    if m:
        return m.group(1)
    pointer = re.search(r"\(\s*\*\s*([A-Za-z_]\w*)\s*\)", bare)
    if bare.startswith("typedef"):
        m = pointer or re.search(r"\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;$", bare)
        return m.group(1) if m else None
    if "{" in bare:
        return None
    if pointer:
        return pointer.group(1)
    if "(" in bare:
        m = re.search(r"([A-Za-z_]\w*)\s*\(", bare)
    else:
        m = re.search(r"([A-Za-z_]\w*)\s*(?:\[[^\]]*\])*\s*;$", bare)
    return m.group(1) if m else None


def free_index(units: Dict[str, "UnitDecls"]) -> Dict[str, str]:
    """name -> the first unit's free declaration of it."""
    out: Dict[str, str] = {}
    for u in units.values():
        for item in u.items:
            name = free_name(item)
            if name:
                out.setdefault(name, item)
    return out


class Plan:
    """A header to write: its class, what it includes and forward-declares, the free declarations it carries."""

    def __init__(self, name: str, decl: classdecl.ClassDecl, verbatim: bool, note: str, sources: List[str]):
        self.name, self.decl, self.verbatim, self.note, self.sources = name, decl, verbatim, note, sources
        self.needs: Set[str] = set()      # Game headers it includes
        self.carries: List[str] = []      # free declarations, as one unit wrote them
        self.text = ""
        self.class_line = 0               # the line the class starts on in the text, from 0
        self.spans: List[Tuple[int, int, classdecl.Member]] = []  # each member's lines in the class
        self.repairs: List[str] = []      # members left out: the header did not compile with them
        self.system: Optional[List[str]] = None  # its #include <...> lines (default: the declaring units')

    def body(self) -> str:
        self.spans = []
        return self.decl.text if self.verbatim else classdecl.write(self.decl, spans=self.spans)

    def member_at(self, line: int) -> Optional[classdecl.Member]:
        for first, last, m in self.spans:
            if first <= line - self.class_line <= last:
                return m
        return None


def carried(decl: classdecl.ClassDecl, text: str, frees: Dict[str, str], classes: Set[str]) -> List[str]:
    """The free declarations a class's text names: an inline body's callee or global, a field's enum or typedef."""
    inline = set()
    for m in decl.members:
        if m.body:
            inline |= set(classdecl.uses(m.text))
    out = []
    for n in sorted(set(classdecl.uses(text)) - classes - {decl.name}):
        if n in frees and (n in inline or frees[n].lstrip().startswith(("enum", "typedef"))):
            out.append(frees[n])
    return out


def complete_types(decl: classdecl.ClassDecl, text: str, frees: Dict[str, str], classes: Set[str]) -> Set[str]:
    """Names a header must have complete: by_value_types', and the types of the free functions its inline
    bodies call (`FUN_10905aa0()->Virtual5(Block)` needs the class FUN_10905aa0 returns)."""
    out = by_value_types(decl)
    for f in carried(decl, text, frees, classes):
        out |= set(classdecl.uses(f))
    return out


def plan_headers(units: Dict[str, UnitDecls], var: Dict[str, Dict[str, classdecl.ClassDecl]], wanted: Set[str],
                 measured: Set[str], packages: Dict[str, Tuple[str, str]], kinds: Dict[str, str],
                 frees: Dict[str, str]) -> Tuple[Dict[str, Plan], Dict[str, str]]:
    """({class: plan}, {class: why it has no header})."""
    skipped: Dict[str, str] = {}
    plans: Dict[str, Plan] = {}
    for name in sorted(wanted):
        decls = list(var[name].values())
        unique: Dict[str, classdecl.ClassDecl] = {}
        for s, d in var[name].items():
            unique.setdefault(classdecl.normal(d.text), d)
        note = f"declared by {len(decls)} unit{'s' if len(decls) != 1 else ''}"
        if len(unique) == 1:
            plans[name] = Plan(name, next(iter(unique.values())), True, note, sorted(var[name]))
            continue
        if any(lays_out_others(d) for d in unique.values()):
            skipped[name] = "bitfields or several fields to a line, declared differently: merge by hand"
            continue
        ready = {k: d for k, d in unique.items()
                 if any(s in measured for s, x in var[name].items() if classdecl.normal(x.text) == k)}
        if not ready:
            skipped[name] = "not measured"
            continue
        try:
            merged = classdecl.merge(list(ready.values()))
        except classdecl.Conflict as e:
            skipped[name] = str(e)
            continue
        merged.kind = kinds.get(name, merged.kind)
        plans[name] = Plan(name, merged, False, note, sorted(var[name]))
    # what each needs complete, and the cycles that rules out
    classes = set(var) | set(packages)
    for name, plan in plans.items():
        plan.needs = (complete_types(plan.decl, plan.body(), frees, classes) & set(var)) - set(packages) - {name}
    changed = True
    while changed:
        changed = False
        for name in list(plans):
            missing = plans[name].needs - set(plans)
            if missing:
                skipped[name] = f"needs {sorted(missing)[0]}, which has no header"
                del plans[name]
                changed = True
    for scc in cycles({n: p.needs for n, p in plans.items()}):
        for name in scc:
            skipped[name] = f"its header and {len(scc) - 1} others would include each other"
            plans.pop(name, None)
    changed = True
    while changed:
        changed = False
        for name in list(plans):
            if plans[name].needs - set(plans):
                skipped[name] = "needs a class in an include cycle"
                del plans[name]
                changed = True
    for name, plan in plans.items():
        plan.text = header_text(plan, set(plans), kinds, frees, packages, units)
    return plans, skipped


def cycles(graph: Dict[str, Set[str]]) -> List[List[str]]:
    """The strongly connected components of more than one node (Tarjan, iterative)."""
    index: Dict[str, int] = {}
    low: Dict[str, int] = {}
    stack: List[str] = []
    on: Set[str] = set()
    out: List[List[str]] = []
    counter = 0
    for root in sorted(graph):
        if root in index:
            continue
        work = [(root, iter(sorted(graph.get(root, ()))))]
        index[root] = low[root] = counter
        counter += 1
        stack.append(root)
        on.add(root)
        while work:
            node, children = work[-1]
            advanced = False
            for child in children:
                if child not in graph:
                    continue
                if child not in index:
                    index[child] = low[child] = counter
                    counter += 1
                    stack.append(child)
                    on.add(child)
                    work.append((child, iter(sorted(graph.get(child, ())))))
                    advanced = True
                    break
                if child in on:
                    low[node] = min(low[node], index[child])
            if advanced:
                continue
            work.pop()
            if work:
                low[work[-1][0]] = min(low[work[-1][0]], low[node])
            if low[node] == index[node]:
                scc = []
                while True:
                    x = stack.pop()
                    on.discard(x)
                    scc.append(x)
                    if x == node:
                        break
                if len(scc) > 1:
                    out.append(scc)
    return out


def header_text(plan: Plan, headers: Set[str], kinds: Dict[str, str], frees: Dict[str, str],
                packages: Dict[str, Tuple[str, str]], units: Dict[str, UnitDecls]) -> str:
    body = plan.body()
    classes = set(kinds) | set(packages) | headers
    plan.carries = carried(plan.decl, body, frees, classes)
    in_carried = {i for f in plan.carries for i in classdecl.uses(f)}
    used = set(classdecl.uses(body)) | in_carried
    complete = complete_types(plan.decl, body, frees, classes)
    includes = set()
    forward = set()
    for n in used - {plan.name}:
        if n in headers and n in complete:
            includes.add(f"{GAME_DIR}/{n}.h")
        elif n in packages:
            where, kind = packages[n]
            if kind in ("class", "struct", "union") and n not in complete:
                forward.add((kind, n))
            else:
                includes.add(where)
        elif n in kinds:
            forward.add((kinds[n], n))
    if plan.name in in_carried:  # a carried declaration names the class before its definition
        forward.add((plan.decl.kind, plan.name))
    # the standard library the declaring units include (std::vector members)
    system = plan.system if plan.system is not None else sorted(
        {classdecl.normal(i) for s in plan.sources for i in units[s].items
         if classdecl.normal(i).startswith("#include <")}) if "std" in used else []
    guard = GUARD.format(plan.name.upper())
    lines = [f"// {plan.name}: {plan.note}.",
             "// Generated by tools/agent/headers.py from the units that declare it; edit it here.",
             f"#ifndef {guard}", f"#define {guard}", ""]
    lines += system
    lines += [f'#include "{i}"' for i in sorted(includes, key=lambda i: (i.startswith(GAME_DIR), i))]
    if includes or system:
        lines.append("")
    lines += [f"{kind} {n};" for kind, n in sorted(forward, key=lambda x: x[1])]
    if forward:
        lines.append("")
    for f in plan.carries:
        lines.append(f.strip("\n"))
    if plan.carries:
        lines.append("")
    plan.class_line = sum(1 + line.count("\n") for line in lines)
    lines.append(body.strip("\n"))
    lines += ["", f"#endif // {guard}", ""]
    return "\n".join(lines)


ERROR_AT = re.compile(r"[\\/]" + GAME_DIR + r"[\\/](\w+)\.h\((\d+)\) : error (C\d+): (.*)")


def repair(plan: Plan, error: str) -> bool:
    """Leave out the member a header's own compile error is in (never a field: the layout stays); a header
    the units all declare alike is read member by member first. False when there is nothing to leave out."""
    m = ERROR_AT.search(error)
    if m is None or m.group(1) != plan.name or lays_out_others(plan.decl):
        return False
    if plan.verbatim:
        plan.verbatim = False
        return True
    member = plan.member_at(int(m.group(2)) - 1)
    if member is None:  # an error the compiler puts at the class's end names the member
        said = re.findall(r"::(~?\w+)'", m.group(4))
        member = next((x for x in plan.decl.members if said and x.name == said[0] and x.kind != "field"), None)
    if member is None or member.kind == "field":
        return False
    if member.kind == "virtual" and not plan.decl.bases:  # its slot stays, as a placeholder
        taken = {x.name for x in plan.decl.members}
        slot = next(f"Slot{i}" for i in range(1000) if f"Slot{i}" not in taken)
        stand_in = classdecl.Member("virtual", slot, f"{slot}()", f"    virtual void {slot}();\n")
        plan.decl.members = [stand_in if x is member else x for x in plan.decl.members]
    else:
        plan.decl.members = [x for x in plan.decl.members if x is not member]
    plan.repairs.append(f"{member.key or member.name}: {m.group(3)}")
    return True


def compile_alone(p: Project, plans: Dict[str, Plan], here: Path, jobs: int) -> Dict[str, str]:
    """{class: its first error} for headers that do not compile on their own. The test sources go in
    `here`: a quoted #include looks beside its file first, so headers written there win over include/."""
    def one(name: str) -> Optional[str]:
        path = here / f"alone_{name}.cpp"
        path.write_text(f'#include "{GAME_DIR}/{name}.h"\n', encoding="utf-8")
        ok, log = p.compile(path, path.with_suffix(".obj"), p.configure.CFLAGS)
        if ok:
            return None
        return next((line.strip() for line in log.splitlines() if "error" in line), "does not compile")
    here.mkdir(parents=True, exist_ok=True)
    failed = {}
    with ThreadPoolExecutor(jobs) as pool:
        for name, err in zip(plans, pool.map(one, plans)):
            if err:
                failed[name] = err
    return failed


def header_class(text: str, name: str) -> Optional[classdecl.ClassDecl]:
    """The definition of `name` in a header's text."""
    for item in integrate.items(text):
        d = classdecl.parse(item)
        if d is not None and d.name == name:
            return d
    return None


def in_place(text: str) -> str:
    """A header's text without its include guard: to compile as a unit's declarations (a probe opens their
    private members, which an #include would hide)."""
    return "".join(line for line in text.splitlines(keepends=True)
                   if not re.match(r"^\s*#\s*(?:ifndef|define|endif)\b.*\bGAME_\w+_H\b", line))


def probe(p: Project, declarations: str, decls: List[classdecl.ClassDecl], path: Path) -> Optional[str]:
    """Measure `decls` as `declarations` declare them; an error message on failure."""
    text, order = classdecl.probe_source(declarations, decls)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8")
    ok, log = p.compile(path, path.with_suffix(".obj"), p.configure.CFLAGS)
    if not ok:
        return " / ".join(log.splitlines()[:2])
    classdecl.read_probe(path.with_suffix(".obj").read_bytes(), decls, order)
    return None


def dependents(p: Project, name: str) -> List[str]:
    """The units that include include/Game/<name>.h, directly or through another header."""
    game = p.include_dir / GAME_DIR
    includes = {h.stem: set(re.findall(r'#include "Game/(\w+)\.h"', h.read_text(encoding="utf-8", errors="replace")))
                for h in game.glob("*.h")}
    users = {name}
    changed = True
    while changed:
        changed = False
        for h, inc in includes.items():
            if h not in users and inc & users:
                users.add(h)
                changed = True
    out = []
    for path in sorted((p.src_dir / GAME_DIR).glob("*.cpp")):
        if set(re.findall(r'#include "Game/(\w+)\.h"', path.read_text(encoding="utf-8", errors="replace"))) & users:
            out.append(f"{GAME_DIR}/{path.name}")
    return out


def still_same(p: Project, sources: List[str], work: Path, jobs: int) -> Optional[str]:
    """None when every unit in `sources` compiles to its current object's code, else the first that does not."""
    def one(source: str) -> Optional[str]:
        old = p.main / "build" / p.version / "src" / source.replace(".cpp", ".obj")
        new = work / "check" / source.replace(".cpp", ".obj")
        ok, log = p.compile(p.src_dir / source, new, cflags(p, source))
        if not ok:
            return f"{source} does not compile: {log.splitlines()[0] if log else ''}"
        diff = same_code(old, new) if old.is_file() else "has no object to compare (ninja first)"
        return f"{source}: {diff}" if diff else None
    with ThreadPoolExecutor(jobs) as pool:
        return next((x for x in pool.map(one, sources) if x), None)


def absorb(p: Project, addresses: List[int], jobs: int) -> None:
    """Merge the accepted functions' own definitions of classes include/Game/ declares into the headers, each
    checked: the header still compiles alone and every unit using it keeps its bytes, else it stays as it was."""
    game = p.include_dir / GAME_DIR
    work = Path(tempfile.mkdtemp(prefix="t3absorb-", dir=p.state_dir("tmp")))
    proposals: Dict[str, List[Tuple[int, classdecl.ClassDecl, str]]] = collections.defaultdict(list)
    for a in addresses:
        path = p.state / "accepted" / f"{a:08X}.cpp"
        if not path.is_file():
            print(f"0x{a:08X}: not accepted")
            continue
        declarations, _ = integrate.split_file(path.read_text(encoding="utf-8"))
        for item in integrate.items(declarations):
            d = classdecl.parse(item)
            if d is not None and (game / f"{d.name}.h").is_file():
                proposals[d.name].append((a, d, declarations))
    if not proposals:
        print("no accepted function declares a class include/Game/ has")
        return
    units = load_units(p)
    packages, kinds, frees = package_index(p), kinds_of(units), free_index(units)
    existing = {h.stem for h in game.glob("*.h")}
    for name, props in sorted(proposals.items()):
        path = game / f"{name}.h"
        old_text = path.read_text(encoding="utf-8")
        current = header_class(old_text, name)
        if current is None:
            print(f"{name}: its header has no definition of it")
            continue
        err = probe(p, in_place(old_text), [current], work / name / "header.cpp")
        for i, (a, d, declarations) in enumerate(props):
            err = err or probe(p, declarations, [d], work / name / f"{a:08X}.cpp")
        if err:
            print(f"{name}: not measured: {err[:160]}")
            continue
        merged = classdecl.merge([current] + [d for _, d, _ in props])
        keys = {m.key for m in merged.members}
        places = {(f.offset, f.size) for f in merged.fields()}
        lost = [m.key for m in current.members if m.kind not in ("field", "access") and m.key not in keys]
        lost += [f.name for f in current.fields()
                 if (f.offset, f.size) not in places and not classdecl.PAD.match(f.name)]
        if lost:
            print(f"{name}: the merge would drop {lost[:3]} from the header; merge by hand")
            continue
        merged.kind = current.kind
        plan = Plan(name, merged, False, old_text.split("\n", 1)[0].split(": ", 1)[-1].rstrip("."), [])
        plan.system = re.findall(r"^#include <[^>]+>", old_text, re.M)
        plan.text = header_text(plan, existing, kinds, frees, packages, units)
        if plan.text == old_text:
            print(f"{name}: nothing to add")
            continue
        path.write_text(plan.text, encoding="utf-8", newline="\n")
        failed = compile_alone(p, {name: plan}, work / name / "alone", 1)
        problem = failed.get(name) or still_same(p, dependents(p, name), work / name, jobs)
        if problem:
            path.write_text(old_text, encoding="utf-8", newline="\n")
            print(f"{name}: kept as it was: {problem[:200]}")
            continue
        print(f"{name}: took {', '.join(f'0x{a:08X}' for a, _, _ in props)}'s members")


def drop(plans: Dict[str, Plan], skipped: Dict[str, str], names: Dict[str, str], game: Optional[Path]) -> None:
    """Take classes out (with why), and every header that needs one of them."""
    while names:
        for name, why in names.items():
            skipped[name] = why
            plans.pop(name, None)
            if game is not None:
                (game / f"{name}.h").unlink(missing_ok=True)
        names = {n: f"needs {sorted(plan.needs - set(plans))[0]}, which has no header"
                 for n, plan in plans.items() if plan.needs - set(plans)}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("command", choices=("stats", "build", "absorb"))
    ap.add_argument("addrs", nargs="*", help="absorb: accepted functions whose class definitions to merge")
    ap.add_argument("--classes", default="", help="only these classes and what they need (comma-separated)")
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 8)
    args = ap.parse_args()
    if os.environ.get("T3_AGENT_ID"):
        sys.exit("headers.py is the lead's")
    p = Project()
    if args.command == "absorb":
        absorb(p, [p.parse_addr(a) for a in args.addrs], args.jobs)
        return
    units = load_units(p)
    work = Path(tempfile.mkdtemp(prefix="t3headers-", dir=p.state_dir("tmp")))
    packages = package_index(p)
    kinds = kinds_of(units)
    frees = free_index(units)
    var = variants(units)
    classes = set(var) | set(packages)
    with_methods = method_classes(units)
    wanted = {n for n, v in var.items() if (len(v) >= 2 or n in with_methods) and n not in packages}
    if args.classes:
        wanted &= set(args.classes.split(","))
    todo = list(wanted)  # and every class those need complete, from any unit
    while todo:
        for d in var.get(todo.pop(), {}).values():
            for x in complete_types(d, d.text, frees, classes):
                if x in var and x not in wanted and x not in packages:
                    wanted.add(x)
                    todo.append(x)
    # measure the units whose declarations of a wanted class differ
    differing = {s for n in wanted for s in var[n] if len({classdecl.normal(d.text) for d in var[n].values()}) > 1}
    errors: Dict[str, str] = {}
    with ThreadPoolExecutor(args.jobs) as pool:
        for source, err in zip(sorted(differing), pool.map(lambda s: measure(p, units[s], work), sorted(differing))):
            if err:
                errors[source] = err
    print(f"{len(units)} units; {len(wanted)} classes to give a header; {len(differing)} units measured, "
          f"{len(errors)} could not be")
    plans, skipped = plan_headers(units, var, wanted, set(differing) - set(errors), packages, kinds, frees)
    # one file per class: a case-blind disk would give Class_10bf7f90 and Class_10BF7F90 one header
    by_file: Dict[str, List[str]] = collections.defaultdict(list)
    for name in plans:
        by_file[name.lower()].append(name)
    drop(plans, skipped, {n: f"{' and '.join(sorted(ns))} would share a file on a case-blind disk"
                          for ns in by_file.values() if len(ns) > 1 for n in ns}, None)
    # every header compiles on its own: written to include/ (build) or beside the test sources (stats).
    # A member a header does not compile with is left out of it, and the header tried again.
    root = p.include_dir if args.command == "build" else work / "include"
    game = root / GAME_DIR
    game.mkdir(parents=True, exist_ok=True)
    here = work / "alone" if args.command == "build" else root
    for name, plan in plans.items():
        (game / f"{name}.h").write_text(plan.text, encoding="utf-8", newline="\n")
    failed = compile_alone(p, plans, here, args.jobs)
    for _ in range(8):
        fixed = [n for n, err in failed.items() if repair(plans[n], err)]
        if not fixed:
            break
        for name in fixed:
            plans[name].text = header_text(plans[name], set(plans), kinds, frees, packages, units)
            (game / f"{name}.h").write_text(plans[name].text, encoding="utf-8", newline="\n")
        failed = compile_alone(p, {n: plans[n] for n in failed}, here, args.jobs)
    drop(plans, skipped, {n: "does not compile alone: " + re.sub(r"^.*[\\/](?=[^\\/]*\(\d+\) : )", "", e)
                          for n, e in failed.items()},
         game if args.command == "build" else None)  # a dry run keeps them to look at
    repaired = {n: x.repairs for n, x in plans.items() if x.repairs}
    print(f"{len(plans)} headers ({sum(1 for x in plans.values() if x.verbatim)} as every unit declares them, "
          f"{sum(1 for x in plans.values() if not x.verbatim)} merged, {len(repaired)} of them without a member "
          f"they did not compile with); {len(skipped)} classes without one:")
    reasons = collections.Counter(
        re.sub(r"[A-Z][a-z]+_[0-9A-Fa-f]{8}\w*|0x[0-9A-Fa-f]+|'[^']*'|\[.*?\]|^.*?\(\d+\) : ", "#", why)[:90]
        for why in skipped.values())
    for why, n in reasons.most_common(14):
        print(f"  {n:5} {why}")
    report = {"headers": sorted(plans), "repaired": repaired, "without": dict(sorted(skipped.items()))}
    (p.state / f"headers-{args.command}.json").write_text(json.dumps(report, indent=1) + "\n", encoding="utf-8")
    if args.command == "stats":
        print(f"the headers are in {game}; build/agent/headers-stats.json says why the rest have none")
        return
    migrate_all(p, units, plans, work, args.jobs)


def migrate_all(p: Project, units: Dict[str, UnitDecls], plans: Dict[str, Plan], work: Path, jobs: int) -> None:
    """Move each unit onto the headers whose classes it declares, keeping its bytes; then drop the
    headers no unit uses."""
    game = p.include_dir / GAME_DIR

    def closure(n: str) -> Set[str]:
        out, todo = set(), [n]
        while todo:
            for x in plans[todo.pop()].needs:
                if x not in out:
                    out.add(x)
                    todo.append(x)
        return out

    def migrate(u: UnitDecls) -> Tuple[str, Optional[str], Set[str]]:
        """(source, new text or None, classes kept local)."""
        candidates = {n for n in u.classes if n in plans}
        if not candidates:
            return u.source, None, set()
        old_obj = p.main / "build" / p.version / "src" / u.source.replace(".cpp", ".obj")
        if not old_obj.is_file():
            return u.source, None, candidates

        def compose(use: Set[str]) -> Optional[str]:
            local = set(u.classes) - use
            # a header bringing in a class the unit keeps would define it twice
            use = {n for n in use if not ((closure(n) | {n}) & local)}
            if not use:
                return None
            provided = set()
            for n in set(use).union(*(closure(n) for n in use)):
                provided |= {integrate.normal(f) for f in plans[n].carries}
            items = []
            for item in u.items:
                d = classdecl.parse(item)
                if d is not None and d.name in use:
                    continue
                if integrate.normal(item) in provided:
                    continue
                items.append(item)
            includes = [f'#include "{GAME_DIR}/{n}.h"\n' for n in sorted(use)]
            head = [i for i in items if classdecl.normal(i).startswith("#")]
            rest = [i for i in items if not classdecl.normal(i).startswith("#")]
            text = integrate.HEADER.format(unit=u.source) + "".join(head) + "".join(includes)
            if rest:
                text += "\n" + "\n".join(r.rstrip("\n") + "\n" for r in rest)
            text += "\n" + "\n".join(b.rstrip("\n") + "\n" for _, b in sorted(u.blocks.items()))
            return text

        def check(use: Set[str], tag: str) -> Optional[str]:
            text = compose(use)
            if text is None:
                return None
            path = work / tag / u.source
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(text, encoding="utf-8")
            obj = path.with_suffix(".obj")
            ok, _ = p.compile(path, obj, cflags(p, u.source))
            return text if ok and same_code(old_obj, obj) is None else None

        text = check(candidates, "all")
        if text is not None:
            return u.source, text, set()
        good = {n for n in sorted(candidates) if check({n}, f"one_{n}") is not None}
        while good:
            text = check(good, "good")
            if text is not None:
                return u.source, text, candidates - good
            good.discard(sorted(good)[-1])
        return u.source, None, candidates

    with ThreadPoolExecutor(jobs) as pool:
        results = list(pool.map(migrate, units.values()))
    moved, kept_local = 0, collections.defaultdict(list)
    used: Set[str] = set()
    for source, text, kept in results:
        if text is not None:
            (p.src_dir / source).write_text(text, encoding="utf-8", newline="\n")
            moved += 1
            for n in re.findall(r'#include "Game/(\w+)\.h"', text):
                used |= {n} | closure(n)
        for n in kept:
            kept_local[n].append(source)
    for name in set(plans) - used:  # every header in the tree is one the build compiles
        (game / f"{name}.h").unlink(missing_ok=True)
    report = {"headers": len(used), "units moved": moved,
              "kept local": {n: sorted(v) for n, v in sorted(kept_local.items())}}
    (p.state / "headers-report.json").write_text(json.dumps(report, indent=1) + "\n", encoding="utf-8")
    print(f"{len(used)} headers in use, {len(set(plans) - used)} unused ones dropped; {moved} units moved onto them; "
          f"{sum(len(v) for v in kept_local.values())} declarations kept local in {len(kept_local)} classes")


if __name__ == "__main__":
    main()
