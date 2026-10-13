// Game/Unsorted_10926020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109262B0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x44 bytes; the loops call its destructor and clear its words.
class Class_10925880
{
public:
    ~Class_10925880();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    bool Unknown3C;
    int Unknown40;
};

// FUNCTION: 0x10926020 ?SetCount@Class_109262B0@@QAEXH@Z
void Class_109262B0::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10925880);
    for (int i = NewCount; i < OldCount; i++)
        ((Class_10925880*)m_Data)[i].~Class_10925880();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10925880), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10925880);
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
            m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10925880), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10925880);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10925880* Element = (Class_10925880*)((char*)m_Data + j * sizeof(Class_10925880));
        if (Element)
        {
            Element->Unknown0C = 0;
            Element->Unknown10 = 0;
            Element->Unknown14 = 0;
            Element->Unknown18 = 0;
            Element->Unknown1C = 0;
            Element->Unknown20 = 0;
            Element->Unknown24 = 0;
            Element->Unknown28 = 0;
            Element->Unknown2C = 0;
            Element->Unknown30 = 0;
            Element->Unknown34 = 1;
            Element->Unknown38 = 0;
            Element->Unknown3C = false;
            Element->Unknown40 = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
