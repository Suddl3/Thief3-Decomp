// Game/Unsorted_10B9F2F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B9F2F0.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

// FUNCTION: 0x10B9F2F0 ?Serialize@Class_10B9F2F0@@QAEXAAVFArchive@@@Z
void Class_10B9F2F0::Serialize(FArchive& Ar)
{
    if (*(int*)Ar.Unknown04 >= 0x4A)
        Ar.Serialize(&Unknown18, 1);
    FUN_10b052a0(Ar, this);
    FUN_10b052a0(Ar, &Unknown0C);
    Ar.Serialize(&Unknown1E, 1);
    Ar.Serialize(&Unknown1F, 1);
    Ar.Serialize(&Unknown20, 1);
    if (Ar.Unknown0C >= 0xC)
    {
        for (int i = 0; i < 5; i++)
            Ar.Serialize(&Unknown19[i], 1);
    }
    else
    {
        Ar.Serialize(&Unknown19[1], 1);
        Ar.Serialize(&Unknown19[2], 1);
        Ar.Serialize(&Unknown19[3], 1);
        if (Ar.Unknown14 == 1)
        {
            Unknown19[0] = Unknown19[1];
            Unknown19[4] = Unknown19[3];
        }
    }
}
