// Game/Class_10E89A8C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E89A8C.h"
#include "Core/Core.h"
#include "Game/Class_10990D10.h"
#include "Game/FCoords.h"
#include "Game/Class_10B92DB0.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B92BF0 ?Init@Class_10E89A8C@@QAEPAV1@H@Z
Class_10E89A8C* Class_10E89A8C::Init(int p1)
{
    *(void***)this = DAT_10e89a8c;
    Unknown04 = p1;
    return this;
}

// FUNCTION: 0x10B92C10 ?Clone@Class_10E89A8C@@UAEPAV1@XZ
Class_10E89A8C* Class_10E89A8C::Clone()
{
    return new(0, 0, 0, 0, 0) Class_10E89A8C(Unknown04);
}
