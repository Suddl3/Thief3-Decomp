// Game/Unsorted_10C1A0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

extern int* DAT_10ff708c;

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C1A0C0 ?AddRefCounter@@YAXXZ
void AddRefCounter()
{
    if (!DAT_10ff708c)
    {
        GetAllocator()->Virtual8(0, 0);
        int* Result = new(0, 0, 0, 0, 0) int();
        DAT_10ff708c = Result;
        GetAllocator()->Virtual9();
    }
    ++*DAT_10ff708c;
}
