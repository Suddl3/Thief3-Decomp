// Game/Unsorted_10C1B130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FArchive.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"

extern float DAT_10e49984;

class Class_10E98D08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
    virtual void Virtual7();
    virtual float FUN_10c1b130(Class_10E98D08* Other);

    char Unknown04[0x24];
    float Unknown28;
    float Unknown2C;
    char Unknown30[0x4];
    float Unknown34;
    char Unknown38[0x4];
    float Unknown3C;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

extern Class_10FF667C* DAT_10ff667c;

// Class_10C1B1A0 copied whole from include/Game/Class_10C1B1A0.h, with the padding typed as the fields this function uses.
class Class_10C1B1A0
{
public:
    virtual ~Class_10C1B1A0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();

    void FUN_10c1b1a0(FArchive& Ar);

    int Unknown04;
    int Unknown08;
    FVector Unknown0C;
    FVector Unknown18;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    char Unknown44;
    char Unknown45;
    char Unknown46;
    char Unknown47;
};

// FUNCTION: 0x10C1B130 ?FUN_10c1b130@Class_10E98D08@@UAEMPAV1@@Z
float Class_10E98D08::FUN_10c1b130(Class_10E98D08* Other)
{
    if (Other->Unknown28 > Unknown28)
        Unknown28 = Other->Unknown28;
    float OtherValue = Other->Virtual6(0);
    float Value = Virtual6(0) + OtherValue;
    if (!(Value <= DAT_10e49984))
        Value = DAT_10e49984;
    Unknown2C = Value;
    Unknown3C = Value;
    Unknown34 = Value;
    return Other->Virtual6(1);
}

// FUNCTION: 0x10C1B1A0 ?FUN_10c1b1a0@Class_10C1B1A0@@QAEXAAVFArchive@@@Z
void Class_10C1B1A0::FUN_10c1b1a0(FArchive& Ar)
{
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown04);
    FUN_10b052a0(Ar, &Unknown0C);
    FUN_10b052a0(Ar, &Unknown18);
    Ar.Serialize(&Unknown24, 4);
    Ar.Serialize(&Unknown28, 4);
    Ar.Serialize(&Unknown2C, 4);
    Ar.Serialize(&Unknown30, 4);
    Ar.Serialize(&Unknown34, 4);
    Ar.Serialize(&Unknown38, 4);
    Ar.Serialize(&Unknown3C, 4);
    Ar.Serialize(&Unknown40, 4);
    Ar.Serialize(&Unknown44, 1);
    Ar.Serialize(&Unknown45, 1);
    Ar.Serialize(&Unknown46, 1);
}
