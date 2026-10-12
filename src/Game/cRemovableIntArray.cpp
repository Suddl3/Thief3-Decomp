// Game/cRemovableIntArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cRemovableIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10A63370 ?MoveItems@cRemovableIntArray@@QAEXHHH@Z
void cRemovableIntArray::MoveItems(int From, int To, int Count)
{
    if (From != To && Count)
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(void*));
}
