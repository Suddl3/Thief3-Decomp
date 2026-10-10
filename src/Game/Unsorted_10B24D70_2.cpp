// Game/Unsorted_10B24D70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B16930.h"
#include "Game/Class_10B24DB0.h"
#include "Game/Class_10B25200.h"

void* FUN_10b154c0();

// FUNCTION: 0x10B24D70 ?FUN_10b24d70@Class_10B25200@@QAEXXZ
void Class_10B25200::FUN_10b24d70()
{
    Unknown28 = 3;
    Unknown48 = 3;
    static_cast<Class_10B16930*>(FUN_10b154c0())->FUN_10b166a0();
}

// FUNCTION: 0x10B24DB0 ?FUN_10b24db0@Class_10B24DB0@@QAE_NXZ
bool Class_10B24DB0::FUN_10b24db0()
{
    if (Unknown28 == 3 || Unknown48 == 3)
        return true;
    return false;
}
