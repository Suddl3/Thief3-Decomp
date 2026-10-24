// Display helpers: plain functions of their arguments, so they are easy to test.
import type { Setting } from "./api";

const dateFormat = new Intl.DateTimeFormat(undefined, { dateStyle: "medium" });
const dateTimeFormat = new Intl.DateTimeFormat(undefined, { dateStyle: "medium", timeStyle: "short" });

/** "just now", "5 min ago", "3 h ago", else the date. `seconds` is a Unix time. */
export function ago(seconds: number | null, now = Date.now()): string {
  if (!seconds) return "";
  const d = now / 1000 - seconds;
  if (d < 60) return "just now";
  if (d < 3600) return `${Math.floor(d / 60).toString()} min ago`;
  if (d < 86400) return `${Math.floor(d / 3600).toString()} h ago`;
  return dateFormat.format(seconds * 1000);
}

export function bytes(n: number | null): string {
  if (n === null) return "";
  if (n < 1024 * 1024) return `${(n / 1024).toFixed(0)} KB`;
  return `${(n / 1024 / 1024).toFixed(1)} MB`;
}

/** Time between two millisecond timestamps: "4.2 s", "2 min 5 s". */
export function elapsed(started: number | null, ended: number | null, now = Date.now()): string {
  if (!started) return "";
  const s = ((ended ?? now) - started) / 1000;
  return s < 60 ? `${s.toFixed(1)} s` : `${Math.floor(s / 60).toString()} min ${Math.round(s % 60).toString()} s`;
}

/** An INI key as a label: "SkipIntros" -> "Skip intros", "UILayoutTrace" -> "UI layout trace". */
export function settingLabel(key: string): string {
  return key
    .replace(/([a-z0-9])([A-Z])/g, "$1 $2")
    .replace(/([A-Z]+)([A-Z][a-z])/g, "$1 $2")
    .replace(/ ([A-Z][a-z])/g, (m) => m.toLowerCase());
}

/** T3SDK.ini comments read "1 = do this."; next to a switch, "Do this." says it. */
export function settingDescription(setting: Setting): string {
  return setting.description.replace(/^1 = /, "").replace(/^./, (c) => c.toUpperCase());
}

/**
 * On/off switches: a default (or value) of 0 or 1, and a comment that says what
 * 1 does. A number that merely defaults to 0 ("MaxFPS: 0 = no limit") is not one.
 */
export const isSwitch = (setting: Setting) =>
  ["0", "1"].includes(setting.default ?? setting.value) &&
  (!setting.description || setting.description.startsWith("1 = "));

/** Settings named ...Key hold a virtual-key code. */
export const isKeySetting = (setting: Setting) => /key$/i.test(setting.key);

const KEY_NAMES: Record<string, string> = {
  "0": "Off",
  ...Object.fromEntries(
    Array.from({ length: 12 }, (_, i) => [`0x${(0x70 + i).toString(16)}`, `F${(i + 1).toString()}`]),
  ),
};

/** The name of a virtual-key code as T3SDK.ini writes it ("0x79" -> "F10"), or "". */
export function keyName(code: string): string {
  return KEY_NAMES[code.trim().toLowerCase()] ?? "";
}

/** Windows virtual-key codes by name; a browser's KeyboardEvent.keyCode is the same number on Windows. */
const VK_NAMES: Record<number, string> = {
  8: "Backspace",
  9: "Tab",
  13: "Enter",
  16: "Shift",
  17: "Ctrl",
  18: "Alt",
  19: "Pause",
  20: "Caps Lock",
  27: "Esc",
  32: "Space",
  33: "Page Up",
  34: "Page Down",
  35: "End",
  36: "Home",
  37: "Left",
  38: "Up",
  39: "Right",
  40: "Down",
  45: "Insert",
  46: "Delete",
  106: "Num *",
  107: "Num +",
  109: "Num -",
  110: "Num .",
  111: "Num /",
  160: "Left Shift",
  161: "Right Shift",
  162: "Left Ctrl",
  163: "Right Ctrl",
  164: "Left Alt",
  165: "Right Alt",
  186: ";",
  187: "=",
  188: ",",
  189: "-",
  190: ".",
  191: "/",
  192: "`",
  219: "[",
  220: "\\",
  221: "]",
  222: "'",
};

