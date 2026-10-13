// Game/Class_10A2C610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A2C610.h"
#include "Game/Struct_10A2DA00.h"
#include "Game/cBoneAimController.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A2C3B0 ?SetCount@Class_10A2C610@@QAEXH@Z
void Class_10A2C610::SetCount(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Struct_10A2DA00);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Struct_10A2DA00*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10A2DA00), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Struct_10A2DA00);
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
            Unknown08 = (Struct_10A2DA00*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10A2DA00), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Struct_10A2DA00);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10A2C610 ?Clear@Class_10A2C610@@QAEXXZ
void Class_10A2C610::Clear()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
