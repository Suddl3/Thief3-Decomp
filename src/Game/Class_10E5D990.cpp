// Game/Class_10E5D990.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D990.h"
#include "Game/Class_10E6D37C.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA17D0 ?FUN_10aa17d0@Class_10E5D990@@UAEPAVClass_10E6D37C@@XZ
Class_10E6D37C* Class_10E5D990::FUN_10aa17d0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D37C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D37C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D37C*>(Memory)->FUN_10aa17c0();
    FUN_10905aa0()->Virtual9();
    return Result;
}
