// Game/Unsorted_10A63340_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A63340.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10A63370 ?MoveItems@Class_10A63340@@QAEXHHH@Z
void Class_10A63340::MoveItems(int From, int To, int Count)
{
    if (From != To && Count)
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(void*));
}
