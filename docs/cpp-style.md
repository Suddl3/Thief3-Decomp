# C++ conventions

How T3SDK's own C++ is written: the loader (`sdk/loader/`), the public headers
(`sdk/include/t3sdk/`), the mods (`sdk/mods/`) and the mod template
(`templates/mod/`). The matching decompilation (`src/`, `include/`) has its own
rules, set by what compiles to the game's bytes ([matching.md](matching.md)).

Code is read far more often than it is written, mostly by someone who has
never seen it: a contributor, a mod author learning from a mod, or the author
months later. Write for that reader.

## Formatting

`sdk/.clang-format` decides the layout, and CI checks it:

```sh
python tools/sdk_style.py          # which files need formatting
python tools/sdk_style.py --fix    # format them
```

In short: 4 spaces, lines up to 120 columns, braces on the statement's own
line and always present (`if (x) { return; }`, never `if (x) return;`), a
blank line between definitions, `Type* name` (the `*` with the type).

## Files

- One concern per file. A loader module is a `.cpp`/`.hpp` pair named after
  its concern (`config.cpp`, `codehook.cpp`); a mod is one folder
  (`sdk/mods/<mod-name>/`, kebab-case) with `<mod_name>.cpp` (snake_case),
  its `CMakeLists.txt`, and `<mod-name>.ini` when it has settings.
- Every file starts with a comment that says what it is for: what problem it
  solves and how, in a few sentences. A mod's comment also lists its
  settings. The reader should not have to read the code to learn what it does.
- Order inside a file: the header comment, the includes, then in a
  namespace: constants (game addresses first), types, state, helpers, the
  main logic, and last the public entry points (`T3Mod_Init`, a module's
  `Install`).
- A file over about 300 lines groups its parts under banners:

  ```cpp
  // ---- borderless window ------------------------------------------------------------
  ```

## Includes

Four groups, separated by a blank line, in this order: the file's own header
(`"config.hpp"`), other project headers (`"log.hpp"`, `<t3sdk/t3sdk.h>`,
`<MinHook.h>`), `<windows.h>` and other Windows headers (`<windows.h>`
first: the others need it), then the C++ standard library, alphabetically.
Include what the file uses; do not rely on another header bringing it in.

## Names

| What | Style | Example |
|---|---|---|
| Types, functions, methods | PascalCase | `FileRoot`, `ReadLoadOrder()` |
| Local variables, parameters | camelCase | `gameRoot`, `lastScan` |
| Globals (file scope) | `g_` + camelCase | `g_settings` |
| Thread-local globals | `t_` + camelCase | `t_inSerialize` |
| Constants, game addresses | `k` + PascalCase | `kConfigFind`, `kDesignedAspect` |
| Function-pointer types | PascalCase + `Fn` | `FindFn`, `PropertyGetFn` |
| Detours of a game function | its name + `Detour` | `FindDetour` |
| Macros (only where unavoidable) | `T3SDK_` + UPPER_CASE | `T3SDK_CALL` |
| Namespaces | lowercase | `t3sdk::config`, `t3mod` |

Name a thing for what it means in the game, not for where it was found:
`kLoadDifficultyMultipliers`, not `kFunc10AB70B0`. Engine names (`UObject`,
`FName`, `GObjObjects`) keep their Unreal spelling.

## Comments

- **Functions**: every function that is not obvious from its name and
  signature gets a comment above it saying what it does and why, its return
  value, and anything a caller must know (which thread, when it is safe to
  call). Describe the behaviour, not the code line by line.
- **Game addresses**: every address constant says what is there, with its
  signature and calling convention for a function, and points to the
  evidence ([engine.md](engine.md) has a row for each address the SDK or a
  mod uses):

  ```cpp
  // bool Config::Find(const cString& section, const cString& key, const char* file, cString& value),
  // __thiscall: the lookup every Config getter parses (docs/engine.md, "Configuration").
  constexpr uintptr_t kConfigFind = 0x109103D0;
  ```

- **Globals**: what each holds, and which threads touch it when that is more
  than the main thread.
- **Inside a function**: a short comment before a step whose reason is not
  visible in the code (why a check is there, which game behaviour it works
  around). Not one per line.
- Comments are sentences: a capital letter and a full stop. No commented-out
  code, no `TODO` without what is to be done and why it is not done yet.

## Inside a function

- Group the statements of a function into steps, with a blank line between
  steps: read the settings, then check them, then install the hooks. A
  function of 30 lines with no blank line is a wall.
- Return early for the cases that stop the work; keep the main path at the
  left margin.
- Keep functions short: past about 40 lines, look for a step that can be its
  own function with a name that says what it does.
- One statement per line; declare variables where they are first needed.

## Talking to the game

- Game addresses are constants at the top of the file, never numbers in the
  middle of a function.
- A game function is called or hooked through a `using NameFn = ...` type.
  `__thiscall` functions are declared `__fastcall` with an unused `edx`
  parameter after `self`, and the constant's comment says the original is
  `__thiscall`.
- Engine object fields go through `t3mod::Field<T>(object, offset)` (or a
  struct from `unreal.hpp`), with the offset as a named constant: never
  pointer arithmetic written out in place.
- Check every hook's status, log a failure once, and keep going without the
  feature (a mod's `T3Mod_Init` returns non-zero when it can do nothing).

## Mods

- Use `t3sdk/modkit.hpp` for what every mod needs (its settings file,
  reading values, hooks, key combinations, `GameHasFocus`, `Field`) instead of
  copying it into the mod.
- Settings live in `<mod-name>.ini` next to the DLL; the `.ini` file
  explains each setting in a comment, and the source file's header comment
  lists them too. A mod that could damage save games is off by default.
- Log one line when the mod starts (what is on), and one line the first
  time each feature acts, so a player's `T3SDK.log` shows what happened.
  Never log every frame.
- `T3Mod_Init` comes last in the file: read the settings, install what is
  on, log, return.

## The loader

- Each module has a namespace `t3sdk::<module>`; what other modules do not
  use stays in an anonymous namespace inside it.
- The `.hpp` documents each function it exports; the `.cpp` starts with how
  the module works.
- The public API (`t3sdk.h`) is plain C, `__cdecl`, and only grows: new
  members go at the end of `T3SdkApi`, under the comment of the API version
  that added them. Each member's comment says what it does, when it can be
  called, and what it returns.
- Calls into mods are guarded (SEH), so a mod's crash disables that mod's
  callback instead of ending the game.
