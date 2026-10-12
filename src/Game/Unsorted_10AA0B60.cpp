// Game/Unsorted_10AA0B60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D94C.h"
#include "Game/Class_10E5D950.h"
#include "Game/Class_10E5D954.h"
#include "Game/Class_10E5D958.h"
#include "Game/Class_10E6D30C.h"
#include "Game/Class_10E6D318.h"
#include "Game/Class_10E6D324.h"
#include "Game/Class_10E6D330.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA0B60 ?Create@Class_10E5D958@@UAEPAVClass_10E6D30C@@XZ
Class_10E6D30C* Class_10E5D958::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D30C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D30C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D30C*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0BB0 ?Create@Class_10E5D94C@@UAEPAVClass_10E6D318@@XZ
Class_10E6D318* Class_10E5D94C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D318* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D318), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D318*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0C00 ?Create@Class_10E5D950@@UAEPAVClass_10E6D324@@XZ
Class_10E6D324* Class_10E5D950::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D324* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D324), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D324*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AA0C50 ?Create@Class_10E5D954@@UAEPAVClass_10E6D330@@XZ
Class_10E6D330* Class_10E5D954::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D330* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D330), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D330*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}
