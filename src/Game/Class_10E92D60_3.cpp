// Game/Class_10E92D60_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"

void FUN_10c11ff0(FArchive& Ar, int* Value);

extern Class_10FF667C* DAT_10ff667c;

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class Class_10E92D60 : public Class_10E8BE68
{
public:
    void FUN_10bce7b0(FArchive* A);

    char Unknown04[0x3C];
    int Unknown40;
    int Unknown44;
    bool Unknown48;
    bool Unknown49;
    bool Unknown4A;
    bool Unknown4B;
    int Unknown4C;
};

// FUNCTION: 0x10BCE7B0 ?FUN_10bce7b0@Class_10E92D60@@QAEXPAVFArchive@@@Z
void Class_10E92D60::FUN_10bce7b0(FArchive* A)
{
    Class_10E8BE68::Serialize(*A);
    DAT_10ff667c->Unknown18->Virtual1(*A, &Unknown40);
    A->Serialize(&Unknown44, 4);
    A->Serialize(&Unknown48, 1);
    A->Serialize(&Unknown4A, 1);
    FUN_10c11ff0(*A, &Unknown4C);
    if (A->Unknown0C >= 0x77)
    {
        A->Serialize(&Unknown4B, 1);
    }
}
