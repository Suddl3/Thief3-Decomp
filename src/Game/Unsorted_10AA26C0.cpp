// Game/Unsorted_10AA26C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D9BC.h"
#include "Game/Class_10E6D40C.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA26C0 ?FUN_10aa26c0@Class_10E5D9BC@@UAEPAVClass_10E6D40C@@XZ
Class_10E6D40C* Class_10E5D9BC::FUN_10aa26c0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D40C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D40C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D40C*>(Memory)->FUN_10aa26a0();
    FUN_10905aa0()->Virtual9();
    return Result;
}
