// Game/Unsorted_10B8F720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D54.h"
#include "Game/Class_10E88D58.h"
#include "Game/Class_10E88D5C.h"
#include "Game/Class_10E897F4.h"
#include "Game/Class_10E89800.h"
#include "Game/Class_10E8980C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B8F720 ?Create@Class_10E88D58@@UAEPAVClass_10E897F4@@XZ
Class_10E897F4* Class_10E88D58::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E897F4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E897F4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E897F4*>(Memory)->Init();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B8F770 ?Create@Class_10E88D5C@@UAEPAVClass_10E89800@@XZ
Class_10E89800* Class_10E88D5C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E89800* Result = 0;
    void* Memory = operator new(sizeof(Class_10E89800), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E89800*>(Memory)->Init();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B8F7C0 ?Create@Class_10E88D54@@UAEPAVClass_10E8980C@@XZ
Class_10E8980C* Class_10E88D54::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E8980C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E8980C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E8980C*>(Memory)->Init();
    GetAllocator()->Virtual9();
    return Result;
}
