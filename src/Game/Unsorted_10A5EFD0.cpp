// Game/Unsorted_10A5EFD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_1096A960.h"
#include "Game/Class_10AF7F80.h"

class Class_10A5EFD0_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual Class_10AF7F80* Virtual5();

    char Unknown04[0x14];
    Class_10AF7F80 Unknown18;
    Class_10AF7F80 Unknown24;
    int Unknown30;
    int Unknown34;
};

// FUNCTION: 0x10A5EFD0 ?FUN_10a5efd0@@YGXPAVClass_1096A960@@PAVClass_10A5EFD0_Item@@H@Z
void __stdcall FUN_10a5efd0(Class_1096A960* Owner, Class_10A5EFD0_Item* Item, int C)
{
    if (Item->Virtual5())
        Item->Virtual5()->FUN_10af7f80();
    if (Item->Unknown30)
    {
        Class_10AF7F80* Name = &Item->Unknown18;
        if (Name)
            Name->FUN_10af7f80();
    }
    if (Item->Unknown34)
    {
        Class_10AF7F80* Name = &Item->Unknown24;
        if (Name)
            Name->FUN_10af7f80();
    }
    Owner->FUN_1096a960();
}
