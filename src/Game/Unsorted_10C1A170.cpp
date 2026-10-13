// Game/Unsorted_10C1A170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C1A560.h"
#include "Game/Class_10E98CE0.h"
#include "Game/Class_10E98CE4.h"
#include "Game/Class_10E98CE8.h"

extern void* DAT_10e98ce0[];

extern void* DAT_10e98ce4[];

extern void* DAT_10e98ce8[];

// FUNCTION: 0x10C1A3D0 ??0Class_10E98CE0@@QAE@HH@Z
Class_10E98CE0::Class_10E98CE0(int p1, int p2)
{
    *(void***)this = DAT_10e98ce0;
    Unknown04 = (Class_10E98CE0_Member*)p1;
    Unknown08 = (Class_10E98CE0_Member*)p2;
}

// FUNCTION: 0x10C1A420 ?Init@Class_10E98CE4@@QAEPAV1@H@Z
Class_10E98CE4* Class_10E98CE4::Init(int p1)
{
    Unknown00 = DAT_10e98ce4;
    Unknown04 = p1;
    return this;
}

// FUNCTION: 0x10C1A540 ??0Class_10E98CE8@@QAE@HH@Z
Class_10E98CE8::Class_10E98CE8(int p1, int p2)
{
    *(void***)this = DAT_10e98ce8;
    Unknown04 = (Class_10BAC050*)p1;
    Unknown08 = p2;
}

// FUNCTION: 0x10C1A560 ?Reset@Class_10C1A560@@QAEPAV1@XZ
Class_10C1A560* Class_10C1A560::Reset()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    return this;
}
