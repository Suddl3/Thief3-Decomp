// Game/Unsorted_10BE1D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C08E80.h"
#include "Game/Class_10E95AC8.h"
#include "Game/Class_10FF667C.h"

extern Class_10FF667C* DAT_10ff667c;

class Class_10E95780
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
    virtual void FUN_10be2de0(unsigned char p1);

    void FUN_10be2a70();

    char Unknown04[0x45];
    unsigned char Unknown49;
};

extern void* DAT_10e95be8[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class State_FrobAlarm : public Class_10E90D70
{
public:
    State_FrobAlarm* FUN_10be2df0(int A, int B, int C);

    int Unknown40;
    int Unknown44;
};

// FUNCTION: 0x10BE1EF0 ?FUN_10be1ef0@Class_10E95AC8@@UAEXXZ
void Class_10E95AC8::FUN_10be1ef0()
{
    DAT_10ff667c->Unknown24->FUN_10c08e80();
}

// FUNCTION: 0x10BE2DE0 ?FUN_10be2de0@Class_10E95780@@UAEXE@Z
void Class_10E95780::FUN_10be2de0(unsigned char p1)
{
    Unknown49 = p1;
    FUN_10be2a70();
}

// FUNCTION: 0x10BE2DF0 ?FUN_10be2df0@State_FrobAlarm@@QAEPAV1@HHH@Z
State_FrobAlarm* State_FrobAlarm::FUN_10be2df0(int A, int B, int C)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown00 = DAT_10e95be8;
    Unknown40 = C;
    Unknown44 = 0;
    return this;
}
