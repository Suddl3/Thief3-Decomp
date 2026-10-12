// Game/Unsorted_10ABC050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ABC050.h"
#include "Game/Class_10AC2E40.h"
#include "Game/Class_10F3A3D8.h"

extern Class_10F3A3D8* DAT_10f3a3d8;

extern float DAT_10e499a0;

extern float DAT_10f00e94;

// FUNCTION: 0x10ABC050 ?Reset@Class_10ABC050@@QAEPAV1@XZ
Class_10ABC050* Class_10ABC050::Reset()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    return this;
}

// FUNCTION: 0x10ABC070 ?FUN_10abc070@@YAMXZ
float FUN_10abc070()
{
    return DAT_10f3a3d8->Unknown10->GetFraction() * DAT_10e499a0 + DAT_10f00e94;
}
