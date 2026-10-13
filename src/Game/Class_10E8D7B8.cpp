// Game/Class_10E8D7B8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAC050.h"
#include "Game/Struct_10BAD970.h"
#include "Game/Class_10E8D7B8.h"

extern void* DAT_10e8d7b8[];

// FUNCTION: 0x10BAD970 ?Init@Class_10E8D7B8@@QAEPAV1@PAUStruct_10BAD970@@PAHH@Z
Class_10E8D7B8* Class_10E8D7B8::Init(Struct_10BAD970* A, int* B, int C)
{
    Unknown04 = 0;
    *(void***)this = DAT_10e8d7b8;
    Unknown08 = *A;
    Unknown14 = *B;
    Unknown18 = C;
    return this;
}
