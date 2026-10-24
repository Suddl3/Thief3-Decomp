// A mod's settings: its .ini in System\mods, as controls on the Mods page.
//
// Each key keeps the comment above it as its description, and `@` comment
// lines tell the launcher how to show it (docs/modding/settings.md):
//
//   ; Multiplies where the distance fog starts and ends.
//   ; @range 0.25..4 step 0.05
//   FogDistance=1.0
//
// A key without hints is a switch when its value is 0 or 1, a number field
// when it is a number, and a text field otherwise. For a fix-pack mod the
// layout, descriptions and hints come from the SDK's own copy (an update keeps
// the player's file as it was), and the values from the game's copy.
use std::path::{Path, PathBuf};

use serde::{Deserialize, Serialize};
use tauri::State;

use crate::config::Config;
use crate::mods::layout::{find_ci, Layout};
use crate::{ini, AppState};

#[derive(Clone, Debug, PartialEq, Serialize)]
#[serde(rename_all = "camelCase", tag = "kind")]
pub enum Control {
    Toggle,
    Number {
        min: Option<f64>,
        max: Option<f64>,
        step: Option<f64>,
    },
    Choice {
        options: Vec<String>,
    },
    /// A key combination, as the mod reads it ("Shift+Ctrl+End").
    Keys,
    Text,
}

#[derive(Debug, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ModSetting {
    pub key: String,
    /// The `@label`, else the key spaced out ("FogDistance" -> "Fog distance").
    pub label: String,
    pub value: String,
    /// The value in the mod's own copy, when there is one.
    pub default: Option<String>,
    pub description: String,
    pub control: Control,
}

#[derive(Debug, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ModSettingsSection {
    pub name: String,
    pub settings: Vec<ModSetting>,
}

#[derive(Debug, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct ModSettings {
    pub file: PathBuf,
    /// The comments at the top of the file.
    pub intro: String,
    pub sections: Vec<ModSettingsSection>,
}

#[derive(Debug, Deserialize)]
pub struct ModSettingChange {
    pub section: String,
    pub key: String,
    pub value: String,
}

/// "FogDistance" -> "Fog distance", "HUDScale" -> "HUD scale".
fn spaced(key: &str) -> String {
    let chars: Vec<char> = key.chars().collect();
    let mut out = String::new();

    for (i, &c) in chars.iter().enumerate() {
        let next_lower = chars.get(i + 1).is_some_and(|n| n.is_lowercase());
        let prev_lower = i > 0 && chars[i - 1].is_lowercase();

        // A capital starts a word after a lower-case letter, or ends an acronym before one.
        if i > 0 && c.is_uppercase() && (prev_lower || (next_lower && chars[i - 1].is_uppercase())) {
            out.push(' ');
        }

        let acronym =
            c.is_uppercase() && (chars.get(i + 1).is_some_and(|n| n.is_uppercase()) || (i > 0 && !next_lower));
        out.push(if i > 0 && !acronym { c.to_ascii_lowercase() } else { c });
    }

    out
}

/// The number after `word` in a hint ("step 0.05").
fn after(words: &[&str], word: &str) -> Option<f64> {
    let at = words.iter().position(|w| w.eq_ignore_ascii_case(word))?;
    words.get(at + 1)?.parse().ok()
}

/// The control and label an entry's hints and value ask for.
fn control_of(entry: &ini::Entry) -> (Control, Option<String>) {
    let mut control = None;
    let mut label = None;

    for hint in &entry.hints {
        let (word, rest) = hint.split_once(char::is_whitespace).unwrap_or((hint.as_str(), ""));
        let rest = rest.trim();

        match word.to_ascii_lowercase().as_str() {
            "label" if !rest.is_empty() => label = Some(rest.to_string()),
            "toggle" => control = Some(Control::Toggle),
            "keys" => control = Some(Control::Keys),
            "text" => control = Some(Control::Text),
            "choice" => {
                let options = rest.split('|').map(str::trim).filter(|o| !o.is_empty()).map(String::from).collect();
                control = Some(Control::Choice { options });
            }
            "range" | "number" => {
                let words: Vec<&str> = rest.split_whitespace().collect();
                let (min, max) = match words.first().and_then(|r| r.split_once("..")) {
                    Some((a, b)) => (a.trim().parse().ok(), b.trim().parse().ok()),
                    None => (None, None),
                };
                control = Some(Control::Number { min, max, step: after(&words, "step") });
            }
            _ => {}
        }
    }

    let control = control.unwrap_or_else(|| {
        let v = entry.value.trim();

        if v == "0" || v == "1" {
            Control::Toggle
        } else if v.parse::<f64>().is_ok() {
            Control::Number { min: None, max: None, step: None }
        } else {
            Control::Text
        }
    });

    (control, label)
}

