// Game/Class_10E96FD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E96FD0.h"

extern void* DAT_10e96fd0[];

// FUNCTION: 0x10BE9B80 ?FUN_10be9b80@Class_10E96FD0@@QAEPAV1@HHH@Z
Class_10E96FD0* Class_10E96FD0::FUN_10be9b80(int A, int B, int C)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    *(void**)this = DAT_10e96fd0;
    Unknown40 = C;
    return this;
}
