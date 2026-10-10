// Game/Unsorted_10C380E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C271A0.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E9AEC8 : public Class_10C271A0
{
public:
    virtual void FUN_10c38260(FArchive& Ar);

    char Unknown04[0x48];
    float Unknown4C[3];
    bool Unknown58;
    char Unknown59[3];
    float Unknown5C[3];
    int Unknown68;
};

// FUNCTION: 0x10C38260 ?FUN_10c38260@Class_10E9AEC8@@UAEXAAVFArchive@@@Z
void Class_10E9AEC8::FUN_10c38260(FArchive& Ar)
{
    FUN_10c271a0(Ar);
    FUN_10b052a0(Ar, Unknown4C);
    Ar.Serialize(&Unknown58, 1);
    FUN_10b052a0(Ar, Unknown5C);
    Ar.Serialize(&Unknown68, 4);
}
