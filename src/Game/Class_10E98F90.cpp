// Game/Class_10E98F90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E98F90.h"
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
    virtual void Virtual6(int* Value);

    char Unknown04[8];
    int Unknown0C;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

// FUNCTION: 0x10C1AD90 ?Matches@Class_10E98F90@@UAE_NH@Z
bool Class_10E98F90::Matches(int A)
{
    if (A == Unknown48)
        return true;
    return Unknown04 == A;
}

// FUNCTION: 0x10C1B710 ?Serialize@Class_10E98F90@@UAEXAAVFArchive@@@Z
void Class_10E98F90::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    Ar.Virtual6(&Unknown48);
    if (Ar.Unknown0C >= 0x37)
        FUN_10b052a0(Ar, Unknown4C);
}
