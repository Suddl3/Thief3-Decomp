// Game/Unsorted_10BBD870.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10BBD8B0.h"
#include "Game/Class_10BBDC30.h"

class Class_1098E330;

class Class_10971570;

// FUNCTION: 0x10BBD870 ?FUN_10bbd870@Class_10BBDC30@@QAE_NHPAM@Z
bool Class_10BBDC30::FUN_10bbd870(int A, float* B)
{
    for (int i = 0; i < Unknown18; i++)
    {
        Struct_10BBD8B0* Entry = Unknown20[i];
        if (Entry->Unknown04 == A)
        {
            float* Value = Entry->Unknown08;
            if (!Value)
                return false;
            *B = *Value;
            return true;
        }
    }
    return false;
}
