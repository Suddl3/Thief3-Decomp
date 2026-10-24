// Minimal INI reading and in-place editing for T3SDK.ini and the mods' .ini
// files: values are updated where they stand, so the file's comments, order
// and line endings survive. A comment line starting with `@` is a hint for the
// launcher (`; @range 0.25..4 step 0.05`), not part of the description.

/// One `key=value` entry, the comment lines directly above it and their hints.
#[derive(Clone, Debug, Default, PartialEq)]
pub struct Entry {
    pub section: String,
    pub key: String,
    pub value: String,
    pub comment: String,
    /// The `@` comment lines above the entry, without the `@`.
    pub hints: Vec<String>,
}

fn section_of(line: &str) -> Option<&str> {
    let t = line.trim();
    t.strip_prefix('[').and_then(|r| r.strip_suffix(']')).map(str::trim)
}

fn key_value(line: &str) -> Option<(&str, &str)> {
    let t = line.trim();
    if t.is_empty() || t.starts_with(';') || t.starts_with('#') || t.starts_with('[') {
        return None;
    }
    let (k, v) = t.split_once('=')?;
    Some((k.trim(), v.trim()))
}

pub fn parse(text: &str) -> Vec<Entry> {
    let mut entries = Vec::new();
    let mut section = String::new();
    let mut comment: Vec<&str> = Vec::new();
    let mut hints: Vec<String> = Vec::new();
    for line in text.lines() {
        let t = line.trim();
        if let Some(s) = section_of(line) {
            section = s.to_string();
            comment.clear();
            hints.clear();
        } else if let Some(c) = t.strip_prefix(';').or_else(|| t.strip_prefix('#')) {
            match c.trim().strip_prefix('@') {
                Some(hint) => hints.push(hint.trim().to_string()),
                None => comment.push(c.trim()),
            }
        } else if let Some((k, v)) = key_value(line) {
            entries.push(Entry {
                section: section.clone(),
                key: k.into(),
                value: v.into(),
                comment: comment.join(" "),
                hints: std::mem::take(&mut hints),
            });
            comment.clear();
        } else if t.is_empty() {
            comment.clear();
            hints.clear();
        }
    }
    entries
}

/// The comment lines at the top of the file, before its first section or
/// entry, joined: what the file is for.
pub fn intro(text: &str) -> String {
    let mut lines = Vec::new();
    for line in text.lines() {
        let t = line.trim();
        match t.strip_prefix(';').or_else(|| t.strip_prefix('#')) {
            Some(c) if !c.trim().starts_with('@') => lines.push(c.trim()),
            Some(_) => {}
            None if t.is_empty() => {}
            None => break,
        }
    }
    lines.join(" ")
}

/// Sets `section.key = value` in `text`, replacing the value in place, or adding
/// the key at the end of its section (or a new section at the end of the file).
pub fn set(text: &str, section: &str, key: &str, value: &str) -> String {
    let newline = if text.contains("\r\n") { "\r\n" } else { "\n" };
    let mut lines: Vec<String> = text.lines().map(str::to_string).collect();
    let mut current = String::new();
    let mut last_in_section: Option<usize> = None;
    for (i, line) in lines.iter_mut().enumerate() {
        if let Some(s) = section_of(line) {
            current = s.to_string();
            if current.eq_ignore_ascii_case(section) {
                last_in_section = Some(i);
            }
            continue;
        }
        if !current.eq_ignore_ascii_case(section) {
            continue;
        }
        if let Some((k, _)) = key_value(line) {
            if k.eq_ignore_ascii_case(key) {
                let indent = &line[..line.len() - line.trim_start().len()];
                *line = format!("{indent}{k}={value}");
                return lines.join(newline) + newline;
            }
        }
        if !line.trim().is_empty() {
            last_in_section = Some(i);
        }
    }
    match last_in_section {
        Some(i) => lines.insert(i + 1, format!("{key}={value}")),
        None => {
            if lines.last().is_some_and(|l| !l.trim().is_empty()) {
                lines.push(String::new());
            }
            lines.push(format!("[{section}]"));
            lines.push(format!("{key}={value}"));
        }
    }
    lines.join(newline) + newline
}

#[cfg(test)]
mod tests {
    use super::*;

    const SAMPLE: &str = "; header\r\n[T3SDK]\r\n; 1 = console.\r\nConsole=0\r\nEngineLog=1\r\n\r\n[Fixes]\r\n; skip them\r\nSkipIntros=1\r\n";

    #[test]
    fn parses_comments_and_sections() {
        let e = parse(SAMPLE);
        assert_eq!(e.len(), 3);
        assert_eq!(
            e[0],
            Entry {
                section: "T3SDK".into(),
                key: "Console".into(),
                value: "0".into(),
                comment: "1 = console.".into(),
                hints: vec![],
            }
        );
        assert_eq!(e[1].comment, "");
        assert_eq!(e[2].section, "Fixes");
    }

    #[test]
    fn hints_are_not_description() {
        let text = "; Zone tweaks: fog.\n; Next start.\n[Zones]\n; Multiplies the fog.\n; @range 0.25..4 step 0.05\n; @label Fog distance\nFogDistance=1.0\n";
        let e = parse(text);
        assert_eq!(e[0].comment, "Multiplies the fog.");
        assert_eq!(e[0].hints, ["range 0.25..4 step 0.05", "label Fog distance"]);
        assert_eq!(intro(text), "Zone tweaks: fog. Next start.");
    }

    #[test]
    fn replaces_in_place_and_keeps_crlf() {
        let out = set(SAMPLE, "fixes", "skipintros", "0");
        assert_eq!(out, SAMPLE.replace("SkipIntros=1", "SkipIntros=0"));
    }

    #[test]
    fn adds_missing_key_and_section() {
        let out = set(SAMPLE, "T3SDK", "MenuInputTrace", "1");
        assert!(out.contains("EngineLog=1\r\nMenuInputTrace=1\r\n\r\n[Fixes]"));
        let out = set(SAMPLE, "Display", "Borderless", "1");
        assert!(out.ends_with("SkipIntros=1\r\n\r\n[Display]\r\nBorderless=1\r\n"));
        assert_eq!(set("", "A", "b", "c"), "[A]\nb=c\n");
    }
}
