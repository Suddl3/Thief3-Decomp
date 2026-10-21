// Game/Unsorted_10C22DA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BAEC80.h"
#include <new>
#include "Game/Class_10C24940.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

extern "C" void* memset(void* Dest, int Value, unsigned Count);

Class_10905A90_Member* GetAllocator();

// The item of the array: a block the owner frees.
class Class_10C24440_Item
{
public:
    char Unknown00[0x14];
    Class_10BAEC80 Unknown14;
    int Unknown20;
};

// The owner of the array.
class Class_10C24440
{
public:
    void FUN_10c24440(int From, int To, int Count);

    int Unknown00;
    int Unknown04;
    Class_10C24440_Item* Unknown08;
};

// The record the inner array holds.
struct Item_10C24BC0_Record
{
    char Unknown00[0x24];
};

// The item's own array: a count, the bytes allocated and the block.
class Class_10C24BC0_Array
{
public:
    Class_10C24BC0_Array() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Item_10C24BC0_Record);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C24BC0_Record), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C24BC0_Record);
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
                Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Item_10C24BC0_Record), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(Item_10C24BC0_Record);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// The item: five values, the array, and one more.
struct Item_10C24BC0
{
    Item_10C24BC0()
        : Unknown00(0), Unknown04(0), Unknown08(0), Unknown0C(0), Unknown10(0), Unknown14(), Unknown20(0) {}
    ~Item_10C24BC0()
    {
        Class_10C24BC0_Array* Array = &Unknown14;
        Array->SetCount(0);
        if (Array->Unknown04)
        {
            GetAllocator()->Virtual5(Array->Unknown08);
            Array->Unknown08 = 0;
            Array->Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    Class_10C24BC0_Array Unknown14;
    int Unknown20;
};

// FUNCTION: 0x10C24260 ?SetCount@Class_10C24940@@QAEXH@Z
void Class_10C24940::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : m_Capacity / sizeof(Item_10C24BC0);
    for (int i = NewCount; i < OldCount; i++)
        m_Items[i].~Item_10C24BC0();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (Item_10C24BC0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10C24BC0), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Item_10C24BC0);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Items = (Item_10C24BC0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10C24BC0), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Item_10C24BC0);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Items[j]) Item_10C24BC0();
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10C24440 ?FUN_10c24440@Class_10C24440@@QAEXHHH@Z
void Class_10C24440::FUN_10c24440(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        if (From < To)
        {
            for (int I = From + Count; I < To + Count; I++)
            {
                Class_10BAEC80* Block = &Unknown08[I].Unknown14;
                Block->FUN_10a211e0(0);
                if (Block->m_BlockBytes)
                {
                    GetAllocator()->Virtual5(Block->Unknown08);
                    Block->Unknown08 = 0;
                    Block->m_BlockBytes = 0;
                }
            }
        }
        else if (To < From)
        {
            for (int I = To; I < From; I++)
            {
                Class_10BAEC80* Block = &Unknown08[I].Unknown14;
                Block->FUN_10a211e0(0);
                if (Block->m_BlockBytes)
                {
                    GetAllocator()->Virtual5(Block->Unknown08);
                    Block->Unknown08 = 0;
                    Block->m_BlockBytes = 0;
                }
            }
        }
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10C24440_Item));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10C24440_Item* Item = Unknown08 + I;
                if (Item)
                    memset(Item, 0, sizeof(Class_10C24440_Item));
            }
            return;
        }
        for (int I = To + Count; I < From + Count; I++)
        {
            Class_10C24440_Item* Item = Unknown08 + I;
            if (Item)
                memset(Item, 0, sizeof(Class_10C24440_Item));
        }
    }
}
