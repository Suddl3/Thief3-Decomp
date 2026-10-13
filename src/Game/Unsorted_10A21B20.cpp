// Game/Unsorted_10A21B20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A22D00.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x28 bytes; the loops clear its ten words and call its destructor.
class Class_10A214C0
{
public:
    ~Class_10A214C0();

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
};

// FUNCTION: 0x10A22D00 ?SetCount@Class_10A22D00@@QAEXH@Z
void Class_10A22D00::SetCount(int NewCount)
{
    int OldCount = Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10A214C0);
    for (int i = NewCount; i < OldCount; i++)
        m_Data[i].~Class_10A214C0();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (Class_10A214C0*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10A214C0), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10A214C0);
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
            m_Data = (Class_10A214C0*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10A214C0), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10A214C0);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10A214C0* Element = (Class_10A214C0*)((char*)m_Data + j * sizeof(Class_10A214C0));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
            Element->Unknown08 = 0;
            Element->Unknown0C = 0;
            Element->Unknown10 = 0;
            Element->Unknown14 = 0;
            Element->Unknown18 = 0;
            Element->Unknown1C = 0;
            Element->Unknown20 = 0;
            Element->Unknown24 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}
