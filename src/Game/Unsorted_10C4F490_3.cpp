// Game/Unsorted_10C4F490_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The value the item's own array holds.
struct Class_10C4F490_Inner_Item
{
    char Unknown00[0xC];
};

// The item's own array: a count, the bytes allocated and the block.
class Class_10C4F490_Inner
{
public:
    Class_10C4F490_Inner() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    void SetCount(int Count)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10C4F490_Inner_Item);
        GetAllocator()->Virtual8(0, 0);
        if (Count > Capacity)
        {
            int NewCapacity = Count;
            if (Capacity)
                NewCapacity = (Count & ~15) + 16;
            Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4F490_Inner_Item), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C4F490_Inner_Item);
        }
        else if (Count <= Capacity - 16)
        {
            if (Count == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (Count & ~15) + 16;
                Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4F490_Inner_Item), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(Class_10C4F490_Inner_Item);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = Count;
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// The item: its own array of values, then the object's own fields.
struct Item_10C4F490
{
    Item_10C4F490()
    {
        Unknown18 = 0;
        Unknown1C = 0;
        Unknown20 = 0;
        Unknown24 = 1.0f;
        Unknown28 = 0;
        Unknown2C = 0;
        Unknown44 = 1.0f;
        Unknown34 = 0;
        Unknown30 = 0;
        Unknown40 = 3.40282347e+38f;
        Unknown38 = 0;
        Unknown3C = 0;
    }

    ~Item_10C4F490()
    {
        Inner.SetCount(0);
        if (Inner.Unknown04)
        {
            GetAllocator()->Virtual5(Inner.Unknown08);
            Inner.Unknown08 = 0;
            Inner.Unknown04 = 0;
        }
    }

    Class_10C4F490_Inner Inner;
    char Unknown0C[0xC];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    float Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    unsigned char Unknown34;
    char Unknown35[3];
    int Unknown38;
    int Unknown3C;
    float Unknown40;
    float Unknown44;
};

// Game/Class_10C4F970.h copied whole, with the type of Unknown08 added:
// the header leaves it a void*, and the code indexes it.
class Class_10C4F970
{
public:
    void FUN_10c4f490(int Count);
    void FUN_10c4f970();
    void Empty()
    {
        FUN_10c4f490(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    Item_10C4F490* Unknown08;
};

// FUNCTION: 0x10C4F490 ?FUN_10c4f490@Class_10C4F970@@QAEXH@Z
void Class_10C4F970::FUN_10c4f490(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Item_10C4F490);
    for (int i = NewCount; i < OldCount; i++)
        Unknown08[i].~Item_10C4F490();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Item_10C4F490*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C4F490), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10C4F490);
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
            Unknown08 = (Item_10C4F490*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C4F490), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C4F490);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&Unknown08[j]) Item_10C4F490();
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
