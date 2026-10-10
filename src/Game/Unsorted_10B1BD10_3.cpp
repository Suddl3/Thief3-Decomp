// Game/Unsorted_10B1BD10_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56E40_Field00.h"

class Object_10B1BD10_Field08
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
    virtual void Virtual9();
    virtual void Virtual10();
};

class Object_10B1BD10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    int Unknown04;
    Object_10B1BD10_Field08* Unknown08;
};

class Class_10C56E40
{
public:
    Class_10C56E40() : Unknown00(0) {}
    ~Class_10C56E40()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }

    Class_10C56E40_Field00* Unknown00;
};

class Class_10E79488
{
public:
    virtual void Virtual0();
    virtual void FUN_10b1bd10();

    int Unknown04;
    Object_10B1BD10* Unknown08;
};

// FUNCTION: 0x10B1BD10 ?FUN_10b1bd10@Class_10E79488@@UAEXXZ
void Class_10E79488::FUN_10b1bd10()
{
    if (Unknown08)
        Unknown08->Unknown08->Virtual10();
    Class_10C56E40 Holder;
    Object_10B1BD10* Ptr = Unknown08;
    Unknown08 = 0;
    if (Ptr)
        Ptr->Virtual2();
}
