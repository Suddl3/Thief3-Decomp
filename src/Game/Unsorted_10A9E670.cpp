// Game/Unsorted_10A9E670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D8E4.h"
#include "Game/Class_10E5D8E8.h"
#include "Game/Class_10E5D8EC.h"
#include "Game/Class_10E5D8F0.h"
#include "Game/Class_10E5D8F4.h"
#include "Game/Class_10E5D8F8.h"
#include "Game/Class_10E6D26C.h"
#include "Game/Class_10E6D278.h"
#include "Game/Class_10E6D284.h"
#include "Game/Class_10E6D290.h"
#include "Game/Class_10E6D29C.h"
#include "Game/Class_10E6D2A8.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A9E670 ?Create@Class_10E5D8E8@@UAEPAVClass_10E6D26C@@XZ
Class_10E6D26C* Class_10E5D8E8::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D26C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D26C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D26C*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9E6C0 ?Create@Class_10E5D8EC@@UAEPAVClass_10E6D278@@XZ
Class_10E6D278* Class_10E5D8EC::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D278* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D278), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D278*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9E710 ?Create@Class_10E5D8F8@@UAEPAVClass_10E6D284@@XZ
Class_10E6D284* Class_10E5D8F8::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D284* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D284), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D284*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9E760 ?Create@Class_10E5D8F0@@UAEPAVClass_10E6D290@@XZ
Class_10E6D290* Class_10E5D8F0::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D290* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D290), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D290*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9E7B0 ?Create@Class_10E5D8F4@@UAEPAVClass_10E6D29C@@XZ
Class_10E6D29C* Class_10E5D8F4::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D29C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D29C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D29C*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9E800 ?Create@Class_10E5D8E4@@UAEPAVClass_10E6D2A8@@XZ
Class_10E6D2A8* Class_10E5D8E4::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D2A8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D2A8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D2A8*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}
