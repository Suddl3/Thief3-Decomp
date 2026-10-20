// Game/Unsorted_10C379A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C37960.h"

void* FUN_10c37b20(Class_10C37960* Obj, int A, int B);

bool FUN_10c379a0(Class_10C37960* Obj, void* Item, Struct_10C05A80* Info);

void SetItemMode(Class_10C37960* Obj, void* Item, int Mode);

// FUNCTION: 0x10C37CB0 ?FUN_10c37cb0@@YA_NPAVClass_10C37960@@PAUStruct_10C05A80@@HHH_N@Z
bool FUN_10c37cb0(Class_10C37960* Obj, Struct_10C05A80* Info, int A, int B, int Mode, bool Flag)
{
    void* Item = FUN_10c37b20(Obj, A, B);
    Item = Obj->Virtual2(Item, Info, Flag, 16.0f, -1.0f);
    if (!Item)
        return false;
    if (Mode == 1 && Flag == true)
    {
        if (FUN_10c379a0(Obj, Item, Info) == Flag)
            return true;
    }
    SetItemMode(Obj, Item, Mode);
    return true;
}
