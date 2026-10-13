// Game/cStateMeleeCombat_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);

    char Unknown04[8];
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

void FUN_10af88d0(FArchive& Ar, void* Value);

class cStateMeleeCombat : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown4C[8];
    int Unknown54;
    int Unknown58;
};

// FUNCTION: 0x10BF6C00 ?Serialize@cStateMeleeCombat@@UAEXAAVFArchive@@@Z
void cStateMeleeCombat::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown08, 4);
    FUN_10af88d0(Ar, &Unknown0C);
    unsigned char Local = Unknown54;
    Ar.Serialize(&Local, 1);
    if (Ar.Unknown14)
        Unknown54 = Local;
    if (Ar.Unknown18 || Ar.Unknown0C >= 0x57)
        Ar.Serialize(&Unknown58, 4);
}
