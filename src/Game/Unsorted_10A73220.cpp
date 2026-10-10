// Game/Unsorted_10A73220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10A73EF0.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10ABCC20.h"
#include "Game/Class_10ABCC20_Field04.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"
#include "Game/Class_10E6BB0C.h"

extern Class_10A73EF0_Table* DAT_10f3eda4;

// FUNCTION: 0x10A73790 ?FUN_10a73790@Class_10E6BB0C@@UAEXHHHH@Z
void Class_10E6BB0C::FUN_10a73790(int Code, int A, int B, int C)
{
    if (Code == 0x20)
        Virtual1(A, B, C);
}

// FUNCTION: 0x10A73EF0 ?FUN_10a73ef0@Class_10A73EF0@@QAEXHH@Z
void Class_10A73EF0::FUN_10a73ef0(int Handle, int B)
{
    Class_10ABCC20* Item = 0;
    Class_10A73EF0_Object* Obj = DAT_10f3eda4->Unknown08[Handle & 0xffff];
    Item = (Class_10ABCC20*)Obj->Virtual51();
    new (Item) Class_10ABCC20;
    Obj->Virtual45(Item, B, 0);
    FUN_10b06220();
    FUN_10ad9c90(Handle, Item);
}
