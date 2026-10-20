// Game/Unsorted_10A67000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10A73EF0_Table.h"
// An object the table below holds: slot 51 gives the memory for a new item,
// slot 45 takes the item.
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"
#include "Game/Class_10A671D0.h"
#include "Core/Core.h"
#include "Game/Class_1098CB90.h"
#include "Game/cVolume.h"

extern void* DAT_10e47850[];

// The item 0x10A671D0 constructs: a Class_10AF4B90 set up with (0x27, DAT_10e47850).
class Class_10A671D0_Item : public Class_10AF4B90
{
public:
    Class_10A671D0_Item() { FUN_10af4b90(0x27, DAT_10e47850); }
};

extern Class_10A73EF0_Table* DAT_10f3eda4;

class cVolume;

// FUNCTION: 0x10A671D0 ?CreateItem@Class_10A671D0@@QAEXHH@Z
void Class_10A671D0::CreateItem(int Handle, int B)
{
    Class_10A671D0_Item* Item = 0;
    Class_10A73EF0_Object* Obj = DAT_10f3eda4->Unknown08[Handle & 0xffff];
    Item = (Class_10A671D0_Item*)Obj->Virtual51();
    new (Item) Class_10A671D0_Item;
    Obj->Virtual45(Item, B, 0);
    FUN_10b06220();
    FUN_10ad9c90(Handle, Item);
}
