// Game/Unsorted_10A32C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32370.h"
#include "Game/Class_10A32D60.h"

// FUNCTION: 0x10A32C30 ?FUN_10a32c30@Class_10A32D60@@QAEXH@Z
void Class_10A32D60::FUN_10a32c30(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10A32370);
    for (int i = NewCount; i < OldCount; i++)
        Unknown08[i].~Class_10A32370();
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Class_10A32370*)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10A32370), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10A32370);
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
            Unknown08 = (Class_10A32370*)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10A32370), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10A32370);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&Unknown08[j]) Class_10A32370;
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
