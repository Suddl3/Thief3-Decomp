# Naming worker protocol

You give placeholder classes and functions of the decompilation the names
their evidence supports. Matched code compiles to the game's bytes whatever
its names; names are what make it readable. Your prompt gives ID and
CLASSES, or ID and UNITS. Paths are relative to the repository root; run
Python as `.venv/Scripts/python`.

## Tool

    .venv/Scripts/python tools/agent/classinfo.py <Class> [--max-lines N]

prints a class's packet: its declaration, the classes deriving from it, and
each matched method with its source, the strings its code uses, what it
calls and who calls it; the placeholder fields and the methods using them;
the vtable's slots; and `xbox` lines. The Xbox development builds of April
2004 kept what the PC release dropped (assertion and log messages, source
file names, debug names like `cTriggerSystem::m_ConditionTypes`);
tools/agent/xbox.py paired their functions and vtables with this program's.
A `string` pair is reliable; `vtable` and `calls` pairs are right about nine
times in ten, so check them against the code.

    .venv/Scripts/python tools/agent/classinfo.py --units <UNITS> [--max-lines N]

prints, for a UNITS task, each unit's declarations and every function the
same way. Neighbouring units hold what one source file of the game compiled
to, so a named neighbour, a shared class or an Xbox source file says what
the functions around it belong to.

## Loop, for each class of CLASSES

1. Run classinfo.py on it and read the whole packet.
2. The class, when its name is a placeholder (`Class_10E9AC80`): name it
   when the evidence names it. The Xbox twin's `Class::` names, most
   frequent first, with its source file, are the original name when the
   class's own code agrees (its messages, what it does): use that spelling
   exactly (`cMotionControllerAnim`, `State_Search`, `SoundSchema`). Without
   such a name, name it only when its role is plain from its code and
   messages, in the original style: `c` and CamelCase for Ion Storm's own
   classes (`cWeaponManager`); Unreal classes keep `U`, `A`, `F`.
3. Each method whose name is a placeholder (`FUN_10b21280`): name what it
   does, from its code, its strings and Xbox messages, the fields it reads
   or writes (script names in the header, `isCrouching`), what it calls and
   who calls it. Accessors are `Get`/`Set`/`Is`/`Has` and the member's name
   (`IsCrouching`); actions are verbs (`AddMotionCallback`). An Xbox
   message naming its function (`Attempt to remove nonexistant
   MotionCallback` in a method that removes one) gives the name; a message
   naming another function names that one, not this.
4. Free functions in the packet (callees, accessors returning a singleton:
   `FUN_10b25cd0()` returning `Class_10B255F0*`) may be named the same way
   when the evidence is as clear.
5. Fields named `UnknownXX` in classes that are not script classes: propose
   a name when the methods using a field make its meaning plain (`m_` and
   camelCase for Ion Storm's classes, as their debug names show:
   `m_ConditionTypes`).

## A UNITS task

Run classinfo.py once with all your units (UNITS as your prompt gives it:
a list, or `@<file>:<n>`, which classinfo.py reads). Name each placeholder function
in them, free (`FUN_10a47040`) or a method, by steps 3 and 4; a placeholder
class with a method there by step 2 (run classinfo.py on that class when its
unit shows too little of it); and such a class's fields by step 5. Functions
the packet shows only as callees may be named by step 4.

## A class pass (your prompt adds PASS=classes)

Your classes are placeholders whose methods and fields earlier passes
named. Say what each class is. Read its packet as before; the class's role
shows in its fields and what its methods do with them, in the names of its
methods, in who creates it and who calls it. When the role is plain, name
the class for it in the original style (`cGoalList`, `cSoundHandle`,
`sAnimEvent` for a plain struct; an Xbox twin's name wins when there is
one): a name says what the class is, never one of its methods. Leave a
class whose role you cannot say in a sentence. Then name what else of the
class became clear, by steps 3 to 5.

## Rules

- Name only what the evidence supports. A wrong name misleads every
  reader; a placeholder only slows them. Skip what you cannot support.
- A method named after a vtable slot's job in a base class keeps that name
  in every class overriding it: name the slot once, in the class that
  declares it, and mention the overrides in the evidence. When you name an
  override whose body calls its base's version (`APlayerPawn::FUN_10a47f10()`
  in `calls`), name that base function too, with the same name.
- Names are C++ identifiers: no keywords, no names another class or global
  already uses, one name per method signature in a class.
- Evidence is one line, at most 25 words: what shows the name (a message, a
  debug name, a field, a callee), never a guess's reasoning.
- Read and run only what this protocol names; write only your plan file.
  Never edit sources, headers, symbols or tools.
- Keep your own messages short: never copy a packet's source back into a
  message or your reasoning, and write the plan with one Write call. A
  single response over the output limit loses the whole task.

## Finish

Write `build/scratch/names/<ID>.json`:

    {"classes":   {"Class_10E9AC80": {"name": "cMotionControllerAnim", "evidence": "..."}},
     "functions": {"0x10B21280": {"name": "IsCrouching", "evidence": "..."}},
     "fields":    {"Class_10E9AC80": {"Unknown14": {"name": "m_Callbacks", "evidence": "..."}}}}

Function keys are the method's address. Then your final message is ONLY
this JSON line, with no other text:

    {"id":"<ID>","classes":<named>,"functions":<named>,"fields":<named>,"skipped":<placeholders left>}
