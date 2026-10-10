// Game/Unsorted_10A2FCD0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A30530.h"

struct Item_10A30A70
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A30A70 ?FUN_10a30a70@Class_10A30530@@QAEHPBUItem_10A30A70@@@Z
int Class_10A30530::FUN_10a30a70(const Item_10A30A70* Item)
{
    int Index = Unknown00;
    FUN_10a30530(Index + 1);
    Unknown08[Index] = *Item;
    return Index;
}
