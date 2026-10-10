// Game/Unsorted_10BF1550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BEFA30.h"
#include "Game/Class_10BF0A60.h"
#include "Game/Struct_10BEFA30.h"

// FUNCTION: 0x10BF15D0 ?FUN_10bf15d0@Class_10BF0A60@@QAEHABVClass_10BEFA30@@@Z
int Class_10BF0A60::FUN_10bf15d0(const Class_10BEFA30& Item)
{
    int Index = Unknown00;
    FUN_10befb10(Index + 1);
    Unknown08[Index] = Item;
    return Index;
}
