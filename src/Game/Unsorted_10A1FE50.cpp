// Game/Unsorted_10A1FE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A21280.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10A21280_Element
{
    char Unknown00[0x34];
};

// FUNCTION: 0x10A21280 ?Resize@Class_10A21280@@QAEXH@Z
void Class_10A21280::Resize(int NewCount)
{
    int Capacity = !m_Buffer ? 0 : m_BufferBytes / sizeof(Struct_10A21280_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10A21280_Element), 0, 0, 0, 0);
        m_BufferBytes = NewCapacity * sizeof(Struct_10A21280_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            m_BufferBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Buffer = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10A21280_Element), 0, 0, 0, 0);
            m_BufferBytes = NewCapacity * sizeof(Struct_10A21280_Element);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
