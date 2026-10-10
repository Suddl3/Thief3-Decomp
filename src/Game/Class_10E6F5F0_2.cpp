// Game/Class_10E6F5F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6F5F0.h"
#include "Game/FArchive.h"

// FUNCTION: 0x10AC2C60 ?FUN_10ac2c60@Class_10E6F5F0@@UAEXAAVFArchive@@@Z
void Class_10E6F5F0::FUN_10ac2c60(FArchive& Ar)
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
