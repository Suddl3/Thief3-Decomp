// Game/Class_10E970E8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E970E8.h"
#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BE9BD0 ?Serialize@Class_10E970E8@@UAEXAAVFArchive@@@Z
void Class_10E970E8::Serialize(FArchive& Ar)
{
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown04);
    FUN_10b052a0(Ar, &Unknown08);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 1);
    Ar.Serialize(&Unknown19, 1);
}
