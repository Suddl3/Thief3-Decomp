// Game/Unsorted_10C1A170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C1A560.h"
#include "Game/Class_10E98CE0.h"
#include "Game/Class_10E98CE4.h"
#include "Game/Class_10E98CE8.h"

extern void* DAT_10e98ce4[];

// FUNCTION: 0x10C1A420 ?Init@Class_10E98CE4@@QAEPAV1@H@Z
Class_10E98CE4* Class_10E98CE4::Init(int p1)
{
    Unknown00 = DAT_10e98ce4;
    Unknown04 = p1;
    return this;
}

// FUNCTION: 0x10C1A560 ?Reset@Class_10C1A560@@QAEPAV1@XZ
Class_10C1A560* Class_10C1A560::Reset()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    return this;
}
