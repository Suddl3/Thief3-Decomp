// Game/Unsorted_109435D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109435D0.h"
#include "Game/Class_10943600.h"
#include "Game/Item_10943600.h"

struct Struct_109435D0
{
    char Unknown00[0x30];
};

// FUNCTION: 0x109435D0 ?FUN_109435d0@Class_109435D0@@QAEHABUStruct_109435D0@@@Z
int Class_109435D0::FUN_109435d0(const Struct_109435D0& Item)
{
    int Index = Unknown00;
    FUN_10942d20(Index + 1);
    Unknown08[Index] = Item;
    return Index;
}

// FUNCTION: 0x10943600 ?FUN_10943600@Class_10943600@@QAEHPBUItem_10943600@@@Z
int Class_10943600::FUN_10943600(const Item_10943600* Item)
{
    int Index = Unknown00;
    FUN_10da4f50(Index + 1);
    Unknown08[Index] = *Item;
    return Index;
}
