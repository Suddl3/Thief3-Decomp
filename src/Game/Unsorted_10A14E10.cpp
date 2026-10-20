// Game/Unsorted_10A14E10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_10A151A0.h"

class cString;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A15060 ?FUN_10a15060@Class_10A151A0@@QAEXH@Z
void Class_10A151A0::FUN_10a15060(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(Element_10A15060);
    for (int i = NewCount; i < OldCount; i++)
        m_Elements[i].m_Items.Empty();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Element_10A15060* Block = (Element_10A15060*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Element_10A15060), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Element_10A15060);
        m_Elements = Block;
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
            Element_10A15060* Block = (Element_10A15060*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Element_10A15060), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Element_10A15060);
            m_Elements = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Element_10A15060* E = &m_Elements[j];
        if (E)
            E->Init();
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
