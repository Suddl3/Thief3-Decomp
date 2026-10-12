// Game/Class_10E91CB8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class Class_10E91CB8 : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x3C];
    float Unknown40[3];
};

// FUNCTION: 0x10BCB7F0 ?Serialize@Class_10E91CB8@@UAEXAAVFArchive@@@Z
void Class_10E91CB8::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    FUN_10b052a0(Ar, Unknown40);
}
