// Game/Unsorted_10C378D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C37960.h"

void SetItemMode(Class_10C37960* Obj, void* Item, int Mode);

// FUNCTION: 0x10C37920 ?FUN_10c37920@@YA_NPAVClass_10C37960@@HHHHH@Z
bool FUN_10c37920(Class_10C37960* Obj, int A, int Mode, int B, int C, int D)
{
    void* Item = Obj->Virtual5(A, C, B, D);
    if (!Item)
        return false;
    SetItemMode(Obj, Item, Mode);
    return true;
}
