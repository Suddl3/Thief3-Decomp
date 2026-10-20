// Game/Unsorted_10A32940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32A70.h"
#include "Game/Class_10A32BF0.h"
#include "Game/Class_10A32D60.h"
#include <new>

Class_10905A90_Member* GetAllocator();

struct Item_10A32A70;

// The object the element points at: the virtuals the code calls, with the element as the argument.
class Class_10A32940_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Item_10A32A70* A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Item_10A32A70* A);
};

// The element: the object and three ints.
struct Item_10A32A70
{
    Item_10A32A70() : Unknown00(0), Unknown04(-1), Unknown08(-1), Unknown0C(-1) {}

    Class_10A32940_Unknown00* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A32940 ?SetCount@Class_10A32A70@@QAEXH@Z
void Class_10A32A70::SetCount(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Item_10A32A70);
    for (int i = NewCount; i < OldCount; i++)
    {
        Item_10A32A70* Item = &((Item_10A32A70*)m_Data)[i];
        if (Item->Unknown00)
        {
            if (Item->Unknown00->Virtual7(Item))
            {
                Item->Unknown00->Virtual1(Item);
                Item->Unknown04 = -1;
                Item->Unknown08 = -1;
            }
        }
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Item_10A32A70), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Item_10A32A70);
        m_Data = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Item_10A32A70), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Item_10A32A70);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (((Item_10A32A70*)m_Data) + j) Item_10A32A70;
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10A32A70 ?Clear@Class_10A32A70@@QAEXXZ
void Class_10A32A70::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
