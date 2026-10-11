// Game/Unsorted_10AA2C90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D9D0.h"
#include "Game/Class_10E5D9D4.h"
#include "Game/Class_10E6D448.h"
#include "Game/Class_10E6D454.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA2C90 ?FUN_10aa2c90@Class_10E5D9D4@@UAEPAVClass_10E6D448@@XZ
Class_10E6D448* Class_10E5D9D4::FUN_10aa2c90()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D448* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D448), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D448*>(Memory)->FUN_10aa2c50();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA2CE0 ?FUN_10aa2ce0@Class_10E5D9D0@@UAEPAVClass_10E6D454@@XZ
Class_10E6D454* Class_10E5D9D0::FUN_10aa2ce0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D454* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D454), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D454*>(Memory)->FUN_10aa2c70();
    GetAllocator()->Virtual9();
    return Result;
}
