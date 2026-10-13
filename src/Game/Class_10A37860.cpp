// Game/Class_10A37860.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Object_10A37820.h"
#include "Game/Object_10A37860.h"
#include "Game/Struct_10A37860.h"

class Class_10A37860
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(bool A);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual Object_10A37820* Virtual12();

    void FUN_10a37820();
    bool FUN_10a37860();

    char Unknown04[0x20];
    int Unknown24;
};

extern float DAT_10eafbdc;

// FUNCTION: 0x10A37820 ?FUN_10a37820@Class_10A37860@@QAEXXZ
void Class_10A37860::FUN_10a37820()
{
    Object_10A37820* Object = Virtual12();
    if (Object && Object->Virtual4())
        return;
    if (!Unknown24)
        Virtual3(true);
    else
        Virtual3(false);
}

// FUNCTION: 0x10A37860 ?FUN_10a37860@Class_10A37860@@QAE_NXZ
bool Class_10A37860::FUN_10a37860()
{
    Object_10A37820* First = Virtual12();
    if (First)
    {
        Object_10A37860* Second = First->Virtual1();
        if (Second)
        {
            Struct_10A37860* Third = Second->Virtual4();
            if (Third)
                return Third->Unknown30 == DAT_10eafbdc && Third->Unknown0C == 3;
        }
    }
    return true;
}
