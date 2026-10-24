# Mod settings

A mod's settings live in its `.ini`, next to its DLL in `System\mods` (or in
its package folder). The launcher shows them under the mod's row on the Mods
page, each with a control, and saves a change as soon as it is made. Players
never have to open the file, and the file still reads well on its own.

## What the launcher reads

Each `key=value` line becomes a setting:

- **Label:** the key with its words spaced out (`FogDistance` becomes "Fog
  distance"), unless a `@label` hint gives one.
- **Description:** the comment lines directly above the key.
- **Control:** a `@` hint above the key, or else what the value looks like:
  a switch for `0` or `1`, a number field for a number, and a text field for
  anything else.
- **Default:** for T3SDK's own fix pack, the value in the SDK's copy of the
  file. The launcher offers to put a changed value back to it.

Sections become headings when the file has more than one. The comments at
the top of the file are its introduction.

## Hints

A hint is a comment line that starts with `@`, anywhere in the comment above
a key. The game and the mod ignore it like any other comment.

| Hint | Control |
|---|---|
| `@range 0.1..10 step 0.05` | A slider and a number field, kept within the range and on the step. `step` is optional |
| `@number` | A number field with no range |
| `@toggle` | A switch: `1` on, `0` off |
| `@choice Low\|Medium\|High` | A list of the values given |
| `@keys` | A key combination: virtual-key codes separated by commas (`16,17,13` is Shift+Ctrl+Enter). Players press the keys to set it, or switch it off (an empty value) |
| `@text` | A text field, for a value that looks like a number but is not one |
| `@label Field of view` | The setting's name in the launcher |

```ini
; Zone tweaks: fog distance and ambient light in every level.
; Changes take effect at the next start.
[Zones]
; Multiplies where the distance fog starts and ends: 2.0 pushes the fog twice
; as far away, 0.5 brings it closer.
; @range 0.1..10 step 0.05
FogDistance=1.0
```

## Writing the file

- Read every value defensively: players can still edit the file by hand. Fall
  back to the default for a value out of range, as the fix-pack mods do.
- Write the key's comment for players: what it does, in a sentence. The
  control already shows the value, so "1 on, 0 off" and "Default 1." are left
  out of the launcher's description.
- The launcher changes values where they stand and keeps the rest of the file
  (comments, order, line endings). An update of T3SDK keeps a player's copy of
  a fix-pack `.ini`; the launcher still shows the new hints and descriptions,
  read from the SDK's copy.
- Mods read their settings when the game starts, so a change applies at the
  next start.
