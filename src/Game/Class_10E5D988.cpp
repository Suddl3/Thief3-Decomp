// Game/Class_10E5D988.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D988.h"
#include "Game/Class_10E6D358.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA1160 ?FUN_10aa1160@Class_10E5D988@@UAEPAVClass_10E6D358@@XZ
Class_10E6D358* Class_10E5D988::FUN_10aa1160()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D358* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D358), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D358*>(Memory)->FUN_10aa1150();
    GetAllocator()->Virtual9();
    return Result;
}
