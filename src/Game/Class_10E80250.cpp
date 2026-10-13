// Game/Class_10E80250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B255F0.h"
#include "Game/Class_10E80250.h"
#include "Game/Class_10E80088.h"

Class_10B255F0* GetSelection();

extern void* DAT_10e80250[];

// FUNCTION: 0x10B2BA10 ?FUN_10b2ba10@Class_10E80250@@QAEXH@Z
void Class_10E80250::FUN_10b2ba10(int p1)
{
    GetSelection()->FUN_10b25700(p1);
}

// FUNCTION: 0x10B407D0 ?FUN_10b407d0@Class_10E80250@@QAEPAV1@XZ
Class_10E80250* Class_10E80250::FUN_10b407d0()
{
    this->Class_10E7B360::Class_10E7B360();
    *(void***)this = DAT_10e80250;
    return this;
}
