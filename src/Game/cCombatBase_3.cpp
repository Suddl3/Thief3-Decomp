// Game/cCombatBase_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"
#include "Game/cString.h"
#include "Game/Struct_10BCB770_Value.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

void* FUN_10b232e0(void* A, void* B);

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class cCombatBase : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x3C];
    int Unknown40;
    int Unknown44;
    float Unknown48;
    Struct_10BCB770_Value Unknown4C;
    bool Unknown58;
    char Pad59[0x3];
    float Unknown5C;
    bool Unknown60;
    char Pad61[0x3];
    float Unknown64;
    cString Unknown68;
    float Unknown6C;
};

// FUNCTION: 0x10BD95B0 ?Serialize@cCombatBase@@UAEXAAVFArchive@@@Z
void cCombatBase::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown40, 4);
    Ar.Serialize(&Unknown44, 4);
    Ar.Serialize(&Unknown48, 4);
    FUN_10b052a0(Ar, &Unknown4C);
    Ar.Serialize(&Unknown58, 1);
    Ar.Serialize(&Unknown60, 1);
    Ar.Serialize(&Unknown5C, 4);
    Ar.Serialize(&Unknown64, 4);
    FUN_10b232e0(&Ar, &Unknown68);
}
