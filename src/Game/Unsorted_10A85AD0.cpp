// Game/Unsorted_10A85AD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Object_10A858C0.h"
#include "Game/Class_10A85AD0.h"

Class_10905A90_Member* GetAllocator();

// The growable pointer array in globals: the count, the bytes allocated and the block.
extern int DAT_10f3a1c8;

extern int DAT_10f3a1cc;

extern Object_10A858C0** DAT_10f3a1d0;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A854C0;

extern Class_10A854C0* DAT_10f3a198;

class Class_10E6C390;

// FUNCTION: 0x10A86080 ?FUN_10a86080@@YAPAVClass_10E6C390@@XZ
Class_10E6C390* FUN_10a86080()
{
    if (!DAT_10f3a198)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f3a198 = (Class_10A854C0*)new(0, 0, 0, 0, 0) Class_10A85AD0();
        GetAllocator()->Virtual9();
    }
    return (Class_10E6C390*)DAT_10f3a198;
}

// FUNCTION: 0x10A86120 ?ClearObjects@@YAXXZ
void ClearObjects()
{
    for (int i = 0; i < DAT_10f3a1c8; i++)
    {
        delete DAT_10f3a1d0[i];
        DAT_10f3a1d0[i] = 0;
    }
    int Capacity = !DAT_10f3a1d0 ? 0 : DAT_10f3a1cc / sizeof(void*);
    GetAllocator()->Virtual8(0, 0);
    int NewCount = 0;
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        DAT_10f3a1d0 = (Object_10A858C0**)GetAllocator()->Virtual3(DAT_10f3a1d0, NewCapacity * sizeof(void*), 0, 0, 0, 0);
        DAT_10f3a1cc = NewCapacity * sizeof(void*);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(DAT_10f3a1d0);
            DAT_10f3a1d0 = 0;
            DAT_10f3a1cc = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            DAT_10f3a1d0 = (Object_10A858C0**)GetAllocator()->Virtual3(DAT_10f3a1d0, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            DAT_10f3a1cc = NewCapacity * sizeof(void*);
        }
    }
    GetAllocator()->Virtual9();
    DAT_10f3a1c8 = NewCount;
}
