// Game/Class_10BAE0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAE0C0.h"
#include "Game/Class_10905A90_Member.h"
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/cVisualSubsystemArray.h"
#include "Game/FCoords.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x10 bytes, its four fields cleared by the loop.
class Class_10BADAB0_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    char Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10BADAB0 ?Resize@Class_10BAE0C0@@QAEXH@Z
void Class_10BAE0C0::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10BADAB0_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10BADAB0_Unknown08), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10BADAB0_Unknown08);
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
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10BADAB0_Unknown08), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10BADAB0_Unknown08);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10BADAB0_Unknown08* Element = (Class_10BADAB0_Unknown08*)((char*)m_Data + j * sizeof(Class_10BADAB0_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
            Element->Unknown08 = 0;
            Element->Unknown0C = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10BAE0C0 ?Free@Class_10BAE0C0@@QAEXXZ
void Class_10BAE0C0::Free()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
