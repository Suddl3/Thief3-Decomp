// Game/Unsorted_10AB7710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10AB7FA0.h"
#include "Game/Class_10ABCC20.h"
#include "Game/Class_10ABCC20_Field04.h"

extern Class_10A73EF0_Table* DAT_10f3eda4;

// The item this creates: a Class_10AF4B90 set up with (0x27, DAT_10e47850) at 0x58.
struct Item_10AB7FA0
{
    char Unknown00[0x58];
    Class_10ABCC20_Field04 Unknown58;
};

// FUNCTION: 0x10AB7FA0 ?Create@Class_10AB7FA0@@QAEXHH@Z
void Class_10AB7FA0::Create(int Handle, int B)
{
    Class_10ABCC20* Item = 0;
    Class_10A73EF0_Object* Obj = DAT_10f3eda4->Unknown08[Handle & 0xffff];
    Item = (Class_10ABCC20*)Obj->Virtual51();
    new ((Item_10AB7FA0*)Item) Item_10AB7FA0;
    Obj->Virtual45(Item, B, 0);
    FUN_10b06220();
    FUN_10ad9c90(Handle, Item);
}
