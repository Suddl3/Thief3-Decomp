// Game/Unsorted_10A36D30_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A370C0.h"
#include "Game/Class_10D9FEE0.h"

// FUNCTION: 0x10A36FF0 ?FUN_10a36ff0@@YA_NPAVClass_10A370C0@@H@Z
bool FUN_10a36ff0(Class_10A370C0* Obj, int A)
{
    if (!Obj->Unknown0B0)
        return false;
    if (Obj->Unknown0B0->FUN_10d9feb0())
        return false;
    Obj->Unknown0B0->FUN_10d9fee0(A, 1);
    return true;
}
