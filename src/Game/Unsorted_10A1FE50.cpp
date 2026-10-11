// Game/Unsorted_10A1FE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A21280.h"

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10A21280_Element
{
    char Unknown00[0x34];
};

// FUNCTION: 0x10A21280 ?FUN_10a21280@Class_10A21280@@QAEXH@Z
void Class_10A21280::FUN_10a21280(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Struct_10A21280_Element);
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10A21280_Element), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Struct_10A21280_Element);
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
            Unknown08 = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_10A21280_Element), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Struct_10A21280_Element);
        }
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
