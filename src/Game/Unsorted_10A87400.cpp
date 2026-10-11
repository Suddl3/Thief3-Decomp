// Game/Unsorted_10A87400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10AA3520.h"

extern Struct_10AA3520* DAT_10f35dec;

extern class Class_10A854C0* DAT_10f3a198;

class Class_10A854C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
    virtual void Virtual4();
    virtual bool Virtual5(int A);
    virtual void Virtual6(int A);
};

class Class_10A86300
{
public:
    int FUN_10a87340(int A);

    int Unknown00;
};

struct Struct_10A87A70
{
    char Unknown00[0x8];
    int Unknown08;
};

extern Class_10A86300 DAT_10f3a1a0;

extern Struct_10A87A70* DAT_10f3a1a4;

class Class_10E6C390
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
    virtual void Virtual4();
    virtual bool Virtual5(int A);
};

Class_10E6C390* FUN_10a86080();

class Class_10B1BD70
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
    virtual bool Virtual14(int A, void* B);
    virtual bool Virtual15(int A);
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual bool Virtual19(int A);
};

// FUNCTION: 0x10A87950 ?FUN_10a87950@@YAXH@Z
void FUN_10a87950(int A)
{
    if (DAT_10f35dec->UnknownBC->Virtual15(A))
        return;
    if (DAT_10f3a198)
    {
        DAT_10f3a198->Virtual6(A);
        if (DAT_10f3a198->Virtual3())
            return;
        if (DAT_10f3a1a0.Unknown00 <= 0)
            return;
        A = DAT_10f3a1a4 ? DAT_10f3a1a4->Unknown08 : 0;
        if (!DAT_10f35dec->UnknownBC->Virtual19(A))
            return;
        if (DAT_10f35dec->UnknownBC->Virtual14(A, DAT_10f3a198))
            return;
        if (DAT_10f3a198->Virtual5(A))
            DAT_10f3a1a0.FUN_10a87340(A);
    }
    else
    {
        if (DAT_10f3a1a0.Unknown00 <= 0)
            return;
        A = DAT_10f3a1a4 ? DAT_10f3a1a4->Unknown08 : 0;
        if (!DAT_10f35dec->UnknownBC->Virtual19(A))
            return;
        if (DAT_10f35dec->UnknownBC->Virtual14(A, FUN_10a86080()))
            return;
        if (FUN_10a86080()->Virtual5(A))
            DAT_10f3a1a0.FUN_10a87340(A);
    }
}
