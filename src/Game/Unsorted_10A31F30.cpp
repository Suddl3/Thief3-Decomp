// Game/Unsorted_10A31F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A32270.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

extern "C" void* memset(void*, int, unsigned);

// FUNCTION: 0x10A31F30 ?FUN_10a31f30@Class_10A32270@@QAEXH@Z
void Class_10A32270::FUN_10a31f30(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04;
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* NewData = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity, 0, 0, 0, 0);
        Unknown04 = NewCapacity;
        Unknown08 = NewData;
        memset((char*)NewData + Capacity, 0, NewCapacity - Capacity);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity, 0, 0, 0, 0);
            Unknown04 = NewCapacity;
        }
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
