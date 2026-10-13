// Game/Unsorted_10C64B00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C613F0.h"
#include "Game/Class_10C64CE0.h"

class Class_10C613F0_Member;

// FUNCTION: 0x10C64CE0 ?FUN_10c64ce0@Class_10C64CE0@@QAEXIPAIPAH1@Z
void Class_10C64CE0::FUN_10c64ce0(unsigned int Packed, unsigned int* Index, int* Offset, int* Result)
{
    *Index = Packed >> 29;
    *Offset = Packed & 0x1fffffff;
    if (!Unknown1C[*Index].FUN_10d57530())
    {
        *Offset = 0;
        *Result = 0;
        return;
    }
    int Value = Unknown16C;
    *Result = Value;
    if (Value == 0)
    {
        *Offset = 0;
        *Result = Unknown1C[*Index].FUN_10c613f0();
        return;
    }
    int Found = Unknown1C[*Index].FUN_10c613f0();
    if (Found - *Offset < *Result)
        *Result = Found - *Offset;
}
