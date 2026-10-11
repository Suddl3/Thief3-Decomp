// Game/Unsorted_10C40000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C40160.h"
#include "Game/Class_10C401D0.h"
#include "Game/Class_10C40240.h"

struct Struct_10C40C50;

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C40160 ?FUN_10c40160@Class_10C40160@@QAEPAUStruct_10C40C50@@HH@Z
Struct_10C40C50* Class_10C40160::FUN_10c40160(int A, int B)
{
    if (Unknown04 != 0)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 20, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        GetAllocator()->Virtual9();
    return (Struct_10C40C50*)Memory;
}

// FUNCTION: 0x10C401D0 ?FUN_10c401d0@Class_10C401D0@@QAEPAXHH@Z
void* Class_10C401D0::FUN_10c401d0(int A, int B)
{
    if (Unknown04 != 0)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 24, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        GetAllocator()->Virtual9();
    return Memory;
}

// FUNCTION: 0x10C40240 ?FUN_10c40240@Class_10C40240@@QAEPAXHH@Z
void* Class_10C40240::FUN_10c40240(int A, int B)
{
    if (Unknown04 != 0)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 44, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        GetAllocator()->Virtual9();
    return Memory;
}
