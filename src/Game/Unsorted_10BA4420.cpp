// Game/Unsorted_10BA4420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C680.h"
#include "Game/Class_10E8C770.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4420 ?FUN_10ba4420@Class_10E8C680@@UAEPAVClass_10E8C770@@XZ
Class_10E8C770* Class_10E8C680::FUN_10ba4420()
{
    Class_10E8C770* Object = (Class_10E8C770*)operator new(sizeof(Class_10E8C770), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4460();
    return 0;
}
