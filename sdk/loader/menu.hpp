#pragma once

// Two independent, small main-menu patches: a byte patch that appends the
// SDK's tag to the version label's format string, and optional MinHook-based
// tracing of menu/popup input events (a diagnostic for UI reverse-engineering,
// not something mods can hook into).
namespace t3sdk::menu {

// Changes the menu version label's format string at one verified callsite in
// the supported T3Main.exe build. The engine still owns formatting and text.
// Returns false (and logs why) when the bytes there are not the expected ones
// or cannot be patched.
bool InstallModdedVersionFormat();

// Temporary focused event tracing for the known menu/popup entry points.
// Installs both hooks or neither; returns false (and logs why) on failure.
bool InstallInputDiagnostics();

}  // namespace t3sdk::menu
