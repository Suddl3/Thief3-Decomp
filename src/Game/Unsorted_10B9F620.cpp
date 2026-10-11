// Game/Unsorted_10B9F620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9FBE0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10B9F620 ?FUN_10b9f620@Class_10B9FBE0@@QAEXH@Z
void Class_10B9FBE0::FUN_10b9f620(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04;
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (char*)GetAllocator()->Virtual3(Unknown08, NewCapacity, 0, 0, 0, 0);
        Unknown04 = NewCapacity;
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
            Unknown08 = (char*)GetAllocator()->Virtual3(Unknown08, NewCapacity, 0, 0, 0, 0);
            Unknown04 = NewCapacity;
        }
    }
    for (int i = OldCount; i < NewCount; i++)
    {
        char* Element = Unknown08 + i;
        if (Element)
            *Element = 0;
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
