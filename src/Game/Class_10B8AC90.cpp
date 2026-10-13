// Game/Class_10B8AC90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B8AC90.h"
#include "Game/Class_10D9B090.h"
#include "Game/Struct_10B8AC90.h"

class Class_10B8AC90;

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* Obj, int A);

// FUNCTION: 0x10B8ACC0 ?FUN_10b8acc0@Class_10B8AC90@@QAEXH@Z
void Class_10B8AC90::FUN_10b8acc0(int A)
{
    if (A != Unknown10->Unknown28Bits5To10)
    {
        FUN_10d9dcb0(this, A)->FUN_10d9b100();
    }
}
