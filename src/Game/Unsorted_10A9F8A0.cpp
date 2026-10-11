// Game/Unsorted_10A9F8A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D8FC.h"
#include "Game/Class_10E5D900.h"
#include "Game/Class_10E6D2C4.h"
#include "Game/Class_10E6D2D0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A9F8A0 ?FUN_10a9f8a0@Class_10E5D900@@UAEPAVClass_10E6D2C4@@XZ
Class_10E6D2C4* Class_10E5D900::FUN_10a9f8a0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D2C4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D2C4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D2C4*>(Memory)->FUN_10a9f870();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9F8F0 ?FUN_10a9f8f0@Class_10E5D8FC@@UAEPAVClass_10E6D2D0@@XZ
Class_10E6D2D0* Class_10E5D8FC::FUN_10a9f8f0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D2D0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D2D0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D2D0*>(Memory)->FUN_10a9f890();
    GetAllocator()->Virtual9();
    return Result;
}
