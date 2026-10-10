"""Class declarations as the workers write them: parse, measure, merge and write them back.

A unit under src/ carries its own declaration of every class its functions use (integrate.py
copies them from the accepted sources), so one game class has as many declarations as units
using it, each with the members its functions needed. This module turns those into one:

  - parse(): a class or struct definition into its bases and members (fields, methods,
    virtual methods in slot order, constructors and destructors, inline bodies, the rest);
  - probe_source() and read_probe(): the offset of every field and the size of the class, from
    MSVC itself (offsetof and sizeof compiled with the unit's declarations, read back from the
    object);
  - merge(): several declarations of one class into one: the union of their members, fields
    placed by offset (two names for one place become a union when their types allow it),
    virtual slots aligned by index, the rest by identity. Where they disagree the more
    structured one wins (a base over fields padding its place, a destructor or a name over a
    placeholder slot, else the commoner choice) and what loses is listed in `dropped`;
  - write(): a declaration back to C++.
Whether a merged declaration compiles each unit's functions to the same bytes is the caller's
check (tools/agent/headers.py): the merge only proposes.
"""

import collections
import re
import struct
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Sequence, Tuple

import lint as linter

IDENT = re.compile(r"[A-Za-z_]\w*")
CLASS_HEAD = re.compile(r"^(class|struct)\s+([A-Za-z_]\w*)\s*(?::\s*([^{]*?))?\s*\{", re.S)
ACCESS = re.compile(r"^(public|private|protected)\s*:")
BASIC_POD = re.compile(r"^(?:const\s+)?(?:unsigned\s+|signed\s+)?(?:int|char|short|long|float|double|bool|"
                       r"BYTE|WORD|DWORD|INT|UINT|FLOAT|UBOOL|BITFIELD|ANSICHAR|TCHAR|SWORD|SBYTE|QWORD|SQWORD|"
                       r"__int64|wchar_t|size_t)$")


class Conflict(Exception):
    """Declarations of one class that cannot be merged automatically."""


@dataclass
class Member:
    kind: str          # field, method, virtual, ctor, dtor, other
    name: str
    key: str           # identity: a field's name, a method's name and parameter types
    text: str          # the member as written, comments before it included
    type: str = ""     # a field's type (without the array part)
    array: str = ""    # a field's array part, "[0x3C]"
    body: bool = False  # a method defined in the class
    offset: int = -1   # a field's offset, from read_probe()
    size: int = 0      # a field's size, from read_probe()


@dataclass
class ClassDecl:
    kind: str                      # class or struct
    name: str
    bases: str                     # the base clause as written, normalized
    members: List[Member] = field(default_factory=list)
    size: int = -1                 # sizeof, from read_probe()
    text: str = ""                 # the definition as written

    def fields(self) -> List[Member]:
        return [m for m in self.members if m.kind == "field"]

    def virtuals(self) -> List[Member]:
        return [m for m in self.members
                if m.kind == "virtual" or (m.kind == "dtor" and m.text.lstrip().startswith("virtual"))]

    def is_polymorphic(self) -> bool:
        return bool(self.virtuals())


def normal(text: str) -> str:
    return " ".join(linter.strip(text).split())


def _split_members(body: str, bare: str) -> List[str]:
    """The members of a class body: up to a `;` at depth 0, or a `}` closing an inline body (a
    `;` right after it belongs to it). Access specifiers come out on their own."""
    out, start, depth, i = [], 0, 0, 0
    n = len(bare)
    while i < n:
        c = bare[i]
        if depth == 0:
            m = ACCESS.match(bare[i:]) if (i == 0 or bare[i - 1] in " \t\r\n;}") else None
            if m and not bare[start:i].strip():
                out.append(body[start:i + m.end()])
                i += m.end()
                start = i
                continue
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                j = i + 1
                while j < n and bare[j] in " \t\r\n":
                    j += 1
                prefix = normal(bare[start:i])
                is_aggregate = re.match(r"^(?:union|struct|class|enum)\b", prefix) is not None
                if j < n and bare[j] == ";":
                    out.append(body[start:j + 1])
                    start = i = j + 1
                    continue
                if not is_aggregate:  # an inline body ends the member
                    out.append(body[start:i + 1])
                    start = i = i + 1
                    continue
        elif c == ";" and depth == 0:
            out.append(body[start:i + 1])
            start = i + 1
        i += 1
    if body[start:].strip():
        out.append(body[start:])
    return [s for s in out if normal(s)]


