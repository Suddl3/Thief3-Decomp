// Game/Unsorted_10B47430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B47660_Member.h"
#include "Game/Class_10C3E140.h"
#include "Game/Class_10B7AB80.h"
#include "Game/Class_10EC0E20.h"
#include "Game/Class_10B47660.h"
#include "Game/cIntArray.h"

// FUNCTION: 0x10B47660 ?FUN_10b47660@Class_10B47660@@QAEXHH@Z
void Class_10B47660::FUN_10b47660(int A, int B)
{
    Unknown4C.SetCount(0);
    if (Unknown0C->FUN_10c3e140())
        Unknown0C->FUN_10b7b8a0();
    Unknown08->FUN_10b7ab80(A, 1.0f);
    Unknown08->FUN_10b7abb0(0x3f800000);
    Unknown08->FUN_10b7b760(B);
    if (Unknown1C)
    {
        Unknown1D = false;
        Unknown10->Unknown4A1 = true;
    }
}