/// A mod's .ini in the game: `<name>.ini` next to its DLL (enabled or in
/// disabled/), or the .ini in its package folder.
pub fn locate(layout: &Layout, name: &str) -> Option<PathBuf> {
    let file = format!("{name}.ini");

    if let Some(p) = find_ci(&layout.dir, &file).or_else(|| find_ci(&layout.disabled(), &file)) {
        return Some(p).filter(|p| p.is_file());
    }

    // A package: <id>/<id>.ini, else its only .ini.
    let folder = find_ci(&layout.dir, name).filter(|p| p.is_dir())?;
    if let Some(p) = find_ci(&folder, &file).filter(|p| p.is_file()) {
        return Some(p);
    }

    let inis: Vec<PathBuf> = std::fs::read_dir(&folder)
        .ok()?
        .flatten()
        .map(|e| e.path())
        .filter(|p| p.extension().is_some_and(|x| x.eq_ignore_ascii_case("ini")) && p.is_file())
        .collect();
    if inis.len() == 1 {
        inis.into_iter().next()
    } else {
        None
    }
}

/// The SDK's own copy of a fix-pack mod's .ini (what an install puts there).
fn template(cfg: &Config, name: &str) -> Option<PathBuf> {
    let mods = cfg.sdk_root.as_ref()?.join("build").join("sdk").join("bin").join("mods");
    find_ci(&mods, &format!("{name}.ini")).filter(|p| p.is_file())
}

/// The settings of `actual` (the game's file) laid out by `template` (the
/// mod's own copy) when there is one: its order, descriptions and hints, then
/// the keys only the game's file has.
pub fn settings(file: PathBuf, actual: &str, template: Option<&str>) -> ModSettings {
    let values = ini::parse(actual);
    let layout = template.map(ini::parse).unwrap_or_else(|| values.clone());
    let same = |a: &ini::Entry, b: &ini::Entry| {
        a.section.eq_ignore_ascii_case(&b.section) && a.key.eq_ignore_ascii_case(&b.key)
    };

    let mut sections: Vec<ModSettingsSection> = Vec::new();
    let mut add = |entry: &ini::Entry, value: String, default: Option<String>| {
        let (control, label) = control_of(entry);
        let setting = ModSetting {
            key: entry.key.clone(),
            label: label.unwrap_or_else(|| spaced(&entry.key)),
            value,
            default,
            description: entry.comment.clone(),
            control,
        };

        match sections.iter_mut().find(|s| s.name.eq_ignore_ascii_case(&entry.section)) {
            Some(s) => s.settings.push(setting),
            None => sections.push(ModSettingsSection { name: entry.section.clone(), settings: vec![setting] }),
        }
    };

    for d in &layout {
        let value = values.iter().find(|v| same(v, d)).map_or_else(|| d.value.clone(), |v| v.value.clone());
        add(d, value, template.map(|_| d.value.clone()));
    }

    // Keys the layout lacks: nothing in the player's file is hidden.
    if template.is_some() {
        for v in values.iter().filter(|v| !layout.iter().any(|d| same(v, d))) {
            add(v, v.value.clone(), None);
        }
    }

    ModSettings { file, intro: ini::intro(template.unwrap_or(actual)), sections }
}

fn check_name(name: &str) -> Result<&str, String> {
    if name.is_empty() || name.contains(['/', '\\', ':', '"', '*', '?', '<', '>', '|']) || name.starts_with('.') {
        return Err(format!("invalid mod name {name:?}"));
    }

    Ok(name)
}

fn config(state: &State<'_, AppState>) -> Config {
    state.config.lock().unwrap().clone()
}

/// The settings of a mod, or None when it has no .ini.
#[tauri::command]
pub async fn read_mod_settings(state: State<'_, AppState>, name: String) -> Result<Option<ModSettings>, String> {
    let cfg = config(&state);
    let name = check_name(&name)?;
    let Some(file) = locate(&Layout::new(&cfg.game()?), name) else { return Ok(None) };
    let actual = std::fs::read_to_string(&file).map_err(|e| format!("cannot read {}: {e}", file.display()))?;
    let template = template(&cfg, name).and_then(|t| std::fs::read_to_string(t).ok());

    Ok(Some(settings(file, &actual, template.as_deref())))
}

#[tauri::command]
pub async fn write_mod_settings(
    state: State<'_, AppState>,
    name: String,
    changes: Vec<ModSettingChange>,
) -> Result<(), String> {
    let cfg = config(&state);
    let name = check_name(&name)?;
    let file = locate(&Layout::new(&cfg.game()?), name).ok_or_else(|| format!("{name} has no settings file"))?;
    write(&file, &changes)
}

