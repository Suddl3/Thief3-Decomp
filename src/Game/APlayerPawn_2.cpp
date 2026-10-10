// Game/APlayerPawn_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "Game/FArchive.h"
#include "Game/Struct_10AA3520.h"

class Class_10A37780
{
public:
    void FUN_10a37780(APlayerPawn* A, int B);
    void FUN_10a378f0(FArchive& Ar);
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A464D0 ?Serialize@APlayerPawn@@UAEXAAVFArchive@@@Z
void APlayerPawn::Serialize(FArchive& Ar)
{
    APawn::Serialize(Ar);
    if (Ar.Unknown0C >= 0x4C)
    {
        if (Ar.Unknown14)
            DAT_10f35dec->Unknown10->FUN_10a37780(this, 0);
        DAT_10f35dec->Unknown10->FUN_10a378f0(Ar);
    }
}
