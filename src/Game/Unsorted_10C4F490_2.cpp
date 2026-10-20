// Game/Unsorted_10C4F490_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10C50320.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Game/Class_10C4E970.h copied whole, with the destructor the element's code inlines.
class Class_10C4E970
{
public:
    Class_10C4E970() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10C4E970()
    {
        FUN_10c4d3c0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10c4d3c0(int Count);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// Game/Item_10C50320.h copied whole, with the constructor the element's code inlines.
struct Item_10C50320
{
public:
    Item_10C50320()
    {
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown14 = 1.0f;
    }
    ~Item_10C50320() {}

    Class_10C4E970 Unknown00;
    int Unknown0C;
    int Unknown10;
    float Unknown14;
};

// FUNCTION: 0x10C4F690 ?FUN_10c4f690@Class_10C50320@@QAEXH@Z
void Class_10C50320::FUN_10c4f690(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : Unknown04 / sizeof(Item_10C50320);
    for (int i = NewCount; i < OldCount; i++)
        m_Items[i].~Item_10C50320();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Item_10C50320* Block = (Item_10C50320*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10C50320), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10C50320);
        m_Items = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Item_10C50320* Block = (Item_10C50320*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10C50320), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C50320);
            m_Items = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Items[j]) Item_10C50320;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
