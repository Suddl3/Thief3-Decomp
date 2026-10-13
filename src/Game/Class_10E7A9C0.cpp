// Game/Class_10E7A9C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7A9C0.h"

extern void* DAT_10e7a9c0[];

// FUNCTION: 0x10B248F0 ?Construct@Class_10E7A9C0@@QAEPAV1@XZ
Class_10E7A9C0* Class_10E7A9C0::Construct()
{
    *(void**)this = DAT_10e7a9c0;
    Unknown04 = 0;
    return this;
}
