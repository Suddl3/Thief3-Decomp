// Game/Unsorted_10952590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109523D0.h"

// FUNCTION: 0x10952590 ?FUN_10952590@Class_109523D0@@QAEXXZ
void Class_109523D0::FUN_10952590()
{
    int Key;
    int Result = FUN_10952410(&Key);
    Unknown28 = 0;
    if (FUN_109523d0(6) || FUN_109523d0(0x84))
    {
        Unknown28 = 3;
        return;
    }
    if ((FUN_109523d0(0x42) || FUN_109523d0(0xc0)) && Result == 2)
    {
        Unknown28 = 0;
        return;
    }
    if (!FUN_109523d0(2) && !FUN_109523d0(0x80))
    {
        if (!FUN_109523d0(4))
            return;
        Unknown28 = 1;
        return;
    }
    Unknown28 = 2;
}
