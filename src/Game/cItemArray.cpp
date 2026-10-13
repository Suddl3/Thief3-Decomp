// Game/cItemArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/cItemArray.h"

Class_10905A90_Member* GetAllocator();

// The element: 16 bytes, its first field a block that is freed from four bytes before its start.
class Item_1093F140
{
public:
    Item_1093F140() : Unknown00(0) {}

    ~Item_1093F140()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x1093EE90 ?Resize@cItemArray@@QAEXH@Z
void cItemArray::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : m_Capacity / sizeof(Item_1093F140);
    for (int i = NewCount; i < OldCount; i++)
        m_Items[i].~Item_1093F140();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Item_1093F140* Block = (Item_1093F140*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_1093F140), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Item_1093F140);
        m_Items = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Item_1093F140* Block = (Item_1093F140*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_1093F140), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Item_1093F140);
            m_Items = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Items[j]) Item_1093F140;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
