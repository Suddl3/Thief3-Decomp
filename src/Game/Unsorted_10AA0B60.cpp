// Game/Unsorted_10AA0B60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D94C.h"
#include "Game/Class_10E5D950.h"
#include "Game/Class_10E5D954.h"
#include "Game/Class_10E5D958.h"
#include "Game/Class_10E6D30C.h"
#include "Game/Class_10E6D318.h"
#include "Game/Class_10E6D324.h"
#include "Game/Class_10E6D330.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA0B60 ?FUN_10aa0b60@Class_10E5D958@@UAEPAVClass_10E6D30C@@XZ
Class_10E6D30C* Class_10E5D958::FUN_10aa0b60()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D30C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D30C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D30C*>(Memory)->FUN_10aa0a90();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0BB0 ?FUN_10aa0bb0@Class_10E5D94C@@UAEPAVClass_10E6D318@@XZ
Class_10E6D318* Class_10E5D94C::FUN_10aa0bb0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D318* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D318), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D318*>(Memory)->FUN_10aa0ab0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0C00 ?FUN_10aa0c00@Class_10E5D950@@UAEPAVClass_10E6D324@@XZ
Class_10E6D324* Class_10E5D950::FUN_10aa0c00()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D324* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D324), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D324*>(Memory)->FUN_10aa0b00();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0C50 ?FUN_10aa0c50@Class_10E5D954@@UAEPAVClass_10E6D330@@XZ
Class_10E6D330* Class_10E5D954::FUN_10aa0c50()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D330* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D330), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D330*>(Memory)->FUN_10aa0b50();
    FUN_10905aa0()->Virtual9();
    return Result;
}
