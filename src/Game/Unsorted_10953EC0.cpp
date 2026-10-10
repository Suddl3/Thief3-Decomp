// Game/Unsorted_10953EC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10953AC0.h"
#include "Game/Class_10953FA0.h"
#include "Game/Class_10955AA0.h"
#include "Game/Item_10953AC0.h"
#include "Game/Struct_10953FA0.h"

// FUNCTION: 0x10953FA0 ?FUN_10953fa0@Class_10953FA0@@QAEXPBUStruct_10953FA0@@@Z
void Class_10953FA0::FUN_10953fa0(const Struct_10953FA0* A)
{
    Item_10953AC0 Item;
    Item.Unknown00 = *A;
    Item.Unknown0C = Unknown54;
    Class_10953AC0* Array = &Unknown40;
    int Index = Array->Unknown00;
    Array->FUN_10953ac0(Index + 1);
    Array->Unknown08[Index] = Item;
}

// FUNCTION: 0x10955AA0 ?FUN_10955aa0@Class_10955AA0@@QAEXH@Z
void Class_10955AA0::FUN_10955aa0(int NewMode)
{
    Mode = NewMode;
    switch (NewMode)
    {
    case 2:
        Unknown14 = 1;
        Unknown10 = 0;
        break;
    case 6:
        Unknown14 = 1;
        Unknown10 = 2;
        break;
    case 4:
        Unknown14 = 0;
        Unknown10 = 0;
        break;
    case 0:
    case 8:
        Unknown14 = 0;
        Unknown10 = 2;
        break;
    default:
        Unknown14 = 0;
        Unknown10 = 2;
        break;
    }
}
