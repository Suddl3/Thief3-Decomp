// Game/Class_10C4ED70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4ED70.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C5CC60 ?Allocate@Class_10C4ED70@@QAEPAXHH@Z
void* Class_10C4ED70::Allocate(int A, int B)
{
    if (Unknown04 != 0)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 12, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        GetAllocator()->Virtual9();
    return Memory;
}
