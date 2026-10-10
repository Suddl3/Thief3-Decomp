// Game/Unsorted_10BA46A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6A0.h"
#include "Game/Class_10E8C7D0.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA46A0 ?FUN_10ba46a0@Class_10E8C6A0@@UAEPAVClass_10E8C7D0@@XZ
Class_10E8C7D0* Class_10E8C6A0::FUN_10ba46a0()
{
    Class_10E8C7D0* Object = (Class_10E8C7D0*)operator new(sizeof(Class_10E8C7D0), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba46e0();
    return 0;
}
