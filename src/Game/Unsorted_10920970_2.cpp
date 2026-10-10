// Game/Unsorted_10920970_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10920A90.h"
#include "Game/Class_10A0C5F0.h"
#include "Game/Class_10E4AA80.h"
#include "Game/Struct_109236B0.h"

// FUNCTION: 0x10920A90 ?FUN_10920a90@Class_10920A90@@QAEXPAVClass_10E4AA80@@@Z
void Class_10920A90::FUN_10920a90(Class_10E4AA80* Item)
{
    if (Item && Unknown3C.Unknown00)
    {
        Item->FUN_1094ca70(1);
        int Index = Unknown3C.FindIndex(Item);
        if (Index != -1)
            Unknown3C.FUN_10a0c5f0(Index);
    }
}
