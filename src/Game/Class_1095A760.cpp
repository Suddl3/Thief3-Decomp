// Game/Class_1095A760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1095A660.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10919190.h"
#include "Game/Class_1095A760.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10958A10.h"
#include "Game/Class_1095A1A0.h"
#include "Game/Class_1095A490.h"
#include "Game/Class_1095A7A0.h"

Class_10905A90_Member* GetAllocator();

struct Struct_1095A760_Element
{
    char Unknown00[0x5C];
};

// FUNCTION: 0x1095A5A0 ?SetCount@Class_1095A760@@QAEXH@Z
void Class_1095A760::SetCount(int NewCount)
{
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(Struct_1095A760_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Struct_1095A760_Element), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Struct_1095A760_Element);
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
            m_Elements = GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Struct_1095A760_Element), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Struct_1095A760_Element);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x1095A760 ?Clear@Class_1095A760@@QAEXXZ
void Class_1095A760::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Elements);
        m_Elements = 0;
        m_CapacityBytes = 0;
    }
}
