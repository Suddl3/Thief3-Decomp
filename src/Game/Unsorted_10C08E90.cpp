// Game/Unsorted_10C08E90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C08E90.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C08E90 ?Empty@Class_10C08E90@@QAEXXZ
void Class_10C08E90::Empty()
{
    FUN_10c089b0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
