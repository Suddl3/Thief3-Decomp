// Game/Unsorted_10B926A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E89A6C.h"
#include "Game/Class_10E89A7C.h"

extern void* DAT_10e89a6c[];

extern void* DAT_10e89a7c[];

// FUNCTION: 0x10B92B30 ?Construct@Class_10E89A6C@@QAEPAV1@H@Z
Class_10E89A6C* Class_10E89A6C::Construct(int p1)
{
    *(void**)this = DAT_10e89a6c;
    Unknown04 = p1;
    return this;
}

// FUNCTION: 0x10B92B90 ?Construct@Class_10E89A7C@@QAEPAV1@H@Z
Class_10E89A7C* Class_10E89A7C::Construct(int p1)
{
    *(void**)this = DAT_10e89a7c;
    Unknown04 = p1;
    return this;
}
