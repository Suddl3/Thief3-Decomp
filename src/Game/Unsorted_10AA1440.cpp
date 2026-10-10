// Game/Unsorted_10AA1440.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D98C.h"
#include "Game/Class_10E6D368.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA1440 ?FUN_10aa1440@Class_10E5D98C@@UAEPAVClass_10E6D368@@XZ
Class_10E6D368* Class_10E5D98C::FUN_10aa1440()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D368* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D368), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D368*>(Memory)->FUN_10aa1430();
    FUN_10905aa0()->Virtual9();
    return Result;
}
