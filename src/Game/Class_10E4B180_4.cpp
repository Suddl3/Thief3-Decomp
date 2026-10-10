// Game/Unsorted_10B7C6D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4B180.h"
#include "Game/Class_10E4B180_Unknown70.h"

class Class_10B8AC90;

class Class_10D9B090;

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* Obj, int A);

// FUNCTION: 0x10B7C720 ?FUN_10b7c720@Class_10E4B180@@UAEXPAVClass_10B8AC90@@H@Z
void Class_10E4B180::FUN_10b7c720(Class_10B8AC90* A, int B)
{
    for (int i = 0; i < Unknown8C; i++)
    {
        Class_10E4B180_Unknown70* Item = Unknown94[i];
        Item->Virtual7(FUN_10d9dcb0(A, B));
    }
}
