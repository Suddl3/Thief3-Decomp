// Game/Class_10E98EB8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E98EB8.h"
#include "Game/Object_10BFBD00.h"
#include "Game/Class_10E98D08.h"

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

// FUNCTION: 0x10C1AC10 ?FUN_10c1ac10@Class_10E98EB8@@UAE_NH@Z
bool Class_10E98EB8::FUN_10c1ac10(int A)
{
    if (A == Unknown54)
        return false;
    return Unknown04 == A;
}

// FUNCTION: 0x10C1AC60 ?FUN_10c1ac60@Class_10E98EB8@@UAEHPAV1@@Z
int Class_10E98EB8::FUN_10c1ac60(Class_10E98EB8* Other)
{
    if (Unknown24 + 0.3f > Other->Unknown24)
        return 1;
    return 0;
}

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
