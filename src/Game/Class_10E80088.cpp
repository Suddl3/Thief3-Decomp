// Game/Class_10E80088.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B255F0.h"
#include "Game/Class_10E80088.h"
#include "Game/Class_10E80250.h"

Class_10B255F0* GetSelection();

extern void* DAT_10e80088[];

// FUNCTION: 0x10B2BA60 ?FUN_10b2ba60@Class_10E80088@@QAEXH@Z
void Class_10E80088::FUN_10b2ba60(int p1)
{
    GetSelection()->FUN_10b25dc0(p1);
}

// FUNCTION: 0x10B407B0 ?FUN_10b407b0@Class_10E80088@@QAEPAV1@XZ
Class_10E80088* Class_10E80088::FUN_10b407b0()
{
    this->Class_10E7B360::Class_10E7B360();
    *(void***)this = DAT_10e80088;
    return this;
}
