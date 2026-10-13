// Game/GarrettOnCamera.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/GarrettOnCamera.h"
#include "Game/FArchive.h"

// FUNCTION: 0x10AC2B30 ?FUN_10ac2b30@GarrettOnCamera@@UAEXHPAV1@@Z
void GarrettOnCamera::FUN_10ac2b30(int A, GarrettOnCamera* B)
{
    int C = -1;
    bool D = false;
    float E = -1.0f;
    if (FUN_10ac1180(B, &C, &D, &E))
    {
        FUN_10ac2a80(B);
        B->Virtual5(C, D, E);
    }
}

// FUNCTION: 0x10AC2C60 ?Serialize@GarrettOnCamera@@UAEXAAVFArchive@@@Z
void GarrettOnCamera::Serialize(FArchive& Ar)
{
    Ar.Serialize(&Unknown0C, 4);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 1);
    int Key = Unknown1C;
    Ar.Serialize(&Key, 4);
    if (Ar.Unknown14)
    {
        Unknown1C = Key;
        Unknown91 = true;
    }
}
