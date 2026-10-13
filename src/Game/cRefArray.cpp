// Game/cRefArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRefArray.h"
#include "Game/Class_10A32AB0_Element.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A322B0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A32370 ?SetCount@cRefArray@@QAEXH@Z
void cRefArray::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(Class_10A32AB0_Element*);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_10A32AB0_Element** Slot = m_Elements + i;
        if (*Slot)
        {
            (*Slot)->Virtual2();
        }
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = (Class_10A32AB0_Element**)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_10A32AB0_Element*), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10A32AB0_Element*);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Elements);
            m_Elements = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Elements = (Class_10A32AB0_Element**)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_10A32AB0_Element*), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10A32AB0_Element*);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10A32AB0_Element** Element = m_Elements + j;
        if (Element)
        {
            *Element = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10A32AB0 ?Append@cRefArray@@QAEHPAPAVClass_10A32AB0_Element@@@Z
int cRefArray::Append(Class_10A32AB0_Element** A)
{
    int Index = m_Count;
    SetCount(Index + 1);
    Class_10A32AB0_Element* Old = m_Elements[Index];
    Class_10A32AB0_Element* New = *A;
    m_Elements[Index] = New;
    if (New)
        New->Virtual1();
    if (Old)
        Old->Virtual2();
    return Index;
}
