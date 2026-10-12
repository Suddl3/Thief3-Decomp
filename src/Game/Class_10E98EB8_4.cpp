// Game/Class_10E98EB8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Object_10BFBD00.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* V);

    char Unknown04[8];
    int Unknown0C;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

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

class Class_10E98EB8 : public Class_10E98D08
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    float Unknown48[3];
    int Unknown54;
};

// FUNCTION: 0x10C1B530 ?Serialize@Class_10E98EB8@@UAEXAAVFArchive@@@Z
void Class_10E98EB8::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, Unknown48);
    if (Ar.Unknown0C >= 0x3f)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown54);
    else
        Ar.Virtual6(&Unknown54);
}
