// Game/Class_10E948D8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class Class_10E948D8 : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x50];
    int Unknown54;
};

// FUNCTION: 0x10BDBA50 ?Serialize@Class_10E948D8@@UAEXAAVFArchive@@@Z
void Class_10E948D8::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown54, 4);
}
