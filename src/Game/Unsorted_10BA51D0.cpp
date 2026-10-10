// Game/Unsorted_10BA51D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C718.h"
#include "Game/Class_10E8C938.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA51D0 ?FUN_10ba51d0@Class_10E8C718@@UAEPAVClass_10E8C938@@XZ
Class_10E8C938* Class_10E8C718::FUN_10ba51d0()
{
    Class_10E8C938* Object = (Class_10E8C938*)operator new(sizeof(Class_10E8C938), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba5210();
    return 0;
}
