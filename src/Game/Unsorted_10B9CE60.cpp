// Game/Unsorted_10B9CE60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7580.h"

class Class_10B9CE60_0C
{
public:
    char Unknown00[8];
    Class_10BA9FD0* Unknown08;
};

class Class_10B9CE60_18
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30(int A);
};

class Class_10B9CE60
{
public:
    void FUN_10b9ce60(int A);

    char Unknown00[0xC];
    Class_10B9CE60_0C* Unknown0C;
    int Unknown10;
    char Unknown14[4];
    Class_10B9CE60_18** Unknown18;
};

class Class_10B9CEC0_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31(int A);
};

class Class_10B9CEC0_Unknown0C
{
public:
    char Unknown00[8];
    Class_10BA9FD0* Unknown08;
};

class Class_10B9CEC0
{
public:
    void FUN_10b9cec0(int A);

    char Unknown00[0xC];
    Class_10B9CEC0_Unknown0C* Unknown0C;
    int Unknown10;
    char Unknown14[4];
    Class_10B9CEC0_Item** Unknown18;
};

// FUNCTION: 0x10B9CE60 ?FUN_10b9ce60@Class_10B9CE60@@QAEXH@Z
void Class_10B9CE60::FUN_10b9ce60(int A)
{
    if (((Class_10BB7580*)Unknown0C->Unknown08->FUN_10ba9fd0())->FUN_10bb7580())
    {
        for (int i = 0; i < Unknown10; i++)
        {
            Class_10B9CE60_18* Item = Unknown18[i];
            if (Item && Item->Virtual3() == 5)
                Item->Virtual30(A);
        }
    }
}

// FUNCTION: 0x10B9CEC0 ?FUN_10b9cec0@Class_10B9CEC0@@QAEXH@Z
void Class_10B9CEC0::FUN_10b9cec0(int A)
{
    Class_10BB7580* Obj = (Class_10BB7580*)Unknown0C->Unknown08->FUN_10ba9fd0();
    if (Obj->FUN_10bb7580())
    {
        for (int i = 0; i < Unknown10; i++)
        {
            Class_10B9CEC0_Item* Item = Unknown18[i];
            if (Item && Item->Virtual3() == 5)
                Item->Virtual31(A);
        }
    }
}
