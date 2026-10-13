// Game/Unsorted_10A89BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10A73EF0_Table.h"

Class_10A73EF0_Table* FUN_10af3470();

class Class_10A89D90
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
    virtual void Virtual8();
    virtual int Virtual9();

    Class_10A73EF0_Object* FUN_10a89bc0(Class_1090A780 Name, Class_10A73EF0_Object* V);
    Class_10A73EF0_Object* FUN_10a89d90();

    int Unknown04;
    int Unknown08;
    cString Unknown0C;
};

// FUNCTION: 0x10A89D90 ?FUN_10a89d90@Class_10A89D90@@QAEPAVClass_10A73EF0_Object@@XZ
Class_10A73EF0_Object* Class_10A89D90::FUN_10a89d90()
{
    if (Unknown0C.IsEmpty())
    {
        if (Virtual9() && Unknown04)
            return FUN_10af3470()->FUN_10af33e0(Unknown08);
        return 0;
    }
    Class_10A73EF0_Object* V;
    if (Virtual9() && Unknown04)
        V = FUN_10af3470()->FUN_10af33e0(Unknown08);
    else
        V = 0;
    return FUN_10a89bc0(Unknown0C, V);
}
