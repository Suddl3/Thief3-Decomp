// Game/Class_10ACCFB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ACCFB0.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E70060.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10ACCFB0 ?Free@Class_10ACCFB0@@QAEXXZ
void Class_10ACCFB0::Free()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
