// Game/Unsorted_10A80E90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A80FE0.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10A80FE0_Element
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A80FE0 ?SetSize@Class_10A80FE0@@QAEXH@Z
void Class_10A80FE0::SetSize(int NewCount)
{
    int OldCount = m_Size;
    int Capacity = !m_Elements ? 0 : m_AllocBytes / sizeof(Struct_10A80FE0_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = (Struct_10A80FE0_Element*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Struct_10A80FE0_Element), 0, 0, 0, 0);
        m_AllocBytes = NewCapacity * sizeof(Struct_10A80FE0_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Elements);
            m_Elements = 0;
            m_AllocBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Elements = (Struct_10A80FE0_Element*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Struct_10A80FE0_Element), 0, 0, 0, 0);
            m_AllocBytes = NewCapacity * sizeof(Struct_10A80FE0_Element);
        }
    }
    for (int i = OldCount; i < NewCount; ++i)
    {
        Struct_10A80FE0_Element* Element = &m_Elements[i];
        if (Element)
            Element->Unknown00 = 0;
    }
    GetAllocator()->Virtual9();
    m_Size = NewCount;
}