def _params_key(params: str) -> str:
    """A parameter list's types: names and default values dropped."""
    bare = normal(params)
    if bare in ("", "void"):
        return ""
    parts, depth, cur = [], 0, ""
    for ch in bare:
        if ch in "(<[":
            depth += 1
        elif ch in ")>]":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    parts.append(cur)
    out = []
    for p in parts:
        p = p.split("=")[0].strip()
        m = re.match(r"^(.*?[\s\*&])([A-Za-z_]\w*)(\s*\[[^\]]*\])?$", p)
        if m and not BASIC_POD.match(p) and normal(m.group(1)) not in ("", "const", "unsigned", "signed"):
            p = m.group(1).strip() + (m.group(3) or "")
        out.append(re.sub(r"\s+", " ", p.replace(" *", "*").replace(" &", "&")).strip())
    return ",".join(out)


def parse_member(text: str, class_name: str) -> Member:
    bare = normal(text)
    if ACCESS.match(bare):
        return Member("access", bare.rstrip(":"), "access:" + bare, text)
    head = bare.split("{")[0] if "{" in bare else bare
    is_virtual = head.startswith("virtual ")
    paren = head.find("(")
    if paren > 0 and not re.match(r"^(?:typedef|friend|enum|union|struct|class|using)\b", head):
        before = head[:paren].rstrip()
        m = re.search(r"(~?[A-Za-z_]\w*|operator\s*\S+)$", before)
        name = m.group(1) if m else before
        depth, j = 0, paren
        while j < len(head):
            if head[j] == "(":
                depth += 1
            elif head[j] == ")":
                depth -= 1
                if depth == 0:
                    break
            j += 1
        params = head[paren + 1:j]
        tail = head[j + 1:]
        const = " const" if re.match(r"^\s*const\b", tail) else ""
        has_body = "{" in bare and not bare.rstrip().endswith(");")
        key = f"{name}({_params_key(params)}){const}"
        if name == class_name:
            kind = "ctor"
        elif name == "~" + class_name:
            kind = "dtor"
        else:
            kind = "virtual" if is_virtual else "method"
        if not ("(" in before and ")" in before):  # not a function pointer field
            return Member(kind, name, key, text, body=has_body)
    if re.match(r"^(?:typedef|friend|enum|using|static)\b", bare) or bare.startswith("union {") \
            or re.match(r"^(?:struct|class|union)\b[^;]*\{", bare):
        if bare.startswith("union {") or re.match(r"^(?:struct|union)\s*\{", bare):
            return Member("other", "", "anon:" + bare, text)
        return Member("other", "", "other:" + bare, text)
    decl = bare.rstrip(";").strip()
    decl = decl.split("=")[0].strip()
    if ":" in decl and not "::" in decl:  # a bitfield
        return Member("other", "", "bitfield:" + bare, text)
    m = re.match(r"^(.*?)([A-Za-z_]\w*)\s*((?:\[[^\]]*\]\s*)*)$", decl)
    if not m or not m.group(1).strip():
        return Member("other", "", "other:" + bare, text)
    if "," in m.group(1):
        return Member("other", "", "multi:" + bare, text)
    return Member("field", m.group(2), m.group(2), text, type=m.group(1).strip(), array=(m.group(3) or "").strip())


def declaration_only(m: Member) -> Member:
    """A method defined in the class, declared instead: its text up to the parameter list's end (and
    `const`), the body and a constructor's initializer list dropped. A member without a body as it is."""
    if not m.body or m.kind not in ("method", "virtual", "ctor", "dtor"):
        return m
    bare = linter.strip(m.text)
    at = re.search(re.escape(m.name) + r"\s*\(", bare)
    if at is None:
        return m
    depth, j = 0, at.end() - 1
    while j < len(bare):
        if bare[j] == "(":
            depth += 1
        elif bare[j] == ")":
            depth -= 1
            if depth == 0:
                break
        j += 1
    tail = re.match(r"\s*const\b", bare[j + 1:])
    text = m.text[:j + 1] + (" const" if tail else "") + ";\n"
    text = re.sub(r"\binline\s+", "", text, count=1)
    return Member(m.kind, m.name, m.key, text, type=m.type, array=m.array, body=False)


