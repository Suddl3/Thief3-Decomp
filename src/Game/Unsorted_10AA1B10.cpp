// Game/Unsorted_10AA1B10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D994.h"
#include "Game/Class_10E5D998.h"
#include "Game/Class_10E5D99C.h"
#include "Game/Class_10E5D9A0.h"
#include "Game/Class_10E6D390.h"
#include "Game/Class_10E6D39C.h"
#include "Game/Class_10E6D3A8.h"
#include "Game/Class_10E6D3B4.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA1B10 ?FUN_10aa1b10@Class_10E5D99C@@UAEPAVClass_10E6D390@@XZ
Class_10E6D390* Class_10E5D99C::FUN_10aa1b10()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D390* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D390), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D390*>(Memory)->FUN_10aa1a60();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA1B60 ?FUN_10aa1b60@Class_10E5D994@@UAEPAVClass_10E6D39C@@XZ
Class_10E6D39C* Class_10E5D994::FUN_10aa1b60()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D39C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D39C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D39C*>(Memory)->FUN_10aa1a80();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA1BB0 ?FUN_10aa1bb0@Class_10E5D9A0@@UAEPAVClass_10E6D3A8@@XZ
Class_10E6D3A8* Class_10E5D9A0::FUN_10aa1bb0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D3A8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D3A8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D3A8*>(Memory)->FUN_10aa1aa0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA1C00 ?FUN_10aa1c00@Class_10E5D998@@UAEPAVClass_10E6D3B4@@XZ
Class_10E6D3B4* Class_10E5D998::FUN_10aa1c00()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D3B4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D3B4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D3B4*>(Memory)->FUN_10aa1b00();
    GetAllocator()->Virtual9();
    return Result;
}
