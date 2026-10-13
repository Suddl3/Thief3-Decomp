// Game/Class_10E94E00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8BE68.h"
#include "Game/Class_10E94E00.h"

class UObject;

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(UObject** Value);
    virtual void Virtual7(void* V);

    char Unknown04[8];
    int Unknown0C;
    char Unknown10[4];
    int Unknown14;
    int Unknown18;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

// FUNCTION: 0x10BDBA70 ?FUN_10bdba70@Class_10E94E00@@UAEXAAVFArchive@@@Z
void Class_10E94E00::FUN_10bdba70(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown54, 4);
    Ar.Serialize(&Unknown58, 4);
    FUN_10b052a0(Ar, &Unknown5C);
    Ar.Serialize(&Unknown68, 1);
    Ar.Serialize(&Unknown6C, 4);
    if (Ar.Unknown18 != 0 || Ar.Unknown0C >= 0x54)
    {
        Ar.Serialize(&Unknown70, 4);
        Ar.Serialize(&Unknown74, 4);
    }
    if (Ar.Unknown0C >= 0x67)
        Ar.Serialize(&Unknown79, 1);
}
