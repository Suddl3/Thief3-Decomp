// Game/Unsorted_109514F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109514F0.h"

// FUNCTION: 0x109514F0 ?FUN_109514f0@Class_109514F0@@QAEPAXPAXHH@Z
void* Class_109514F0::FUN_109514f0(void* A, int B, int C)
{
    if (Unknown28 && (B == 4 || B == 2) && (C == 4 || Unknown28 != 2))
    {
        Unknown3C = A;
        return &Unknown20;
    }
    Unknown3C = 0;
    return A;
}
