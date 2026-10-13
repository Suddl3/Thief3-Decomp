// Game/APatrolPoint_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "AICore/AICoreClasses.h"

// FUNCTION: 0x10BC2EB0 ?Virtual91@APatrolPoint@@UAEHXZ
int APatrolPoint::Virtual91()
{
    int Key = 0x20027;
    int Flag;
    FUN_1098e330(0x8003bd, &Flag);
    if (Flag)
        Key = 0x20368;
    int Result = 0;
    FUN_1098e330(Key, &Result);
    return Result;
}
