// Game/Unsorted_10C1F440.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10C1F490.h"
#include "Game/Class_10E991C0.h"
#include "Game/Class_10FF667C.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

extern Class_10FF667C* DAT_10ff667c;

struct Struct_10C1F490
{
    int Unknown00;
};

// FUNCTION: 0x10C1F440 ?Serialize@Class_10E991C0@@UAEXAAVFArchive@@@Z
void Class_10E991C0::Serialize(FArchive& Ar)
{
    FUN_10b052a0(Ar, &Unknown04);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 4);
}

// FUNCTION: 0x10C1F490 ?FUN_10c1f490@Class_10C1F490@@QAEHPAUStruct_10C1F490@@@Z
int Class_10C1F490::FUN_10c1f490(Struct_10C1F490* A)
{
    int Kind = A->Unknown00;
    if (Kind == DAT_10ff667c->Unknown54 || Kind == DAT_10ff667c->Unknown58 || Kind == DAT_10ff667c->Unknown5C || Kind == DAT_10ff667c->Unknown60 || Kind == DAT_10ff667c->Unknown64 || Kind == DAT_10ff667c->Unknown68)
        return 1;
    return 0;
}
