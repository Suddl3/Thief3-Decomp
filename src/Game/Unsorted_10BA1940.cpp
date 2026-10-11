// Game/Unsorted_10BA1940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BA1940.h"

Class_10905A90_Member* FUN_10905aa0();

// Game/Class_10C4F450.h copied whole, with the constructor and the destructor the
// element's code inlines.
class Class_10C4F450
{
public:
    Class_10C4F450() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    ~Class_10C4F450()
    {
        FUN_10c4eea0(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10c4eea0(int Count);
    void FUN_10c4f450();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// FUNCTION: 0x10BA1940 ?FUN_10ba1940@Class_10BA1940@@QAEXH@Z
void Class_10BA1940::FUN_10ba1940(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10C4F450);
    for (int i = NewCount; i < OldCount; i++)
        Unknown08[i].~Class_10C4F450();
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Class_10C4F450*)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4F450), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C4F450);
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
            Unknown08 = (Class_10C4F450*)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4F450), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C4F450);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&Unknown08[j]) Class_10C4F450;
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
