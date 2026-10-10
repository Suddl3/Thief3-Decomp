// Game/Unsorted_10C176E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAE080.h"
#include "Game/Class_10E8D7A8.h"

// FUNCTION: 0x10C176E0 ?FUN_10c176e0@Class_10BAE080@@QAEHABVClass_10E8D7A8@@@Z
int Class_10BAE080::FUN_10c176e0(const Class_10E8D7A8& Item)
{
    int Index = Unknown00;
    FUN_10bad9d0(Index + 1);
    Unknown08[Index] = Item;
    return Index;
}
