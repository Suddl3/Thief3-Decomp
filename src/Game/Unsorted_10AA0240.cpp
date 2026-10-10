// Game/Unsorted_10AA0240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D908.h"
#include "Game/Class_10E5D90C.h"
#include "Game/Class_10E6D2E8.h"
#include "Game/Class_10E6D2F4.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA0240 ?FUN_10aa0240@Class_10E5D90C@@UAEPAVClass_10E6D2E8@@XZ
Class_10E6D2E8* Class_10E5D90C::FUN_10aa0240()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D2E8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D2E8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D2E8*>(Memory)->FUN_10aa0210();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0290 ?FUN_10aa0290@Class_10E5D908@@UAEPAVClass_10E6D2F4@@XZ
Class_10E6D2F4* Class_10E5D908::FUN_10aa0290()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D2F4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D2F4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D2F4*>(Memory)->FUN_10aa0230();
    FUN_10905aa0()->Virtual9();
    return Result;
}
