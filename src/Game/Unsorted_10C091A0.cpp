// Game/Unsorted_10C091A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10913D70.h"
#include "Game/Class_10C08E90.h"
#include "Game/Item_10C091A0.h"
#include "Game/Struct_10C091A0.h"

// FUNCTION: 0x10C091A0 ?Add@Class_10C08E90@@QAEHPAUItem_10C091A0@@@Z
int Class_10C08E90::Add(Item_10C091A0* Item)
{
    int Index = Unknown00;
    FUN_10c089b0(Index + 1);
    Item_10C091A0* Dest = &Unknown08[Index];
    Dest->Unknown04.Assign(&Item->Unknown04);
    Dest->Unknown0C = Item->Unknown0C;
    Dest->Unknown10 = Item->Unknown10;
    Dest->Unknown14 = Item->Unknown14;
    Dest->Unknown20 = Item->Unknown20;
    Dest->Unknown24 = Item->Unknown24;
    return Index;
}
