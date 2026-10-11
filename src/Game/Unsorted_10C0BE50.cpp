// Game/Unsorted_10C0BE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0BF20.h"

Class_10905A90_Member* GetAllocator();

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10C0BF20_Unknown08
{
public:
    void* Unknown00;
    char Unknown04[0x8];
};

// FUNCTION: 0x10C0BE50 ?FUN_10c0be50@Class_10C0C150@@QAEXH@Z
void Class_10C0C150::FUN_10c0be50(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Item_10C0C150);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = (Item_10C0C150*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C0C150), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10C0C150);
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
            Unknown08 = (Item_10C0C150*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C0C150), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C0C150);
        }
    }
    for (int i = OldCount; i < NewCount; i++)
    {
        Item_10C0C150* Element = Unknown08 + i;
        if (Element)
            Element->Unknown00 = 0;
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10C0BF20 ?FUN_10c0bf20@Class_10C0BF20@@QAEXHHH@Z
void Class_10C0BF20::FUN_10c0bf20(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10C0BF20_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10C0BF20_Unknown08* Item = Unknown08 + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
        }
        else
        {
            for (int I = To + Count; I < From + Count; I++)
            {
                Class_10C0BF20_Unknown08* Item = Unknown08 + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
        }
    }
}
