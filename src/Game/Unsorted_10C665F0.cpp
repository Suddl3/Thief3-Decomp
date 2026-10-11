// Game/Unsorted_10C665F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C56E40.h"

class Class_10C66610_Item
{
public:
    char Unknown00[0x4];
    int Unknown04;
};

class Class_10C66610_Base
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C66610_A : public Class_10C66610_Base
{
public:
    virtual void Virtual3(Class_10C66610_Item* Item);
};

class Class_10C66610_B : public Class_10C66610_Base
{
public:
    virtual int Virtual3();
};

class Class_10C66610_Obj
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual Class_10C56E40 Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual Class_10C56E40 Virtual27(Class_10C56E40& Owner);
};

class Class_10C4B2A0
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual Class_10C66610_Obj* Virtual14();

    char Unknown04[0x7C];
};

Class_10C4B2A0* FUN_10c4c2d0();

Class_10C66610_Item* FUN_10d3f2e0(int A);

void FUN_10d3f2c0(Class_10C66610_Item** Item);

class Class_10C66610
{
public:
    void FUN_10c66610(int A);

    char Unknown00[0x18];
    int Unknown18;
    char Unknown1C[0x54];
    int Unknown70;
};

// FUNCTION: 0x10C66610 ?FUN_10c66610@Class_10C66610@@QAEXH@Z
void Class_10C66610::FUN_10c66610(int A)
{
    Class_10C66610_Obj* Obj = FUN_10c4c2d0()->Virtual14();
    Class_10C66610_Item* Item = FUN_10d3f2e0(1);
    Item->Unknown04 = A;
    Class_10C56E40 Owner = Obj->Virtual21();
    ((Class_10C66610_A*)Owner.Unknown00)->Virtual3(Item);
    Class_10C56E40 Target = Obj->Virtual27(Owner);
    Unknown70 = ((Class_10C66610_B*)Target.Unknown00)->Virtual3();
    FUN_10d3f2c0(&Item);
    Unknown18 = A;
}