/// Applies `changes` to the .ini at `file`, keeping everything else as it is.
pub fn write(file: &Path, changes: &[ModSettingChange]) -> Result<(), String> {
    let mut text = std::fs::read_to_string(file).map_err(|e| format!("cannot read {}: {e}", file.display()))?;

    for c in changes {
        let bad = |s: &str| s.is_empty() || s.contains(['\r', '\n', '[', ']', '=', ';']);

        // A section, key or value that would break the file's lines.
        if bad(&c.section) || bad(&c.key) || c.value.contains(['\r', '\n']) {
            return Err(format!("invalid setting {}.{}", c.section, c.key));
        }

        text = ini::set(&text, &c.section, &c.key, &c.value);
    }

    std::fs::write(file, text).map_err(|e| format!("cannot write {}: {e}", file.display()))
}

#[cfg(test)]
mod tests {
    use super::*;

    const TEMPLATE: &str = "; Zone tweaks (T3SDK): fog and light.\n[Zones]\n; Multiplies the fog distance.\n; @range 0.25..4 step 0.05\nFogDistance=1.0\n; @label Ambient light\nAmbientLight=1.0\n[Keys]\n; @keys\nHold=Ctrl\n; @choice Off|Low|High\nQuality=Low\nSteady=1\nName=abc\n";

    #[test]
    fn labels_are_spaced_keys() {
        assert_eq!(spaced("FogDistance"), "Fog distance");
        assert_eq!(spaced("HUDScale"), "HUD scale");
        assert_eq!(spaced("HideLockpickHud"), "Hide lockpick hud");
        assert_eq!(spaced("Keys"), "Keys");
    }

    #[test]
    fn hints_and_values_choose_the_controls() {
        let s = settings(PathBuf::from("zone.ini"), TEMPLATE, None);
        assert_eq!(s.intro, "Zone tweaks (T3SDK): fog and light.");
        let zones = &s.sections[0].settings;
        assert_eq!(zones[0].control, Control::Number { min: Some(0.25), max: Some(4.0), step: Some(0.05) });
        assert_eq!(zones[0].description, "Multiplies the fog distance.");
        assert_eq!(zones[1].label, "Ambient light");
        assert_eq!(zones[1].control, Control::Number { min: None, max: None, step: None });
        let keys = &s.sections[1].settings;
        assert_eq!(keys[0].control, Control::Keys);
        assert_eq!(keys[1].control, Control::Choice { options: vec!["Off".into(), "Low".into(), "High".into()] });
        assert_eq!(keys[2].control, Control::Toggle);
        assert_eq!(keys[3].control, Control::Text);
    }

    #[test]
    fn the_template_lays_out_the_players_values() {
        // An old copy: no hints, a changed value, a key the template lacks.
        let actual = "[Zones]\nFogDistance=2.5\nExtra=7\n";
        let s = settings(PathBuf::from("zone.ini"), actual, Some(TEMPLATE));
        let zones = &s.sections[0].settings;
        assert_eq!(zones[0].value, "2.5");
        assert_eq!(zones[0].default.as_deref(), Some("1.0"));
        assert!(matches!(zones[0].control, Control::Number { min: Some(_), .. }));
        assert_eq!(zones[1].value, "1.0");
        assert!(s.sections[0].settings.iter().any(|z| z.key == "Extra" && z.default.is_none()));
    }

    #[test]
    fn writes_in_place_and_refuses_broken_lines() {
        let dir = tempfile::tempdir().unwrap();
        let file = dir.path().join("zone.ini");
        std::fs::write(&file, TEMPLATE).unwrap();
        let change =
            |key: &str, value: &str| ModSettingChange { section: "Zones".into(), key: key.into(), value: value.into() };
        write(&file, &[change("FogDistance", "2")]).unwrap();
        assert_eq!(std::fs::read_to_string(&file).unwrap(), TEMPLATE.replace("FogDistance=1.0", "FogDistance=2"));
        assert!(write(&file, &[change("Fog\nX", "1")]).is_err());
        assert!(write(&file, &[change("FogDistance", "1\n[X]")]).is_err());
    }

    #[test]
    fn finds_loose_disabled_and_package_files() {
        let dir = tempfile::tempdir().unwrap();
        let layout = Layout::new(dir.path());
        std::fs::create_dir_all(layout.disabled()).unwrap();
        std::fs::create_dir_all(layout.dir.join("pack")).unwrap();
        std::fs::write(layout.dir.join("Loose.ini"), "").unwrap();
        std::fs::write(layout.disabled().join("off.ini"), "").unwrap();
        std::fs::write(layout.dir.join("pack").join("settings.ini"), "").unwrap();
        assert_eq!(locate(&layout, "loose").unwrap().file_name().unwrap(), "Loose.ini");
        assert!(locate(&layout, "off").unwrap().starts_with(layout.disabled()));
        assert_eq!(locate(&layout, "pack").unwrap().file_name().unwrap(), "settings.ini");
        assert!(locate(&layout, "none").is_none());
    }
}
