#pragma once

// Interface to codehook.cpp: callbacks at any instruction of T3Main.exe.

#include <t3sdk/t3sdk.h>

#include <windows.h>

namespace t3sdk::codehook {

// Runs `callback` each time the game reaches `address`, before the instruction
// there, with the registers. 0, or the MinHook status (MH_ERROR_* > 0), or -1
// for a NULL argument or no memory.
int Add(void* address, T3CodeCallback callback, void* user, HMODULE owner);

// Disables the hooks of a mod that is being unloaded.
void DropOwner(HMODULE owner);

}  // namespace t3sdk::codehook
