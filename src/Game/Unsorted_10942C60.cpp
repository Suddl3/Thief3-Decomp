// Game/Unsorted_10942C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109435A0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10942C60 ?FUN_10942c60@Class_109435A0@@QAEXH@Z
void Class_109435A0::FUN_10942c60(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(short);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (short*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(short), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(short);
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
            Unknown08 = (short*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(short), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(short);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
