// Game/Class_10C0C150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0BF20.h"
#include "Core/Core.h"
#include "Game/cEntryTable.h"
#include "Game/Class_10C0C8E0.h"
#include "Game/Struct_10C0BFC0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C0BE50 ?Resize@Class_10C0C150@@QAEXH@Z
void Class_10C0C150::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Item_10C0C150);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (Item_10C0C150*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Item_10C0C150), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Item_10C0C150);
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
            m_Data = (Item_10C0C150*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Item_10C0C150), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Item_10C0C150);
        }
    }
    for (int i = OldCount; i < NewCount; i++)
    {
        Item_10C0C150* Element = m_Data + i;
        if (Element)
            Element->Unknown00 = 0;
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10C0C050 ?Clear@Class_10C0C150@@QAEXXZ
void Class_10C0C150::Clear()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x10C0C150 ?Add@Class_10C0C150@@QAEHPBUItem_10C0C150@@@Z
int Class_10C0C150::Add(const Item_10C0C150* Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Data[Index] = *Item;
    return Index;
}

// FUNCTION: 0x10C0C190 ?RemoveAt@Class_10C0C150@@QAEXH@Z
void Class_10C0C150::RemoveAt(int Index)
{
    int Last = m_Count - 1;
    Item_10C0C150 Temp = m_Data[Index];
    m_Data[Index] = m_Data[Last];
    m_Data[Last] = Temp;
    Resize(m_Count - 1);
}
