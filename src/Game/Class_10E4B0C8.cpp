// Game/Class_10E4B0C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4B0C8.h"

void FUN_10ad1dc0(void* Memory, unsigned int Size);

// FUNCTION: 0x109616A0 ?FUN_109616a0@Class_10E4B0C8@@UAEXH@Z
void Class_10E4B0C8::FUN_109616a0(int p1)
{
    Unknown30 = p1;
    Unknown34 = 0;
}

// FUNCTION: 0x109616D0 ?FUN_109616d0@Class_10E4B0C8@@UAEPAV1@I@Z
Class_10E4B0C8* Class_10E4B0C8::FUN_109616d0(unsigned int Flags)
{
    FUN_10961640();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x38);
    return this;
}