/** The name of a virtual-key code (16 -> "Shift", 0x41 -> "A"). */
export function vkName(code: number): string {
  if (code >= 48 && code <= 57) return String.fromCharCode(code);
  if (code >= 65 && code <= 90) return String.fromCharCode(code);
  if (code >= 96 && code <= 105) return `Num ${(code - 96).toString()}`;
  if (code >= 112 && code <= 135) return `F${(code - 111).toString()}`;
  return VK_NAMES[code] ?? `Key ${code.toString()}`;
}

const CODE_VKS: Record<string, number> = {
  Backspace: 8,
  Tab: 9,
  Enter: 13,
  NumpadEnter: 13,
  ShiftLeft: 16,
  ShiftRight: 16,
  ControlLeft: 17,
  ControlRight: 17,
  AltLeft: 18,
  AltRight: 18,
  Pause: 19,
  CapsLock: 20,
  Escape: 27,
  Space: 32,
  PageUp: 33,
  PageDown: 34,
  End: 35,
  Home: 36,
  ArrowLeft: 37,
  ArrowUp: 38,
  ArrowRight: 39,
  ArrowDown: 40,
  Insert: 45,
  Delete: 46,
  NumpadMultiply: 106,
  NumpadAdd: 107,
  NumpadSubtract: 109,
  NumpadDecimal: 110,
  NumpadDivide: 111,
  Semicolon: 186,
  Equal: 187,
  Comma: 188,
  Minus: 189,
  Period: 190,
  Slash: 191,
  Backquote: 192,
  BracketLeft: 219,
  Backslash: 220,
  BracketRight: 221,
  Quote: 222,
};

/**
 * The Windows virtual-key code of a pressed key, from KeyboardEvent.code (the
 * physical key), or null. Left and right Shift, Ctrl and Alt give the plain code
 * the mods check, which either key holds down.
 */
export function vkFromCode(code: string): number | null {
  const m = /^(Key|Digit|Numpad|F)([A-Z0-9]|[0-9]{1,2})$/.exec(code);
  if (m) {
    const [, kind = "", rest = ""] = m;
    if (kind === "Key") return rest.charCodeAt(0);
    if (kind === "Digit") return 48 + Number(rest);
    if (kind === "Numpad") return 96 + Number(rest);
    const n = Number(rest);
    if (n >= 1 && n <= 24) return 111 + n;
  }
  return CODE_VKS[code] ?? null;
}

/** The codes of a mod's key setting ("16,17,0x0D"), valid ones only. */
export function keyCodes(value: string): number[] {
  return value
    .split(",")
    .map((s) => Number(s.trim()))
    .filter((n) => Number.isInteger(n) && n >= 1 && n <= 255);
}

const MODIFIERS = [16, 17, 18, 160, 161, 162, 163, 164, 165];

/** Codes in the order people say them: modifiers first. */
export function sortKeys(codes: number[]): number[] {
  const rank = (c: number) => (MODIFIERS.includes(c) ? MODIFIERS.indexOf(c) : 100);
  return [...new Set(codes)].sort((a, b) => rank(a) - rank(b));
}

/** A key setting as people read it ("16,17,13" -> "Shift+Ctrl+Enter"), or "Off". */
export function comboText(value: string): string {
  const codes = sortKeys(keyCodes(value));
  return codes.length ? codes.map(vkName).join("+") : "Off";
}

/**
 * A mod setting's comment without what its control already says: "1 = ",
 * "1 on, 0 off." and "Default 1." (the control shows the value and offers the default).
 */
export function modDescription(text: string): string {
  return text
    .replace(/^1 = /, "")
    .replace(/:?\s*1 (= )?on, 0 (= )?off\.?/gi, ".")
    .replace(/\s*Default [^.]*\./g, "")
    .replace(/\.\./g, ".")
    .replace(/\s+\./g, ".")
    .trim()
    .replace(/^./, (c) => c.toUpperCase());
}

/** A Unix time as date and time in the user's locale, or "". */
export function dateTime(seconds: number | null): string {
  return seconds ? dateTimeFormat.format(seconds * 1000) : "";
}

/** How much of a download is done, 0-100, or null while its size is unknown. */
export function percent(done: number, total: number | null): number | null {
  if (!total || total <= 0) return null;
  return Math.max(0, Math.min(100, Math.floor((done / total) * 100)));
}

/** The first https link in a text (release notes), without trailing punctuation. */
export function firstLink(text: string | null): string | null {
  const match = text ? /https:\/\/[^\s<>()"'\]]+/.exec(text) : null;
  return match ? match[0].replace(/[.,;:!?]+$/, "") : null;
}
