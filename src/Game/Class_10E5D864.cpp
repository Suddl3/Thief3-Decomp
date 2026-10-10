// Game/Class_10E5D864.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D864.h"
#include "Game/Class_10E6D0EC.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A995C0 ?FUN_10a995c0@Class_10E5D864@@UAEPAVClass_10E6D0EC@@XZ
Class_10E6D0EC* Class_10E5D864::FUN_10a995c0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D0EC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D0EC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D0EC*>(Memory)->FUN_10a99580();
    FUN_10905aa0()->Virtual9();
    return Result;
}
