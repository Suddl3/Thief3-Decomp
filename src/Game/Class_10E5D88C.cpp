// Game/Unsorted_10A9C730.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D88C.h"
#include "Game/Class_10E6D1CC.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A9C730 ?FUN_10a9c730@Class_10E5D88C@@UAEPAVClass_10E6D1CC@@XZ
Class_10E6D1CC* Class_10E5D88C::FUN_10a9c730()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D1CC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D1CC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D1CC*>(Memory)->FUN_10a9c720();
    FUN_10905aa0()->Virtual9();
    return Result;
}
