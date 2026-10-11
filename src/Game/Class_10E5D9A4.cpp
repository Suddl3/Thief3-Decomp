// Game/Class_10E5D9A4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D9A4.h"
#include "Game/Class_10E6D3F4.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA2420 ?FUN_10aa2420@Class_10E5D9A4@@UAEPAVClass_10E6D3F4@@XZ
Class_10E6D3F4* Class_10E5D9A4::FUN_10aa2420()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D3F4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D3F4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D3F4*>(Memory)->FUN_10aa2410();
    GetAllocator()->Virtual9();
    return Result;
}
