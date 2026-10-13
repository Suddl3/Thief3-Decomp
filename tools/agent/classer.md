# Class worker: one declaration per class

You are a worker on a matching decompilation of Thief: Deadly Shadows (`T3Main.exe`, MSVC 7.1). The code in
`src/Game/` compiles to the game's bytes, function by function. Your job is not to match anything new. It is
to make the code read like source: a class is declared **once**, in its header, and no unit keeps its own
copy of it. You are given `ID=<your id>`. Work from the repository root. Keep your messages short: do the
work with tools, do not print files back.

## The situation

- `include/Game/<Class>.h` declares a class of the game. A native class (its name starts with `A` or `U` and
  `tools/agent/classwork.py next` gives it a `member_file`) is declared in a generated package header,
  `include/<Package>/<Package>Classes.h`, which you must not edit; its member functions are in
  `include/<Package>/<Class>.h`, which you may edit (it is included inside the class).
- Some units (`src/Game/*.cpp`) were written before the header and still define the class themselves, above
  their functions: a copy with only the members that unit needed, often with other names (`Unknown1C` where
  the header says `m_Timer`), other types (`int` where the header says `float`), or rows of
  `virtual void Virtual<N>();` to reach one slot.
- A tool already moved every unit it could. What is left **disagrees** with the header, and needs you to
  decide what the class really is.

## The loop

1. Claim a class:

       .venv/Scripts/python tools/agent/classwork.py next --id <ID>

   It prints `{"class", "header", "units", ...}`: the header and the units that still have a copy.
   `{"class": null}` means there is nothing left: stop and report.

2. See how each copy differs from the header:

       .venv/Scripts/python tools/agent/classwork.py diff <Class>

   Fields are listed with their offsets (measured by the compiler). A copy's field at the same offset as
   a header field **is** that field, whatever it is called.

3. Read the units' functions (only the units listed) to see how the disputed members are used, then decide,
   member by member:
   - **Same offset, another name**: keep the header's name unless the copy's is the meaningful one
     (`m_Count` beats `Unknown10`). If you rename a header member, every unit that includes the header must
     still compile: `check` tells you.
   - **Same offset, another type**: the type the code's operations show. A field compared with a float
     constant and added to `2.0f` is a `float`, even if another unit only copies it as an `int`. A field
     whose members are used (`x.Count`) is that struct, not a `char[8]`. A pointer to a known class beats
     `void*` or `int`.
   - **A field inside the header's padding** (`char Unknown14[0x10]` in the header, `int Unknown18` in the
     copy): split the padding in the header so the field is declared at its offset. The class's size and
     every other offset must not change.
   - **A method the header lacks**: declare it in the header (the member file, for a native class).
   - **A method with other parameter types**: the unit that *defines* the method (has its body) is right
     about its signature; a caller's `int` for a pointer argument is a guess. Callers then cast.
   - **`virtual void Virtual<N>()` rows**: the header must declare the class's virtual functions in table
     order, so a copy's nth virtual is the header's nth. Never add rows to a unit to reach a slot.

4. Edit the header, then each unit: delete its copy of the class, `#include "Game/<Class>.h"` (the package
   header for a native class) with its other includes, and adapt the functions to the header's spelling.
   Where a unit's code used a type the header does not give the member, write the cast that keeps the code:
   `*(int*)&m_Timer`, `(Item*)m_Data`. The functions' own names, parameters and bodies otherwise stay.

5. Check:

       .venv/Scripts/python tools/agent/classwork.py check <Class>

   It compiles every unit that had a copy and every unit that includes the header, and compares each
   function with the code it had. **Nothing may change.** It prints the first problems: a compile error
   (fix the header or the unit), or `compiles to other code` (your edit changed what the function does: a
   type with another size or signedness, a cast that reads differently, a virtual at another slot).
   Repeat 4 and 5 until it prints `N units compile to the same code`.

6. Finish:

       .venv/Scripts/python tools/agent/classwork.py done <Class>

   Then go back to 1 for another class, until you have done the number your task says or `next` has none.

If after six rounds of `check` a class still fails, give it up. That puts every file back as it was:

    .venv/Scripts/python tools/agent/classwork.py giveup <Class> --why "<one line: what could not be reconciled>"

## Rules

- Edit only: the class's header (or member file), and the units `next` listed. If `check` shows that
  another unit that includes the header no longer compiles because you renamed or retyped a member, either
  keep the old spelling in the header or fix that unit's use of the member, nothing else in it.
- Never change a function's name, its parameters, or the `// FUNCTION:` line above it. Never move a
  function to another file. Never add `__asm`, `#pragma`, or compiler flags.
- Never edit `include/*/*Classes.h`, `include/Core/Core.h`, `config/`, `tools/`, or anything under `build/`
  by hand.
- A member whose meaning the code shows gets a name in the header (`m_Count`, `m_Owner`); one you cannot
  tell keeps `Unknown<offset>`. Do not invent meanings. A one-line comment on a member says what the code
  does with it, not how you found it.
- Do not leave a unit with a copy of your class and do not leave the tree failing: finish with `done` or
  `giveup` for every class you claimed.

## Report

End with one JSON line: `{"id": "<ID>", "done": ["ClassA", ...], "givenup": ["ClassB", ...]}`.
