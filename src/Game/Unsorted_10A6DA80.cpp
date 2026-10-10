// Game/Unsorted_10A6DA80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10E67938.h"
#include "Game/Class_10E6B978.h"
#include "Game/Class_10E6B9F8.h"

class Class_10E6BA00 : public Class_10E67938
{
public:
    virtual void FUN_10a6e6b0(int Type, int A, int B, int C);
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
    virtual void Virtual15(int A, int B, int C);
};

class Class_10E6BC8C
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
    virtual int Virtual10(int A);

    bool FUN_10a6e690(int A);
};

class Class_10E6B594
{
public:
    virtual ~Class_10E6B594();
};

class Class_10E6B610 : public Class_10E6B594
{
public:
    Class_10E6B610(Class_1098E330* A);

    int Unknown04;
};

class Class_10E6B978;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6B978* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A6DC50 ?FUN_10a6dc50@Class_10E6B978@@UAEXHHHH@Z
void Class_10E6B978::FUN_10a6dc50(int Msg, int A, int B, int C)
{
    switch (Msg)
    {
    case 0x26:
        FUN_10a6db10(A, B, C);
        break;
    case 3:
        DAT_10f46da0->Virtual1(this, 0x26, A, -1);
        break;
    }
}

// FUNCTION: 0x10A6DF60 ??0Class_10E6B610@@QAE@PAVClass_1098E330@@@Z
Class_10E6B610::Class_10E6B610(Class_1098E330* A)
{
    A->FUN_1098e330(0x1003f4, &Unknown04);
}

// FUNCTION: 0x10A6E5E0 ?FUN_10a6e5e0@Class_10E6B9F8@@UAEXHPAVUObject@@HH@Z
void Class_10E6B9F8::FUN_10a6e5e0(int Event, UObject* A, int B, int C)
{
    switch (Event)
    {
    case 3:
        FUN_10a6e1c0(A, B, C);
        break;
    case 51:
    case 52:
        FUN_10a6e370(A, B, C, Event);
        break;
    case 16:
        FUN_10a6e490(A, B, C, Event, 0x25c7c38);
        break;
    }
}

// FUNCTION: 0x10A6E690 ?FUN_10a6e690@Class_10E6BC8C@@QAE_NH@Z
bool Class_10E6BC8C::FUN_10a6e690(int A)
{
    return Virtual10(A) != 0;
}

// FUNCTION: 0x10A6E6B0 ?FUN_10a6e6b0@Class_10E6BA00@@UAEXHHHH@Z
void Class_10E6BA00::FUN_10a6e6b0(int Type, int A, int B, int C)
{
    if (Type != 0x26)
        Class_10E67938::FUN_10a4c470(Type, A, B, C);
    else
        Virtual15(A, B, C);
}
