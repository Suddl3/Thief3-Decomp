// Game/Unsorted_10A37C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A37E80.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Object_10A37820.h"
#include "Game/Object_10A37860.h"
#include "Game/Struct_10A37860.h"

class Class_10E666A0;

class Class_10A37DC0_Grand
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
};

class Class_10A37DC0_Child
{
public:
    virtual bool Virtual0(Class_10E666A0* Owner, int A, int B, int C);
    virtual Class_10A37DC0_Grand* Virtual1();
};

class Class_10A37DC0_Handler
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A, int B, Class_10E666A0* Owner);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E666A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool ChangeState(int A, int B, int C);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual Class_10A37DC0_Child* Virtual12();

    char Unknown04[0x1C];
    Class_10A37DC0_Handler* m_Handler;
    int Unknown24;
    Class_10A37DC0_Handler* m_FallbackHandler;
};

extern float DAT_10eafbdc;

class Class_10A37E80_Unknown20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(float A);
};

// FUNCTION: 0x10A37DC0 ?ChangeState@Class_10E666A0@@UAE_NHHH@Z
bool Class_10E666A0::ChangeState(int A, int B, int C)
{
    int Result = 0;
    if (Virtual12()->Virtual1())
        Result = Virtual12()->Virtual1()->Virtual4();
    if (Virtual12()->Virtual0(this, A, B, C))
    {
        if (m_Handler || m_FallbackHandler)
        {
            int Other = 0;
            if (Virtual12()->Virtual1())
                Other = Virtual12()->Virtual1()->Virtual4();
            Class_10A37DC0_Handler* Handler = m_Handler;
            if (!Handler)
                Handler = m_FallbackHandler;
            Handler->Virtual3(Other, Result, this);
        }
        DAT_10f46da0->Virtual5(0x80, 0, -1, 0);
        return true;
    }
    return false;
}

// FUNCTION: 0x10A37E80 ?FUN_10a37e80@Class_10A37E80@@QAE_NPAM@Z
bool Class_10A37E80::FUN_10a37e80(float* P)
{
    Object_10A37820* First = Virtual12();
    if (!First)
        return false;
    Object_10A37860* Second = First->Virtual1();
    if (!Second)
        return false;
    Struct_10A37860* Third = Second->Virtual4();
    if (!Third)
        return false;
    if (Third->Unknown30 == DAT_10eafbdc && Third->Unknown0C == 3)
        return false;
    Object_10A37820* Fourth = Virtual12();
    if (!Fourth)
        return false;
    Object_10A37860* Fifth = Fourth->Virtual1();
    if (!Fifth)
        return false;
    Class_10A37E80_Unknown20* Target = Unknown20 ? Unknown20 : Unknown28;
    if (!Target)
        return false;
    float Value = Fifth->Virtual3() / Fifth->Virtual4()->Unknown30;
    *P = Value;
    return Target->Virtual7(Value);
}
