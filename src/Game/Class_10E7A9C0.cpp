// Game/Class_10E7A9C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7A9C0.h"
#include "Game/Class_10B152C0.h"
#include "Game/Class_10B24D00.h"
#include "Game/Class_10B24D20.h"
#include "Game/Class_10B24D30.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Class_10ABB6B0.h"
#include "T3Player/T3PlayerClasses.h"

extern void* DAT_10e7a9c0[];

class Class_10E7A9C0;

// FUNCTION: 0x10B248D0 ?Register@Class_10E7A9C0@@UAEXPAVClass_10B152C0@@@Z
void Class_10E7A9C0::Register(Class_10B152C0* p1)
{
    p1->AddToLists(0xef, this);
}

// FUNCTION: 0x10B248F0 ?Construct@Class_10E7A9C0@@QAEPAV1@XZ
Class_10E7A9C0* Class_10E7A9C0::Construct()
{
    *(void**)this = DAT_10e7a9c0;
    Unknown04 = 0;
    return this;
}
