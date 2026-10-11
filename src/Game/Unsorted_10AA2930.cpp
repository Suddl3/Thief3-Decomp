// Game/Unsorted_10AA2930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D9C0.h"
#include "Game/Class_10E5D9C4.h"
#include "Game/Class_10E5D9C8.h"
#include "Game/Class_10E5D9CC.h"
#include "Game/Class_10E6D418.h"
#include "Game/Class_10E6D424.h"
#include "Game/Class_10E6D430.h"
#include "Game/Class_10E6D43C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA2B10 ?FUN_10aa2b10@Class_10E5D9C4@@UAEPAVClass_10E6D418@@XZ
Class_10E6D418* Class_10E5D9C4::FUN_10aa2b10()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D418* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D418), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D418*>(Memory)->FUN_10aa2860();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2B60 ?FUN_10aa2b60@Class_10E5D9C8@@UAEPAVClass_10E6D424@@XZ
Class_10E6D424* Class_10E5D9C8::FUN_10aa2b60()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D424* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D424), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D424*>(Memory)->FUN_10aa2880();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2BB0 ?FUN_10aa2bb0@Class_10E5D9CC@@UAEPAVClass_10E6D430@@XZ
Class_10E6D430* Class_10E5D9CC::FUN_10aa2bb0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D430* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D430), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D430*>(Memory)->FUN_10aa28c0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2C00 ?FUN_10aa2c00@Class_10E5D9C0@@UAEPAVClass_10E6D43C@@XZ
Class_10E6D43C* Class_10E5D9C0::FUN_10aa2c00()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D43C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D43C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D43C*>(Memory)->FUN_10aa2910();
    GetAllocator()->Virtual9();
    return Result;
}
