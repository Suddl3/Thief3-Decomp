// Game/Unsorted_10BBB8D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDC30.h"
#include "Game/Struct_10BBD8B0.h"

class Class_1098E330;

class Class_10971570;

// FUNCTION: 0x10BBD840 ?FUN_10bbd840@Class_10BBDC30@@QAE_NH@Z
bool Class_10BBDC30::FUN_10bbd840(int A)
{
    for (int i = 0; i < Unknown18; i++)
    {
        if (Unknown20[i]->Unknown04 == A)
            return true;
    }
    return false;
}
