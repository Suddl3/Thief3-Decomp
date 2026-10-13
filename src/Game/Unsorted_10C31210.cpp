// Game/Unsorted_10C31210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C32330.h"
#include "Game/Class_10C49740.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

extern float DAT_10eafbdc;

struct Entry_10C32C30;

struct Struct_10C32330
{
    int Unknown00;
    int* Unknown04;
    int* Unknown08;
};

class Class_10C31210_Unknown1C
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
    virtual void Virtual16(float A);
    virtual float Virtual17();

    char Unknown04[0x8];
};

class Class_10C31210_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();

    char Unknown04[0x18];
    Class_10C31210_Unknown1C Unknown1C;
    char Unknown28[0x8];
    Class_10C31210_Unknown1C Unknown30;
    Class_10C31210_Unknown1C Unknown3C;
};

class Class_10C31210_Unknown0A8
{
public:
    char Unknown00[0x8];
    Class_10C31210_Unknown08* Unknown08;
};

class Class_10C31210
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
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual Class_10C7D570* Virtual34(int A);

    void FUN_10c31210(int A);

    char Unknown04[0xA4];
    Class_10C31210_Unknown0A8* Unknown0A8;
    char Unknown0AC[0x64];
    float Unknown110;
};

// FUNCTION: 0x10C31210 ?FUN_10c31210@Class_10C31210@@QAEXH@Z
void Class_10C31210::FUN_10c31210(int A)
{
    if (Unknown0A8 == 0)
        return;
    Class_10C31210_Unknown08* Obj = Unknown0A8->Unknown08;
    if (Obj == 0)
        return;
    Class_10C31210_Unknown1C* S = 0;
    switch (Obj->Virtual5())
    {
    case 0:
        S = &Obj->Unknown30;
        break;
    case 1:
        S = &Obj->Unknown3C;
        break;
    case 2:
        S = &Obj->Unknown1C;
        break;
    }
    if (S == 0)
        return;
    if (!(Unknown110 <= 0.0f))
    {
        float L = S->Virtual17();
        L = Virtual34(0x401007d6)->FUN_10dbd510()->GetFloat() * (Unknown110 - L) + L;
        S->Virtual16(L);
    }
}

// FUNCTION: 0x10C32330 ?SumValues@Class_10C32330@@QAEMPAUStruct_10C32330@@@Z
float Class_10C32330::SumValues(Struct_10C32330* Arg)
{
    float Sum = 0.0f;
    for (int* P = Arg->Unknown04; P != Arg->Unknown08; P++)
    {
        float Value = 0.0f;
        float Item = !FUN_10c49740(P, (Entry_10C32C30**)&Value) ? DAT_10eafbdc : Value;
        Sum = Item + Sum;
    }
    return Sum;
}
