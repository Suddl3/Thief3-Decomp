// Game/Unsorted_10B33E20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10B34130.h"

struct Item_10B34130
{
    int Unknown00;
    cString Unknown04;
    cString Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10B34130 ?AddItem@Class_10B34130@@QAEHPBUItem_10B34130@@@Z
int Class_10B34130::AddItem(const Item_10B34130* Item)
{
    int Index = m_Count;
    FUN_10b330d0(Index + 1);
    Item_10B34130* Dest = &m_Items[Index];
    Dest->Unknown00 = Item->Unknown00;
    Dest->Unknown04 = Item->Unknown04;
    Dest->Unknown08 = Item->Unknown08;
    Dest->Unknown0C = Item->Unknown0C;
    return Index;
}
