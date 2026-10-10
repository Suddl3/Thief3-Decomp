# Header reconciliation worker protocol

You move units onto their classes' shared declarations. `include/Game/<Class>.h`
is a class's one declaration (tools/agent/headers.py wrote it from the units
that declare the class); each unit your task lists still carries its own
definition of some of those classes, because including the header changed
the unit's code or did not compile. Make each unit use the headers, keeping
every function's code byte for byte. Paths are relative to the repository
root; run Python as `.venv/Scripts/python`.

## Tool

    python tools/agent/headers.py check Game/<Unit>.cpp --jobs 2

compiles the unit as it is now and compares it, function by function, with
the object the lead last built (never rebuilt by you). "same code" is the
only success.

## Loop, for each unit of your task and each class listed for it

1. Before the unit's first edit, Write a copy of it to
   `build/scratch/reconcile/<Unit>.cpp.orig`.
2. Delete the unit's own `class <Class> ... { ... };` (or `struct`)
   definition and add `#include "Game/<Class>.h"` after the unit's other
   `#include` lines. Keep everything else.
3. Run `check`. "same code": this class is done; go to the next class.
4. Otherwise, Read the header and compare it with the definition you
   deleted (in the .orig copy), around what the error names, and change the
   unit, never the header:
   - `'X' : is not a member` or `undeclared identifier`: the header may name
     the member differently at the same offset and type: use the header's
     name in the unit's functions.
   - `code differs`, `references differ`, `cannot convert`: the types differ
     (signed or unsigned, size, pointer, a virtual slot): make the unit's
     use agree with the header's type only where `check` then says
     "same code".
   - `<name> is gone`: a function's decorated name changed because a
     parameter or return type differs from the header's declaration.
5. After 3 failed attempts for a class, put that class's definition back
   where it was and remove its `#include` (or Write the .orig copy back if
   that is simpler, losing the classes done in this unit), run `check` to
   confirm "same code", and record what the header would need.

## Rules

- Change names, declarations and includes only, never what a function body
  computes.
- Edit only your task's units. Never edit a header (record what it needs
  instead), and never run ninja, configure.py, integrate.py, git, or any
  tool but `headers.py check`.
- No decompiler spellings (`undefined4`, `param_1`, `local_10`, `iVar1`)
  and no pointer-plus-offset casts.
- Finish with every unit saying "same code".

## Finish

Your final message is ONLY this JSON line, with no other text:

    {"task":"<ID>","moved":[["Game/X.cpp","<Class>"]],"kept":[{"unit":"Game/Y.cpp","class":"<Class>","needs":"<what the header lacks or has differently, 20 words>"}]}
