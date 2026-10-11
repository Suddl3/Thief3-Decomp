// Game/Unsorted_10A5DE40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1096A960.h"
#include "Game/Class_10A5DF10.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10E69BA0.h"
#include "Game/Struct_10A5DF10.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10A79E60.h"
#include "Game/Item_10A5E900.h"
#include "Game/List_10A5E900.h"

class Class_10A5EF80_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual Class_10AF7F80* Virtual5();
};

extern "C" unsigned int strlen(const char*);

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A5DF10 ?FUN_10a5df10@Class_10A5DF10@@QAEPAV1@ABV1@@Z
Class_10A5DF10* Class_10A5DF10::FUN_10a5df10(const Class_10A5DF10& Other)
{
    Unknown00 = Other.Unknown00;
    Unknown10 = Other.Unknown10;
    Unknown20 = Other.Unknown20;
    Unknown24 = Other.Unknown24;
    return this;
}

// FUNCTION: 0x10A5E8A0 ?FUN_10a5e8a0@Class_10E69BA0@@QAEXPAD@Z
void Class_10E69BA0::FUN_10a5e8a0(char* Text)
{
    int Length = strlen(Text);
    for (int i = 0; i < Length; i++)
    {
        if (Text[i] == '*')
            Text[i] = ' ';
    }
}

// FUNCTION: 0x10A5E900 ?FUN_10a5e900@Class_10E69BA0@@QAEXPAUList_10A5E900@@@Z
void Class_10E69BA0::FUN_10a5e900(List_10A5E900* List)
{
    DAT_10f35dec->Unknown40->Virtual5(3);
    for (int i = 0; i < List->Unknown00; i++)
    {
        Item_10A5E900* Item = List->Unknown08[i];
        DAT_10f35dec->Unknown40->FUN_10a79e60(Item->Unknown2C, Item->Unknown38, 3);
    }
}

// FUNCTION: 0x10A5EF80 ?FUN_10a5ef80@@YGXPAVClass_1096A960@@PAVClass_10A5EF80_Item@@H@Z
void __stdcall FUN_10a5ef80(Class_1096A960* Owner, Class_10A5EF80_Item* Item, int C)
{
    if (Item->Virtual5())
        Item->Virtual5()->FUN_10af7f80();
    char* Data;
    Owner->FUN_1096a960(&Data);
    if (Data)
    {
        char* Block = Data - 4;
        FUN_10905aa0()->Virtual5(Block);
    }
}
