// Game/Unsorted_10AD0210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E3D0.h"
#include "Game/Class_10AD0490.h"
#include <new>
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10AD0210.h"

extern void* DAT_10e47850[];

// The item 0x10ABCC20 constructs: a Class_10AF4B90 set up with (0x27, DAT_10e47850) at its start.
class Class_10ABCC20 : public Class_10AF4B90
{
public:
    Class_10ABCC20() { FUN_10af4b90(0x27, DAT_10e47850); }
};

extern Class_10A73EF0_Table* DAT_10f3eda4;

// FUNCTION: 0x10AD0210 ?CreateItem@Class_10AD0210@@QAEXHH@Z
void Class_10AD0210::CreateItem(int Handle, int B)
{
    Class_10ABCC20* Item = 0;
    Class_10A73EF0_Object* Obj = DAT_10f3eda4->Unknown08[Handle & 0xffff];
    Item = (Class_10ABCC20*)Obj->Virtual51();
    new (Item) Class_10ABCC20;
    Obj->Virtual45(Item, B, 0);
    FUN_10b06220();
    FUN_10ad9c90(Handle, Item);
}
