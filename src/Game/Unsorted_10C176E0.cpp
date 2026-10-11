// Game/Unsorted_10C176E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAE080.h"
#include "Game/VisualSubsystem.h"

// FUNCTION: 0x10C176E0 ?FUN_10c176e0@Class_10BAE080@@QAEHABVVisualSubsystem@@@Z
int Class_10BAE080::FUN_10c176e0(const VisualSubsystem& Item)
{
    int Index = Unknown00;
    FUN_10bad9d0(Index + 1);
    Unknown08[Index] = Item;
    return Index;
}
