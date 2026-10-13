// Game/Unsorted_10919D30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091A4F0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10941980.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x1091A4F0 ?FUN_1091a4f0@Class_1091A4F0@@QAEXH@Z
void Class_1091A4F0::FUN_1091a4f0(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Struct_10941980);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Struct_10941980*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10941980), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Struct_10941980);
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
            Unknown08 = (Struct_10941980*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10941980), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Struct_10941980);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
