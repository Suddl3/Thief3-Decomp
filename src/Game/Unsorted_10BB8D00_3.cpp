// Game/Unsorted_10BB8D00_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBA080.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BBDC30.h"
#include "Game/Class_10DBD510.h"

float appFrand();

// FUNCTION: 0x10BB8E70 ?FUN_10bb8e70@Class_10BBA080@@QAEMXZ
float Class_10BBA080::FUN_10bb8e70()
{
    float Min;
    float Max;
    if (FUN_10bb8c60() <= 1)
    {
        Min = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x100786);
        Max = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x100787);
    }
    else
    {
        Min = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x100789);
        Max = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x10078a);
    }
    return Min + (Max - Min) * appFrand();
}
