// Game/Unsorted_10C60420_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C50320.h"
#include "Game/Class_10C60480.h"

struct Item_10C50320;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C60420 ?ClearItems@Class_10C60480@@QAEXXZ
void Class_10C60480::ClearItems()
{
    for (int i = 0; i < m_NumItems; i++)
    {
        Class_10C50320* Item = &m_Items[i];
        Item->FUN_10c4f690(0);
        if (Item->Unknown04)
        {
            GetAllocator()->Virtual5(Item->Unknown08);
            Item->Unknown08 = 0;
            Item->Unknown04 = 0;
        }
    }
    m_NumItems = 0;
}
