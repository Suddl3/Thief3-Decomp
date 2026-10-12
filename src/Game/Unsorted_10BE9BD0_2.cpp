// Game/Unsorted_10BE9BD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/State_Patrol.h"

class Class_10BECE80_Target {
public:
    char Unknown00[0x1EC];
    unsigned char Unknown1EC;
};

class Class_10E92730 {
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
    virtual bool FUN_10bece80();

    Class_10BECE80_Target* Unknown04;
};

class UCanvas
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
    virtual void SetViewport(int p1);

    char Unknown04[0x74];
    int Unknown78;
};

void __stdcall FUN_109e3c90(int);

// FUNCTION: 0x10BECE80 ?FUN_10bece80@Class_10E92730@@UAE_NXZ
bool Class_10E92730::FUN_10bece80()
{
    return Unknown04->Unknown1EC == 0;
}

// FUNCTION: 0x10BECEE0 ?SetViewport@UCanvas@@UAEXH@Z
void UCanvas::SetViewport(int p1)
{
    Unknown78 = p1;
}

// FUNCTION: 0x10BECEF0 ?FUN_10becef0@State_Patrol@@UAEXXZ
void State_Patrol::FUN_10becef0()
{
    FUN_109e3c90(0);
}
