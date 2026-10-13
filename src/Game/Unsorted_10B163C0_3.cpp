// Game/Unsorted_10B163C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B2C030.h"
#include "Game/Class_10B16930.h"

// FUNCTION: 0x10B16450 ?FUN_10b16450@Class_10B16930@@QAEXH@Z
void Class_10B16930::FUN_10b16450(int A)
{
    cIntArray Found = FUN_109e6d80(0x6a);
    if (Found.Count > 0 && Found.Data[0] != 0)
        ((Class_10B2C030*)Found.Data[0])->FUN_10b2c030(A);
}
