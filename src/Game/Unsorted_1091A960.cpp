// Game/Unsorted_1091A960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A3ACD0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10A3ACD0_Element
{
    char Unknown00[0x1C];
};

// FUNCTION: 0x1091A960 ?Resize@Class_10A3ACD0@@QAEXH@Z
void Class_10A3ACD0::Resize(int NewCount)
{
    int Capacity = !Elements ? 0 : CapacityBytes / sizeof(Struct_10A3ACD0_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Elements = GetAllocator()->Virtual3(Elements, NewCapacity * sizeof(Struct_10A3ACD0_Element), 0, 0, 0, 0);
        CapacityBytes = NewCapacity * sizeof(Struct_10A3ACD0_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Elements);
            Elements = 0;
            CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Elements = GetAllocator()->Virtual3(Elements, NewCapacity * sizeof(Struct_10A3ACD0_Element), 0, 0, 0, 0);
            CapacityBytes = NewCapacity * sizeof(Struct_10A3ACD0_Element);
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}
