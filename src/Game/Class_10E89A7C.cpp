// Game/Class_10E89A7C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E89A7C.h"
#include "Game/Class_10E89A6C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e89a7c[];

// FUNCTION: 0x10B92B90 ?Construct@Class_10E89A7C@@QAEPAV1@H@Z
Class_10E89A7C* Class_10E89A7C::Construct(int p1)
{
    *(void**)this = DAT_10e89a7c;
    Unknown04 = p1;
    return this;
}

// FUNCTION: 0x10B92BB0 ?Clone@Class_10E89A7C@@UAEPAV1@XZ
Class_10E89A7C* Class_10E89A7C::Clone()
{
    return new(0, 0, 0, 0, 0) Class_10E89A7C(Unknown04);
}
