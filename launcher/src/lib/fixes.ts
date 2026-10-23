// The game fixes a player sees on the Play page: T3SDK's own switches
// (T3SDK.ini) and the fix mods T3SDK installs (DLLs in System\mods), each with
// a short label. Every other T3SDK setting is a developer tool (Settings).

/** A T3SDK.ini switch shown as a fix. `inverted`: the switch reads "on" when the value is 0. */
export interface SdkFix {
  section: string;
  key: string;
  label: string;
  hint: string;
  inverted?: boolean;
}

export const sdkFixes: SdkFix[] = [
  { section: "Fixes", key: "SkipIntros", label: "Skip the intro movies", hint: "Straight to the main menu." },
  {
    section: "Display",
    key: "NativeResolutions",
    label: "Your monitor's resolutions",
    hint: "Up to its native one, in the game's Options.",
  },
  { section: "Display", key: "Borderless", label: "Borderless window", hint: "Alt-tab and other monitors just work." },
  { section: "Display", key: "WidescreenUI", label: "Widescreen menus and HUD", hint: "Nothing stretched sideways." },
  { section: "Display", key: "SmoothFrames", label: "Smooth motion", hint: "The world moves on every frame." },
  {
    section: "Display",
    key: "PauseInBackground",
    label: "Keep running in the background",
    hint: "The game does not pause behind other windows.",
    inverted: true,
  },
];

/** A fix mod T3SDK ships, by its DLL name in System\mods. */
export interface ModFix {
  name: string;
  label: string;
  hint: string;
}

export const modFixes: ModFix[] = [
  { name: "widescreen-fov", label: "Widescreen field of view", hint: "See more at the sides, not less at the top." },
  { name: "difficulty-fixes", label: "Difficulty fixes", hint: "Missions play at the difficulty you chose." },
  { name: "unstick", label: "Unstick key", hint: "Shift+Ctrl+Enter frees Garrett when he is stuck." },
  { name: "dotted-paths", label: "Dots in the install folder", hint: "The game runs from any folder name." },
  { name: "blackjack-first", label: "Blackjack first", hint: "Attack with empty hands draws the blackjack." },
];

export const isModFix = (name: string) => modFixes.some((f) => f.name === name);

/** Whether a T3SDK.ini value shows the fix as on. */
export const fixOn = (fix: SdkFix, value: string | undefined) => (value === "1") !== !!fix.inverted;

/** The T3SDK.ini value that turns the fix on or off. */
export const fixValue = (fix: SdkFix, on: boolean) => (on !== !!fix.inverted ? "1" : "0");
