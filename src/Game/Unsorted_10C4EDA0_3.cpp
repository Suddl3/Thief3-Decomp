// Game/Unsorted_10C4EDA0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4E970.h"
#include "Game/Class_10C4F970.h"
#include "Game/Class_10C4F9B0.h"
#include "Game/Class_10C50320.h"
#include "Game/Item_10C50320.h"

// FUNCTION: 0x10C4F9B0 ?FUN_10c4f9b0@Class_10C4F9B0@@QAEXXZ
void Class_10C4F9B0::FUN_10c4f9b0()
{
    Unknown04.Empty();
}

// FUNCTION: 0x10C50320 ?FUN_10c50320@Class_10C50320@@QAEHPBUItem_10C50320@@@Z
int Class_10C50320::FUN_10c50320(const Item_10C50320* Item)
{
    int Index = Unknown00;
    FUN_10c4f690(Index + 1);
    Item_10C50320* Dest = &Unknown08[Index];
    Dest->Unknown0C = Item->Unknown0C;
    Dest->Unknown00.FUN_10c4e910(&Item->Unknown00);
    Dest->Unknown10 = Item->Unknown10;
    Dest->Unknown14 = Item->Unknown14;
    return Index;
}
