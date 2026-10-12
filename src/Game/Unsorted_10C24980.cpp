// Game/Unsorted_10C24980.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAEC80.h"
#include "Game/Class_10C24940.h"

struct Struct_10C24BC0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// An element of 0x24 bytes.
struct Item_10C24BC0
{
    int Unknown00;
    Struct_10C24BC0 Unknown04;
    int Unknown10;
    Class_10BAEC80 Unknown14;
    int Unknown20;
};

// FUNCTION: 0x10C24BC0 ?AddItem@Class_10C24940@@QAEHABUItem_10C24BC0@@@Z
int Class_10C24940::AddItem(const Item_10C24BC0& Item)
{
    int Index = m_Count;
    SetCount(Index + 1);
    Item_10C24BC0* Dest = &m_Items[Index];
    Dest->Unknown00 = Item.Unknown00;
    Dest->Unknown04 = Item.Unknown04;
    Dest->Unknown10 = Item.Unknown10;
    Dest->Unknown14.CopyFrom(Item.Unknown14);
    Dest->Unknown20 = Item.Unknown20;
    return Index;
}
