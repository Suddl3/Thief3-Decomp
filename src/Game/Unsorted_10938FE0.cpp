// Game/Unsorted_10938FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955C30.h"
#include "Game/Class_109528B0.h"

// FUNCTION: 0x10939050 ?FUN_10939050@Class_109528B0@@QAEXXZ
void Class_109528B0::FUN_10939050()
{
    for (int i = 0; i < 9; i++)
    {
        Unknown90[i].FUN_10955c30();
        if (Virtual7(i))
            Virtual9(i);
        Unknown30 &= ~(1 << i);
    }
    Unknown30 = 0;
}