def parse(item: str) -> Optional[ClassDecl]:
    """A class or struct definition (an item of integrate.items()), or None."""
    bare = linter.strip(item)
    lead = len(bare) - len(bare.lstrip())
    m = CLASS_HEAD.match(bare[lead:].lstrip())
    if not m or not normal(bare).endswith("};"):
        return None
    start = bare.index("{", lead) + 1
    end = bare.rindex("}")
    body, body_bare = item[start:end], bare[start:end]
    decl = ClassDecl(kind=m.group(1), name=m.group(2), bases=normal(m.group(3) or ""), text=item)
    for text in _split_members(body, body_bare):
        decl.members.append(parse_member(text, decl.name))
    return decl


# -- layout --------------------------------------------------------------------------------
def probe_source(declarations: str, classes: Sequence[ClassDecl]) -> Tuple[str, Dict[str, List[str]]]:
    """A translation unit that records each class's size and field offsets in a table. Private
    members are opened after the unit's #includes, for offsetof's sake."""
    lines = declarations.splitlines(keepends=True)
    last_include = max((i for i, l in enumerate(lines) if l.lstrip().startswith("#")), default=-1)
    rest = re.sub(r"(^\s*class\s+[A-Za-z_]\w*[^{;()]*\{)", r"\1 public:", "".join(lines[last_include + 1:]),
                  flags=re.M)
    body = "".join(lines[:last_include + 1]) + "#define private public\n#define protected public\n" + rest
    out = [body, "\n#define T3_OFFSETOF(c, m) ((unsigned)(&((c*)0)->m))\n"]
    order: Dict[str, List[str]] = {}
    for d in classes:
        names = [f.name for f in d.fields()]
        order[d.name] = names
        values = ", ".join([f"sizeof({d.name})"] + [f"T3_OFFSETOF({d.name}, {n})" for n in names]
                           + [f"sizeof((({d.name}*)0)->{n})" for n in names])
        out.append(f'extern "C" const unsigned int t3_probe_{d.name}[] = {{ {values} }};')
    return "\n".join(out) + "\n", order


def read_probe(obj: bytes, classes: Sequence[ClassDecl], order: Dict[str, List[str]]) -> None:
    """Fill each class's size and its fields' offsets and sizes from a compiled probe."""
    import coff
    c = coff.Coff(obj)
    for d in classes:
        sym = next((s for s in c.symbols if s.name == f"_t3_probe_{d.name}"), None)
        if sym is None:
            continue
        sec = c.sections[sym.section - 1]
        names = order[d.name]
        count = 1 + 2 * len(names)
        values = struct.unpack_from(f"<{count}I", sec.data, sym.value)
        d.size = values[0]
        for i, n in enumerate(names):
            for f in d.fields():
                if f.name == n:
                    f.offset, f.size = values[1 + i], values[1 + len(names) + i]


# -- merging -------------------------------------------------------------------------------
PLACEHOLDER_SLOT = re.compile(r"^Virtual\d+$")
PAD = re.compile(r"^(?:Unknown|Pad|_pad)[0-9A-Fa-f]*$")


def _is_pod(type_text: str, pod_classes: Sequence[str]) -> bool:
    t = type_text.replace("const ", "").strip()
    return "*" in t or "&" in t or BASIC_POD.match(t) is not None or t in pod_classes


def _type_rank(f: Member) -> Tuple[int, int]:
    """A field type's preference: a typed pointer over void*, a scalar over an array."""
    t = f.type
    return (0 if f.array else 1, 0 if t.startswith("void") or t in ("char", "BYTE") else 1)


PAD_TYPES = ("char", "unsigned char", "signed char", "BYTE", "ANSICHAR")


def _is_pad(fs: Sequence[Member]) -> bool:
    """Padding: bytes named after their offset (`char Unknown08[0x630]`). A typed array named so
    (`void* Unknown638[14]`) is a field the code uses."""
    return all(PAD.match(f.name) and f.array and f.type.replace("const ", "").strip() in PAD_TYPES for f in fs)


