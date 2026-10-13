// Game/Class_10E98DE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"
#include "Game/Class_10E98D08.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E98DE0 : public Class_10E98D08
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    float m_Position[3];
    int Unknown54;
};

// FUNCTION: 0x10C1B300 ?Serialize@Class_10E98DE0@@UAEXAAVFArchive@@@Z
void Class_10E98DE0::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, m_Position);
    Ar.Serialize(&Unknown54, 4);
}
