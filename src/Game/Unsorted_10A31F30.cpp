// Game/Unsorted_10A31F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A32270.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

extern "C" void* memset(void*, int, unsigned);

// FUNCTION: 0x10A31F30 ?FUN_10a31f30@Class_10A32270@@QAEXH@Z
void Class_10A32270::FUN_10a31f30(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04;
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* NewData = GetAllocator()->Virtual3(Unknown08, NewCapacity, 0, 0, 0, 0);
        Unknown04 = NewCapacity;
        Unknown08 = NewData;
        memset((char*)NewData + Capacity, 0, NewCapacity - Capacity);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity, 0, 0, 0, 0);
            Unknown04 = NewCapacity;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
