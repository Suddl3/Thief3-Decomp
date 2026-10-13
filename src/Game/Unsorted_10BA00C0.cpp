// Game/Unsorted_10BA00C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C065F0.h"
#include "Game/FArchive.h"

class FArchive;

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10BA00C0
{
public:
    void Serialize(FArchive& Ar);

    int Unknown00;
    Class_10C065F0 Unknown04;
    char Unknown05[0x3B];
    int Unknown40;
    int Unknown44;
    int Unknown48;
};

// FUNCTION: 0x10BA00C0 ?Serialize@Class_10BA00C0@@QAEXAAVFArchive@@@Z
void Class_10BA00C0::Serialize(FArchive& Ar)
{
    Ar.Serialize(&Unknown40, 4);
    Ar.Serialize(&Unknown44, 4);
    FUN_10b052a0(Ar, &Unknown48);
    int Count = 1;
    Ar.Serialize(&Count, 4);
    for (int i = 0; i < Count; i++)
    {
        if (i == 0)
            Unknown04.FUN_10c065f0(Ar);
    }
}
