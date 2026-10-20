// Game/Unsorted_10C089B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10C08E90.h"
#include "Game/Class_10E97B00.h"

extern void* DAT_10e97bbc[];

// Game/Item_10C091A0.h copied whole, with the constructor the element's code inlines.
struct Item_10C091A0
{
public:
    Item_10C091A0()
        : Field00((void*)DAT_10e97bbc), Unknown04(DAT_10e47660), Unknown0C(0), Unknown10(0),
          Unknown14(0), Unknown18(0), Unknown1C(0), Unknown20(0x11), Unknown24(false)
    {
    }

    union
    {
        void* Field00;
        void** Unknown00;     // +0x00: the vtable pointer (DAT_10e97bbc)
    };
    Class_10E97B00 Unknown04;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    bool Unknown24;
    char Pad25[0x3];
};

// FUNCTION: 0x10C089B0 ?FUN_10c089b0@Class_10C08E90@@QAEXH@Z
void Class_10C08E90::FUN_10c089b0(int Count)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Item_10C091A0);
    for (int i = Count; i < OldCount; i++)
        Unknown08[i].~Item_10C091A0();
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        Unknown08 = (Item_10C091A0*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C091A0), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10C091A0);
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
            Unknown08 = (Item_10C091A0*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C091A0), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C091A0);
        }
    }
    for (int j = OldCount; j < Count; j++)
        new (&Unknown08[j]) Item_10C091A0;
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}
