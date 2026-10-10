// Game/Unsorted_10BA48E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6B8.h"
#include "Game/Class_10E8C818.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA48E0 ?FUN_10ba48e0@Class_10E8C6B8@@UAEPAVClass_10E8C818@@XZ
Class_10E8C818* Class_10E8C6B8::FUN_10ba48e0()
{
    Class_10E8C818* Object = (Class_10E8C818*)operator new(sizeof(Class_10E8C818), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4920();
    return 0;
}
