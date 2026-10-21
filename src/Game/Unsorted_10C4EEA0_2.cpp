// Game/Unsorted_10C4EEA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The items of an element: plain 4-byte data.
class Item_10C4EEA0
{
public:
    int Unknown00;
};

// An element of the array: itself a growable array of 4-byte items.
class Class_10C4EEA0_Unknown08
{
public:
    Class_10C4EEA0_Unknown08() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    ~Class_10C4EEA0_Unknown08()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void SetCount(int NewCount)
    {
        int OldCount = Unknown00;
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Item_10C4EEA0);
        for (int i = NewCount; i < OldCount; i++)
            Unknown08[i].~Item_10C4EEA0();
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (Item_10C4EEA0*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C4EEA0), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C4EEA0);
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
                Unknown08 = (Item_10C4EEA0*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C4EEA0), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(Item_10C4EEA0);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    int Unknown00;
    int Unknown04;
    Item_10C4EEA0* Unknown08;
};

// Game/Class_10C4F450.h copied whole, with the type of Unknown08 added:
// the header leaves it a void*, and the code indexes it.
class Class_10C4F450
{
public:
    Class_10C4F450() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10C4F450()
    {
        FUN_10c4eea0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10c4eea0(int Count);
    void Empty();

    int Unknown00;
    int Unknown04;
    Class_10C4EEA0_Unknown08* Unknown08;
};

// FUNCTION: 0x10C4EEA0 ?FUN_10c4eea0@Class_10C4F450@@QAEXH@Z
void Class_10C4F450::FUN_10c4eea0(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10C4EEA0_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
        Unknown08[i].~Class_10C4EEA0_Unknown08();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Class_10C4EEA0_Unknown08*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4EEA0_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C4EEA0_Unknown08);
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
            Unknown08 = (Class_10C4EEA0_Unknown08*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4EEA0_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C4EEA0_Unknown08);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&Unknown08[j]) Class_10C4EEA0_Unknown08;
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
