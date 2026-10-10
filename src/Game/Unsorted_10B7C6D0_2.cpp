// Game/Unsorted_10B7C6D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4B180.h"
#include "Game/Class_10E4B180_Unknown70.h"

class Class_10B8AC90;

class Class_10D9B090;

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* Obj, int A);

// FUNCTION: 0x10B7C6D0 ?FUN_10b7c6d0@Class_10E4B180@@UAEXHPAVClass_10B8AC90@@H@Z
void Class_10E4B180::FUN_10b7c6d0(int A, Class_10B8AC90* B, int C)
{
    for (int i = 0; i < Unknown80; i++)
    {
        Class_10E4B180_Unknown70* Item = Unknown88[i];
        Item->Virtual6(FUN_10d9dcb0(B, C));
    }
}