def merge(decls: Sequence[ClassDecl], pod_classes: Sequence[str] = (),
          dropped: Optional[List[str]] = None) -> ClassDecl:
    """One declaration with the members of decls (their fields measured by read_probe()). Where the
    declarations disagree, the more structured one wins (a base over fields padding its place, a
    destructor or a name over a placeholder slot, the commonest choice otherwise) and what loses
    is listed in `dropped`: a unit relying on it keeps its own declaration (the caller checks)."""
    if not decls:
        raise Conflict("nothing to merge")
    dropped = dropped if dropped is not None else []
    name = decls[0].name
    base_counts = collections.Counter(d.bases for d in decls if d.bases)
    bases = base_counts.most_common(1)[0][0] if base_counts else ""
    if len(base_counts) > 1:
        dropped.append(f"bases {sorted(set(base_counts) - {bases})}")
    decls = [d for d in decls if d.bases in (bases, "")]
    based = [d for d in decls if bases and d.bases == bases]
    base_end = 0
    if based:
        own = [f.offset for d in based for f in d.fields() if f.offset >= 0]
        base_end = min(own) if own else min(d.size for d in based)
    poly = any(d.is_polymorphic() for d in decls)
    start = max(base_end, 4 if poly and not bases else 0)
    out = ClassDecl(kind="class" if any(d.kind == "class" for d in decls) else "struct", name=name,
                    bases=bases, size=max(d.size for d in decls))
    # virtual slots, in order. A unit that declares only some of them puts the same one at another
    # index: each name takes one slot, and a slot left without a name of its own a placeholder.
    lists = [d.virtuals() for d in decls]
    slots: List[Member] = []
    taken: set = set()
    for i in range(max((len(v) for v in lists), default=0)):
        cands = [v[i] for v in lists if i < len(v)]
        fresh = [c for c in cands if c.name not in taken]
        if len(fresh) < len(cands):
            dropped.append(f"slot {i}: {sorted({c.name for c in cands if c.name in taken})} has another slot")
        dtors = [c for c in fresh if c.kind == "dtor"]
        named = [c for c in fresh if c.kind != "dtor" and not PLACEHOLDER_SLOT.match(c.name)]
        if dtors:
            pick = max(dtors, key=lambda c: c.body)
        elif named:
            counts = collections.Counter(c.name for c in named)
            top = counts.most_common(1)[0][0]
            pick = max((c for c in named if c.name == top), key=lambda c: (c.body, len(c.key)))
            if len(counts) > 1:
                dropped.append(f"slot {i} names {sorted(set(counts) - {top})}")
        elif fresh:
            pick = max(fresh, key=lambda c: (c.body, len(c.key)))
        else:
            slot = next(f"Virtual{i}{s}" for s in ("", "_", "__", "___") if f"Virtual{i}{s}" not in taken)
            pick = Member("virtual", slot, f"{slot}()", f"    virtual void {slot}();\n")
        taken.add(pick.name)
        slots.append(pick)
    # fields, by offset
    by_place: Dict[Tuple[int, int], List[Member]] = collections.defaultdict(list)
    weight: Dict[Tuple[int, int], int] = collections.Counter()
    for d in decls:
        for f in d.fields():
            if f.offset < 0:
                continue
            if f.offset < start:
                dropped.append(f"{f.name} under the vtable pointer or a base")
                continue
            by_place[(f.offset, f.size)].append(f)
            weight[(f.offset, f.size)] += 1
    placed = []
    for place, fs in by_place.items():
        names: Dict[str, Member] = {}
        for f in fs:
            prev = names.get(f.name)
            if prev is None or _type_rank(f) > _type_rank(prev):
                if prev is not None and normal(prev.type + prev.array) != normal(f.type + f.array):
                    dropped.append(f"{f.name}: {prev.type}{prev.array} or {f.type}{f.array}")
                names[f.name] = f
        placed.append((place[0], place[1], list(names.values()), weight[place]))
    real = [x for x in placed if not _is_pad(x[2])]
    placed = [x for x in placed if not _is_pad(x[2]) or
              not any(o < x[0] + x[1] and x[0] < o + s and (o, s) != (x[0], x[1]) for o, s, _, _ in real)]
    placed.sort(key=lambda x: (-x[3], x[0]))
    kept: List[Tuple[int, int, List[Member], int]] = []
    for x in placed:
        if any(o < x[0] + x[1] and x[0] < o + s for o, s, _, _ in kept):
            dropped.append(f"{[f.name for f in x[2]]} at {x[0]:#x} overlaps")
            continue
        kept.append(x)
    kept.sort(key=lambda x: x[0])
    # a name two places use: the commoner place keeps it
    owner: Dict[str, int] = {}
    for i, (off, size, fs, w) in enumerate(kept):
        for f in fs:
            j = owner.get(f.name)
            if j is None or kept[j][3] < w:
                owner[f.name] = i
    kept = [(off, size, [f for f in fs if owner.get(f.name) == i], w) for i, (off, size, fs, w) in enumerate(kept)]
    kept = [x for x in kept if x[2]]
    members: List[Member] = list(slots)
    others: Dict[str, Member] = {}
    for d in decls:
        for m in d.members:
            if m.kind in ("method", "ctor") or (m.kind == "dtor" and m not in slots):
                prev = others.get(m.key)
                if prev is None or (m.body and not prev.body):
                    others[m.key] = m
                elif prev.body and m.body and normal(prev.text) != normal(m.text):
                    dropped.append(f"another body for {m.key}")
            elif m.kind == "other":
                others.setdefault(m.key, m)
    slot_names = {m.name for m in slots}
    seen_sigs: Dict[Tuple[str, str], str] = {}
    for k in list(others):
        m = others[k]
        if m.kind not in ("method", "ctor", "dtor"):
            continue
        sig = (m.name, m.key[m.key.index("("):])
        if m.name in slot_names or (sig in seen_sigs and seen_sigs[sig] != k):
            dropped.append(f"{m.name}{sig[1]} declared twice")
            del others[k]
        else:
            seen_sigs[sig] = k
    if any(m.kind == "dtor" for m in slots):
        for k in [k for k, m in others.items() if m.kind == "dtor"]:
            del others[k]
    members += [m for m in others.values() if m.kind in ("ctor", "dtor")]
    members += [m for m in others.values() if m.kind == "method"]
    members += [m for m in others.values() if m.kind == "other"]
    at = start
    for off, size, fs, _ in kept:
        if off > at:
            members.append(Member("field", f"Pad{at:02X}", f"Pad{at:02X}", f"    char Pad{at:02X}[{off - at:#x}];\n",
                                  type="char", array=f"[{off - at:#x}]", offset=at, size=off - at))
        if len(fs) == 1:
            members.append(fs[0])
        else:
            plain = [f for f in fs if _is_pod(f.type, pod_classes)]
            if len(plain) < len(fs):
                dropped.append(f"{[f.name for f in fs if f not in plain]} share {off:#x} and are not plain data")
                fs = plain or fs[:1]
            if len(fs) == 1:
                members.append(fs[0])
            else:
                inner = "".join("        " + f.text.strip().replace("\n", "\n    ") + "\n" for f in fs)
                members.append(Member("field", fs[0].name, "union:" + ",".join(f.name for f in fs),
                                      "    union\n    {\n" + inner + "    };\n", offset=off, size=size))
        at = max(at, off + size)
    if out.size > at:
        members.append(Member("field", f"Pad{at:02X}", f"Pad{at:02X}", f"    char Pad{at:02X}[{out.size - at:#x}];\n",
                              type="char", array=f"[{out.size - at:#x}]", offset=at, size=out.size - at))
    out.members = members
    return out


