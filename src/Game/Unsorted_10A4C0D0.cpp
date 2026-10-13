// Game/Unsorted_10A4C0D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A4C130.h"
#include "Game/Class_10A4C4A0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A4C130 ?AllocBuffer@Class_10A4C130@@QAEPAXHH@Z
void* Class_10A4C130::AllocBuffer(int Count, int B)
{
    if (Unknown04)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Result = operator new(Count * 4, Tag, 0, 0, 0, 0);
    if (Unknown04)
        GetAllocator()->Virtual9();
    return Result;
}
