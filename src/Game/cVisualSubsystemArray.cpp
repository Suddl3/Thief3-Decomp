// Game/cVisualSubsystemArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/VisualSubsystem.h"
#include "Game/cVisualSubsystemArray.h"
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10BAE0C0.h"
#include "Game/FCoords.h"

Class_10905A90_Member* GetAllocator();

enum EInternal { EC_Internal };

inline void* operator new(unsigned int Size, EInternal* Mem) { return Mem; }

// FUNCTION: 0x10BAD9D0 ?Resize@cVisualSubsystemArray@@QAEXH@Z
void cVisualSubsystemArray::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : m_CapacityBytes / sizeof(VisualSubsystem);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(VisualSubsystem), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(VisualSubsystem);
        m_Items = (VisualSubsystem*)Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(VisualSubsystem), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(VisualSubsystem);
            m_Items = (VisualSubsystem*)Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        VisualSubsystem* Element = m_Items + j;
        new ((EInternal*)Element) VisualSubsystem();
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10BAE080 ?Clear@cVisualSubsystemArray@@QAEXXZ
void cVisualSubsystemArray::Clear()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_CapacityBytes = 0;
    }
}
