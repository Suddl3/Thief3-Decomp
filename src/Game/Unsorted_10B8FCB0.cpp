// Game/Unsorted_10B8FCB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D60.h"
#include "Game/Class_10E88D64.h"
#include "Game/Class_10E89818.h"
#include "Game/Class_10E89824.h"
#include "Game/Class_10E8984C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B8FCB0 ?Create@Class_10E88D64@@UAEPAVClass_10E89818@@XZ
Class_10E89818* Class_10E88D64::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E89818* Result = 0;
    void* Memory = operator new(sizeof(Class_10E89818), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E89818*>(Memory)->Init();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B8FD00 ?Create@Class_10E88D60@@UAEPAVClass_10E89824@@XZ
Class_10E89824* Class_10E88D60::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E89824* Result = 0;
    void* Memory = operator new(sizeof(Class_10E89824), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E89824*>(Memory)->Init();
    GetAllocator()->Virtual9();
    return Result;
}
