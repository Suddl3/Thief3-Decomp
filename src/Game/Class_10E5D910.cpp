// Game/Class_10E5D910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D910.h"
#include "Game/Class_10E6CA40.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A90DE0 ?Create@Class_10E5D910@@UAEPAVClass_10E6CA40@@XZ
Class_10E6CA40* Class_10E5D910::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CA40* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CA40), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CA40*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}
