// Game/Unsorted_10AA0EC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D980.h"
#include "Game/Class_10E5D984.h"
#include "Game/Class_10E6D33C.h"
#include "Game/Class_10E6D348.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA0EC0 ?FUN_10aa0ec0@Class_10E5D984@@UAEPAVClass_10E6D33C@@XZ
Class_10E6D33C* Class_10E5D984::FUN_10aa0ec0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D33C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D33C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D33C*>(Memory)->FUN_10aa0ea0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0F60 ?FUN_10aa0f60@Class_10E5D980@@UAEPAVClass_10E6D348@@XZ
Class_10E6D348* Class_10E5D980::FUN_10aa0f60()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D348* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D348), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D348*>(Memory)->FUN_10aa0eb0();
    FUN_10905aa0()->Virtual9();
    return Result;
}