def write(d: ClassDecl, comment: str = "", spans: Optional[List[Tuple[int, int, Member]]] = None) -> str:
    """A declaration as C++: virtual slots, constructors and destructor, methods, the rest, then the fields.
    `spans` receives (first line, last line, member) for each member, counted from 0 in the text."""
    head = f"{d.kind} {d.name}" + (f" : {d.bases}" if d.bases else "")
    lines = [comment] if comment else []
    lines += [head, "{", "public:"]
    groups = [("virtual", "dtor-virtual"), ("ctor", "dtor"), ("method",), ("other",), ("field",)]
    emitted = set()
    for kinds in groups:
        chunk = []
        for m in d.members:
            if id(m) in emitted:
                continue
            k = m.kind
            if k == "dtor" and m.text.lstrip().startswith("virtual"):
                k = "dtor-virtual"
            if k in kinds:
                emitted.add(id(m))
                text = _indent(m.text).rstrip("\n").split("\n")
                if spans is not None:
                    spans.append((len(lines) + len(chunk), len(lines) + len(chunk) + len(text) - 1, m))
                chunk += text
        if chunk:
            lines += chunk
            lines.append("")
    if lines[-1] == "":
        lines.pop()
    lines.append("};")
    return "\n".join(lines) + "\n"


def _indent(text: str) -> str:
    raw = text.strip("\n")
    body = "\n".join(line.rstrip() for line in raw.splitlines())
    if not body.startswith("    "):
        body = "\n".join(("    " + line.lstrip()) if i == 0 else line for i, line in enumerate(body.splitlines()))
    return body + "\n"


def uses(text: str) -> List[str]:
    """The identifiers a declaration mentions."""
    return sorted(set(IDENT.findall(linter.strip(text))))
