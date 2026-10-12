// Game/Class_10E4B040_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4B040.h"

void FUN_10ad1dc0(void* Memory, int Size);

// FUNCTION: 0x10961620 ?FUN_10961620@Class_10E4B040@@UAEPAV1@I@Z
Class_10E4B040* Class_10E4B040::FUN_10961620(unsigned int Flags)
{
    FUN_109615b0();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x30);
    return this;
}
