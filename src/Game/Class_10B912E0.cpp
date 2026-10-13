// Game/Class_10B912E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10B912E0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10DAAF90.h"
#include "Game/Class_10B91800.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10B90980 ?FUN_10b90980@Class_10B912E0@@QAEXH@Z
void Class_10B912E0::FUN_10b90980(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Elements ? 0 : Unknown04 / sizeof(Class_10DAAF90);
    for (int i = NewCount; i < OldCount; i++)
        m_Elements[i].~Class_10DAAF90();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = (Class_10DAAF90*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_10DAAF90), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10DAAF90);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Elements);
            m_Elements = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Elements = (Class_10DAAF90*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_10DAAF90), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10DAAF90);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Elements[j]) Class_10DAAF90;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10B912E0 ?Free@Class_10B912E0@@QAEXXZ
void Class_10B912E0::Free()
{
    FUN_10b90980(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Elements);
        m_Elements = 0;
        Unknown04 = 0;
    }
}
