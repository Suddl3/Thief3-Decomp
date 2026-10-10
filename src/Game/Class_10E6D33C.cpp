// Game/Class_10E6D33C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10C66590.h"
#include "Game/Class_10E6D33C.h"
#include "Game/Object_10A50E10.h"
#include "Game/Object_10C66590.h"

class Class_10C66590;

class Object_10AA0F10_B
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual Class_10C66590* Virtual8();
};

// FUNCTION: 0x10AA0F10 ?FUN_10aa0f10@Class_10E6D33C@@UAEHHPAVObject_10AA0F10_B@@H@Z
int Class_10E6D33C::FUN_10aa0f10(int A, Object_10AA0F10_B* B, int C)
{
    Class_10C66590* Owner = B->Virtual8();
    if (Owner)
    {
        if ((Owner->Unknown78 & 4) && Owner->Virtual34() == 0)
            return 1;
        Object_10C66590* Item = (Object_10C66590*)Owner->FUN_10c66590();
        Object_10A50E10* Target = Item->Virtual38(Owner);
        if (Target)
            Target->Virtual58();
    }
    return 1;
}
