// Game/Class_10E97BBC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C08810.h"
#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"
#include "Game/Class_10E97BBC.h"

void FUN_10c11ff0(FArchive& Ar, int* Value);

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C08810 ?FUN_10c08810@Class_10E97BBC@@UAEXAAVFArchive@@@Z
void Class_10E97BBC::FUN_10c08810(FArchive& Ar)
{
    Unknown04.Virtual0(Ar);
    FUN_10c11ff0(Ar, &Unknown20);
    FUN_10b052a0(Ar, &Unknown14);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown0C);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown10);
}
