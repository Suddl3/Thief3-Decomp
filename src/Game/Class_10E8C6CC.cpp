// Game/Unsorted_10BA4AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6CC.h"
#include "Game/Class_10E8C854.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4AC0 ?FUN_10ba4ac0@Class_10E8C6CC@@UAEPAVClass_10E8C854@@XZ
Class_10E8C854* Class_10E8C6CC::FUN_10ba4ac0()
{
    Class_10E8C854* Object = (Class_10E8C854*)operator new(sizeof(Class_10E8C854), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4b00();
    return 0;
}
