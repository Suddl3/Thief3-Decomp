// Game/Unsorted_10B163C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B2C030.h"
#include "Game/Class_10B16930.h"

// FUNCTION: 0x10B163C0 ?FUN_10b163c0@Class_10B16930@@QAEXH@Z
void Class_10B16930::FUN_10b163c0(int A)
{
    cIntArray Found = FUN_109e6d80(0x69);
    if (Found.Count > 0 && Found.Data[0])
        ((Class_10B2C030*)Found.Data[0])->FUN_10b2c030(A);
}
