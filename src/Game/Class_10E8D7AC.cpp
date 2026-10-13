// Game/Class_10E8D7AC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10E8D7AC
{
public:
    Class_10E8D7AC();
    virtual void FUN_10c1d6d0(FArchive& Ar);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    char Unknown18;
    char Pad19[0x3];
    int Unknown1C;
    int Unknown20;
};

// FUNCTION: 0x10C1D6D0 ?FUN_10c1d6d0@Class_10E8D7AC@@UAEXAAVFArchive@@@Z
void Class_10E8D7AC::FUN_10c1d6d0(FArchive& Ar)
{
    FUN_10b052a0(Ar, &Unknown04);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 1);
    Ar.Serialize(&Unknown1C, 4);
    unsigned char Key = Unknown10;
    Ar.Serialize(&Key, 1);
    if (Ar.Unknown14)
        Unknown10 = Key;
    unsigned char Key2 = Unknown20;
    Ar.Serialize(&Key2, 1);
    if (Ar.Unknown14)
        Unknown20 = Key2;
}
