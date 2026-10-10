// Game/Unsorted_10BA4880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6B4.h"
#include "Game/Class_10E8C80C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4880 ?FUN_10ba4880@Class_10E8C6B4@@UAEPAVClass_10E8C80C@@XZ
Class_10E8C80C* Class_10E8C6B4::FUN_10ba4880()
{
    Class_10E8C80C* Object = (Class_10E8C80C*)operator new(sizeof(Class_10E8C80C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba48c0();
    return 0;
}
