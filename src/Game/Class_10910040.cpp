// Game/Class_10910040.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10910040.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The element: 8 bytes, two ints; shrinking calls its method on each one dropped.
class Class_1090ECF0
{
public:
    void FUN_1090ecf0();

    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x1090FD70 ?SetCount@Class_10910040@@QAEXH@Z
void Class_10910040::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_1090ECF0);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_1090ECF0* Element = (Class_1090ECF0*)((char*)m_Data + i * sizeof(Class_1090ECF0));
        Element->FUN_1090ecf0();
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_1090ECF0), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_1090ECF0);
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
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_1090ECF0), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_1090ECF0);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_1090ECF0* Element = (Class_1090ECF0*)((char*)m_Data + j * sizeof(Class_1090ECF0));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10910040 ?Empty@Class_10910040@@QAEXXZ
void Class_10910040::Empty()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
