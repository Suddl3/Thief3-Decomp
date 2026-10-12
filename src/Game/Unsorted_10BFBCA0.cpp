// Game/Unsorted_10BFBCA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8D7C0.h"
#include "Game/Class_10E97A54.h"
#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BFBD00 ?Serialize@Class_10E8D7C0@@UAEXAAVFArchive@@@Z
void Class_10E8D7C0::Serialize(FArchive& Ar)
{
    FUN_10b052a0(Ar, &Unknown08);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown04);
}

// FUNCTION: 0x10BFBE60 ?Serialize@Class_10E97A54@@UAEXAAVFArchive@@@Z
void Class_10E97A54::Serialize(FArchive& Ar)
{
    Ar.Serialize(&Unknown04, 4);
    Ar.Serialize(&Unknown08, 4);
}
