// Game/Class_10E98FD8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"
#include "Game/Class_10E98D08.h"

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10E98FD8 : public Class_10E98D08
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    int Unknown48;
    void* Unknown4C;
};

// FUNCTION: 0x10C1B790 ?Serialize@Class_10E98FD8@@UAEXAAVFArchive@@@Z
void Class_10E98FD8::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    Ar.Serialize(&Unknown48, 4);
    if (Ar.Unknown0C >= 0x6a)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown4C);
}
