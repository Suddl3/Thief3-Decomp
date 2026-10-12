// Game/Class_10E9AEC8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C271A0.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E9AEC8 : public Class_10C271A0
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x48];
    float Unknown4C[3];
    bool m_bTriggered;
    char Unknown59[3];
    float m_Point[3];
    int m_Threshold;
};

// FUNCTION: 0x10C38260 ?Serialize@Class_10E9AEC8@@UAEXAAVFArchive@@@Z
void Class_10E9AEC8::Serialize(FArchive& Ar)
{
    FUN_10c271a0(Ar);
    FUN_10b052a0(Ar, Unknown4C);
    Ar.Serialize(&m_bTriggered, 1);
    FUN_10b052a0(Ar, m_Point);
    Ar.Serialize(&m_Threshold, 4);
}
