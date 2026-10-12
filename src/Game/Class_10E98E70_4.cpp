// Game/Class_10E98E70_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first
#include "Core/Core.h"
#include "Game/Class_10C1B1A0.h"
#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"
#include "Game/Class_10E98E70.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C1B4D0 ?Serialize@Class_10E98E70@@UAEXAAVFArchive@@@Z
void Class_10E98E70::Serialize(FArchive& Ar)
{
    Class_10C1B1A0::FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, &Unknown48);
    Ar.Serialize(&Unknown54, 4);
    Ar.Virtual7(&Unknown58);
    Ar.Serialize(&Unknown5C, 1);
    if (Ar.Unknown0C >= 0x6A)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &m_Reference);
}
