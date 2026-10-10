// Game/Unsorted_10A38F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1090FD40.h"

// FUNCTION: 0x10A391A0 ?FUN_10a391a0@Class_1090FD40@@QAEXHABVClass_109081E0@@@Z
void Class_1090FD40::FUN_10a391a0(int Index, const Class_109081E0& Value)
{
    int Count = Unknown00;
    if (Index == Count)
    {
        FUN_1090f2c0(Count + 1);
        Unknown08[Count] = Value;
    }
    else
    {
        FUN_1090f2c0(Count + 1);
        FUN_10a37f80(Index, Index + 1, Unknown00 - Index - 1);
        Unknown08[Index] = Value;
    }
}
