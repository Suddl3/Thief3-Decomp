// Game/Unsorted_1090F2C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090FD40.h"

// cString as the game declares it, with the destructor's body inline.
class cString
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// FUNCTION: 0x1090F2C0 ?SetCount@Class_1090FD40@@QAEXH@Z
void Class_1090FD40::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : m_CapacityBytes / sizeof(cString);
    for (int i = NewCount; i < OldCount; i++)
    {
        cString* Slot = m_Items + i;
        Slot->~cString();
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (cString*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(cString), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(cString);
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
            m_Items = (cString*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(cString), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(cString);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        cString* Element = m_Items + j;
        if (Element)
        {
            Element->Unknown00 = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
