// Game/Unsorted_10A141D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A15800.h"
#include "Game/Class_10A15C30.h"
#include "Game/cGlobalDataManager.h"

extern Class_10A15800* DAT_10f39878;

// FUNCTION: 0x10A15800 ?FUN_10a15800@@YAXXZ
void FUN_10a15800()
{
    if (DAT_10f39878)
    {
        DAT_10f39878->Virtual1(1);
        DAT_10f39878 = 0;
    }
}
