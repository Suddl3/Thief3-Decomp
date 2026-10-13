// Game/Class_10AB90F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AB90F0.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x30 bytes; the loops call its destructor and clear its words.
class Class_10AB8BE0
{
public:
    ~Class_10AB8BE0();

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
};

// FUNCTION: 0x10AB8E90 ?FUN_10ab8e90@Class_10AB90F0@@QAEXH@Z
void Class_10AB90F0::FUN_10ab8e90(int NewCount)
{
    int OldCount = Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10AB8BE0);
    for (int i = NewCount; i < OldCount; i++)
        m_Data[i].~Class_10AB8BE0();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (Class_10AB8BE0*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10AB8BE0), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10AB8BE0);
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
            m_Data = (Class_10AB8BE0*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10AB8BE0), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10AB8BE0);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10AB8BE0* Element = (Class_10AB8BE0*)((char*)m_Data + j * sizeof(Class_10AB8BE0));
        if (Element)
        {
            Element->Unknown18 = 0;
            Element->Unknown1C = 0;
            Element->Unknown20 = 0;
            Element->Unknown24 = 0;
            Element->Unknown28 = 0;
            Element->Unknown2C = 0;
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
            Element->Unknown08 = 0;
            Element->Unknown0C = 0;
            Element->Unknown10 = -1;
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}

// FUNCTION: 0x10AB90F0 ?Free@Class_10AB90F0@@QAEXXZ
void Class_10AB90F0::Free()
{
    FUN_10ab8e90(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
