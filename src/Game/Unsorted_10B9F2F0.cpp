// Game/Unsorted_10B9F2F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

// FArchive copied whole from include/Game/FArchive.h, with the version word at +4 typed as an int.
class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(UObject** Value);
    virtual void Virtual7(void* V);

    int Unknown04;
    char Unknown08[4];
    int Unknown0C;
    char Unknown10[4];
    int Unknown14;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10B9F2F0
{
public:
    void FUN_10b9f2f0(FArchive& Ar);

    FVector Unknown00;
    FVector Unknown0C;
    char Unknown18;
    char Unknown19[5];
    char Unknown1E;
    char Unknown1F;
    char Unknown20;
};

// FUNCTION: 0x10B9F2F0 ?FUN_10b9f2f0@Class_10B9F2F0@@QAEXAAVFArchive@@@Z
void Class_10B9F2F0::FUN_10b9f2f0(FArchive& Ar)
{
    if (Ar.Unknown04 >= 0x4A)
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
