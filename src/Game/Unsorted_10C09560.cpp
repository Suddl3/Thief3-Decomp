// Game/Unsorted_10C09560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C099A0.h"
#include "Game/Struct_10C099A0.h"
#include "Game/Struct_10C09A10.h"

Struct_10C09A10* FUN_10b8b660(int A);

// FUNCTION: 0x10C099D0 ?FUN_10c099d0@@YG_NH@Z
bool __stdcall FUN_10c099d0(int A)
{
    if (!A)
        return false;
    Struct_10C09A10* Obj = FUN_10b8b660(A);
    if (!Obj)
        return false;
    return Obj->Unknown0C == 2 || Obj->Unknown0C == 3;
}
