#pragma once

// Interface to files.cpp: mod folders that override the game's loose files.

#include <windows.h>

#include <filesystem>

namespace t3sdk::files {

// Patches T3Main.exe's file imports. `gameRoot` is the game folder (the parent
// of System/); only paths inside it are redirected.
void Install(const std::filesystem::path& gameRoot);

// Adds a folder that mirrors the game folder: a file the game opens for
// reading, or asks about, at <game>/<path> is taken from <dir>/<path> when that
// exists. The folder added last wins. -1 if `dir` is not a folder.
int AddRoot(const std::filesystem::path& dir, HMODULE owner);

// Drops the folders of a mod that is being unloaded.
void DropOwner(HMODULE owner);

}  // namespace t3sdk::files
