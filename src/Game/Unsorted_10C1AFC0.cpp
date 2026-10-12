// Game/Unsorted_10C1AFC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C1B0F0.h"
#include "Game/Class_10FF667C.h"
#include "Game/FArchive.h"
#include "Game/Class_10E98E70.h"

extern Class_10FF667C* DAT_10ff667c;

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E98D08
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

    void FUN_10c1b1a0(FArchive& Ar);
};

class Class_10E98D98 : public Class_10E98D08
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    float Unknown48[3];
};

class Class_10BAC050
{
public:
    bool FUN_10bac050(int A);
};

class Class_10E98DE0
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
    virtual bool FUN_10c1afe0();

    int Unknown04;
    Class_10BAC050* Unknown08;
};

extern float DAT_10e49984;

// FUNCTION: 0x10C1AFE0 ?FUN_10c1afe0@Class_10E98DE0@@UAE_NXZ
bool Class_10E98DE0::FUN_10c1afe0()
{
    int Value = Unknown04;
    if (Value && !Unknown08->FUN_10bac050(Value))
        return true;
    return false;
}

// FUNCTION: 0x10C1B0F0 ?FUN_10c1b0f0@Class_10C1B0F0@@QAEXM@Z
void Class_10C1B0F0::FUN_10c1b0f0(float Value)
{
    float Clamped = Value <= DAT_10e49984 ? Value : DAT_10e49984;
    Unknown2C = Clamped;
    Unknown3C = Clamped;
    Unknown34 = Clamped;
}

// FUNCTION: 0x10C1B270 ?Serialize@Class_10E98D98@@UAEXAAVFArchive@@@Z
void Class_10E98D98::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, Unknown48);
}

// FUNCTION: 0x10C1B460 ?FUN_10c1b460@Class_10E98E70@@UAE_NXZ
bool Class_10E98E70::FUN_10c1b460()
{
    if (Unknown58 != DAT_10ff667c->Unknown40)
        return true;
    return false;
}
