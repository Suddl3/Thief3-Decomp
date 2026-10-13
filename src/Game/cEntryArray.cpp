// Game/cEntryArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/cEntryArray.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Entry_10946110.h"
#include "Game/Class_109434F0.h"
#include "Game/Class_10943520.h"
#include "Game/cShortArray.h"
#include "Game/Class_10946B20.h"
#include "Game/Class_10A32000.h"
#include "Game/Object_10944D50.h"
#include "Game/Class_109439A0.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10943350 {};

// FUNCTION: 0x10943350 ?Resize@cEntryArray@@QAEXH@Z
void cEntryArray::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Entries ? 0 : m_Capacity / sizeof(Entry_10946110);
    for (int i = NewCount; i < OldCount; i++)
        m_Entries[i].~Entry_10946110();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Entries = (Entry_10946110*)GetAllocator()->Virtual3(m_Entries, NewCapacity * sizeof(Entry_10946110), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Entry_10946110);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Entries);
            m_Entries = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Entries = (Entry_10946110*)GetAllocator()->Virtual3(m_Entries, NewCapacity * sizeof(Entry_10946110), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Entry_10946110);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Entries[j]) Entry_10946110;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10943560 ?Free@cEntryArray@@QAEXXZ
void cEntryArray::Free()
{
    Resize(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Entries);
        m_Entries = 0;
        m_Capacity = 0;
    }
}

// FUNCTION: 0x10946110 ?Add@cEntryArray@@QAEHPBUEntry_10946110@@@Z
int cEntryArray::Add(const Entry_10946110* Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Entries[Index] = *Item;
    return Index;
}
