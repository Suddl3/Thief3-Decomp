// Game/Unsorted_10BDF460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10E95288 : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown4C[8];
    int Unknown54;
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    int Unknown64;
};

// FUNCTION: 0x10BDF580 ?Serialize@Class_10E95288@@UAEXAAVFArchive@@@Z
void Class_10E95288::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    if (Ar.Unknown0C >= 0x37)
    {
        Ar.Serialize(&Unknown04, 4);
        Ar.Serialize(&Unknown08, 4);
    }
    FUN_10b052a0(Ar, &Unknown0C);
    Ar.Serialize(&Unknown54, 4);
    Ar.Serialize(&Unknown58, 4);
    Ar.Serialize(&Unknown5C, 4);
    Ar.Serialize(&Unknown60, 4);
    Ar.Serialize(&Unknown64, 4);
}
