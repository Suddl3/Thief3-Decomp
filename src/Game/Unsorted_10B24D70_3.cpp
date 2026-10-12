// Game/Unsorted_10B24D70_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B16930.h"
#include "Game/Class_10B25200.h"

void* GetWindowManager();

// FUNCTION: 0x10B24D90 ?ClearJunkState@Class_10B25200@@QAEXXZ
void Class_10B25200::ClearJunkState()
{
    Unknown28 = 0;
    Unknown48 = 0;
    static_cast<Class_10B16930*>(GetWindowManager())->FUN_10b16780();
}
