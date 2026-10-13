// Game/Class_10E8D7B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8D7B0.h"

extern void* DAT_10e8d7b0[];

// FUNCTION: 0x10BAD900 ?Init@Class_10E8D7B0@@QAEPAV1@PAUStruct_10BAD900@@0PAH@Z
Class_10E8D7B0* Class_10E8D7B0::Init(Struct_10BAD900* A, Struct_10BAD900* B, int* C)
{
    Unknown04 = 0;
    *(void***)this = DAT_10e8d7b0; // the vtable pointer at offset 0
    Unknown08 = *A;
    Unknown14 = *B;
    Unknown20 = *C;
    return this;
}
