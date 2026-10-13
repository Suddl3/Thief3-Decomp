// Game/Unsorted_10BB8E00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDC30.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10BBA080.h"

float appFrand();

class Class_1098E330;

// FUNCTION: 0x10BB8E00 ?RollChance@Class_10BBA080@@QAE_NXZ
bool Class_10BBA080::RollChance()
{
    if (FUN_10bb8c60() <= 1)
    {
        Class_10DBD510* Obj = Unknown08;
        return appFrand() < Obj->FUN_10dbd510()->FUN_10bbdbc0(0x10078e);
    }
    else
    {
        Class_10DBD510* Obj = Unknown08;
        return appFrand() < Obj->FUN_10dbd510()->FUN_10bbdbc0(0x10078f);
    }
}
