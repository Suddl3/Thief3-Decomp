// Game/Class_10E69BA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10A79E60.h"
#include "Game/Item_10A5E900.h"
#include "Game/List_10A5E900.h"
#include "Game/Class_10E69BA0.h"

class Item_10A5E900;

class Class_10A5EE10_Arg3
{
public:
    Class_10A5EE10_Arg3(unsigned char Value) : Unknown00(Value), Unknown01(Value), Unknown02(Value), Unknown03(Value) {}

    unsigned char Unknown00;
    unsigned char Unknown01;
    unsigned char Unknown02;
    unsigned char Unknown03;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A5EE10 ?FUN_10a5ee10@Class_10E69BA0@@UAEXPAUList_10A5E900@@@Z
void Class_10E69BA0::FUN_10a5ee10(List_10A5E900* List)
{
    DAT_10f35dec->Unknown40->Virtual5(4);
    for (int i = 0; i < List->Unknown00; i++)
    {
        Item_10A5E900* Item = List->Unknown08[i];
        DAT_10f35dec->Unknown40->FUN_10a7a060(&Item->Unknown2C, *Item->Virtual25(), Class_10A5EE10_Arg3(0xff), 4);
    }
}
