#pragma once

// Interface to config.cpp: mods' answers to the game's INI lookups (Ion
// Storm's Config layer; docs/engine.md, "Configuration").

#include <t3sdk/t3sdk.h>

#include <windows.h>

namespace t3sdk::config {

// Hooks Config::Find, which every Config getter (bool, int, float, string)
// goes through. False if the hook could not be installed.
bool Install();

// Answers `section`/`key` with `value` (NULL removes the override). `file` is
// the INI the game names in the lookup, or NULL for any. The last value set
// for a key wins.
int SetValue(const char* file, const char* section, const char* key, const char* value, HMODULE owner);
int AddCallback(T3ConfigCallback callback, void* user, HMODULE owner);

// Drops the overrides and callbacks of a mod that is being unloaded.
void DropOwner(HMODULE owner);

}  // namespace t3sdk::config
