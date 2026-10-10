// Game/Unsorted_10BA4370.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C678.h"
#include "Game/Class_10E8C758.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4370 ?FUN_10ba4370@Class_10E8C678@@UAEPAVClass_10E8C758@@XZ
Class_10E8C758* Class_10E8C678::FUN_10ba4370()
{
    Class_10E8C758* Object = (Class_10E8C758*)operator new(sizeof(Class_10E8C758), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba43b0();
    return 0;
}
