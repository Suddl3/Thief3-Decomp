// Game/Class_1092E930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7EDB8.h"
#include "Game/WindowManager.h"
#include "Game/Class_1092E930.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

struct Struct_1092E930_Element
{
    char Unknown00[4];
};

// FUNCTION: 0x10A51140 ?SetCount@Class_1092E930@@QAEXH@Z
void Class_1092E930::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Struct_1092E930_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~3) + 4;
        m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Struct_1092E930_Element), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Struct_1092E930_Element);
    }
    else if (NewCount <= Capacity - 4)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~3) + 4;
            m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Struct_1092E930_Element), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Struct_1092E930_Element);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
