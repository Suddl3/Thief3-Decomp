// Game/Unsorted_10C50360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4F970.h"
#include <new>
#include "Game/Class_10C603E0.h"

Class_10905A90_Member* GetAllocator();

// The element of the array: a pointer, then the array it holds.
class Class_10C50360_Unknown08
{
public:
    void* Unknown00;
    Class_10C4F970 Unknown04;
};

// Game/Class_10C50EC0.h copied whole, with the items pointer typed as the
// array of elements the code walks.
class Class_10C50EC0
{
public:
    Class_10C50EC0() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10C50EC0();

    void FUN_10c50360(int Count);
    void Empty();

    int Unknown00;
    int Unknown04;
    Class_10C50360_Unknown08* Unknown08;
};

struct Item_10C50320;

// Game/Class_10C50320.h copied whole, with the constructor and the destructor the element's code inlines.
class Class_10C50320
{
public:
    Class_10C50320() : m_Count(0), Unknown04(0), m_Items(0) {}

    ~Class_10C50320()
    {
        FUN_10c4f690(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }

    int AddItem(const Item_10C50320* Item);
    void FUN_10c4f690(int NewCount);

    int m_Count;
    int Unknown04;
    Item_10C50320* m_Items;
};

// FUNCTION: 0x10C50360 ?FUN_10c50360@Class_10C50EC0@@QAEXH@Z
void Class_10C50EC0::FUN_10c50360(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : (unsigned int)Unknown04 / sizeof(Class_10C50360_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
        Unknown08[i].Unknown04.Empty();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Class_10C50360_Unknown08* Block = (Class_10C50360_Unknown08*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C50360_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C50360_Unknown08);
        Unknown08 = Block;
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
            Class_10C50360_Unknown08* Block = (Class_10C50360_Unknown08*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C50360_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C50360_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10C50360_Unknown08* Item = &Unknown08[j];
        if (Item)
        {
            Item->Unknown00 = 0;
            Item->Unknown04.Unknown00 = 0;
            Item->Unknown04.Unknown04 = 0;
            Item->Unknown04.Unknown08 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10C504A0 ?FUN_10c504a0@Class_10C603E0@@QAEXH@Z
void Class_10C603E0::FUN_10c504a0(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !m_Data ? 0 : Unknown04 / sizeof(Class_10C50320);
    for (int i = NewCount; i < OldCount; i++)
        ((Class_10C50320*)m_Data)[i].~Class_10C50320();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10C50320), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C50320);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10C50320), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C50320);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&((Class_10C50320*)m_Data)[j]) Class_10C50320;
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
