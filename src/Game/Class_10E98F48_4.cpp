// Game/Class_10E98F48_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"
#include "Game/Class_10E98D08.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

double GetTimeSeconds();

class Class_10E98F48 : public Class_10E98D08
{
public:
    virtual void FUN_10c1b640(FArchive& Ar);
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual bool FUN_10c1b600();

    APawn* FUN_10c1b580();

    char Unknown04[0x44];
    float Unknown48[3];
    UObject* Unknown54;
};

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C1B600 ?FUN_10c1b600@Class_10E98F48@@UAE_NXZ
bool Class_10E98F48::FUN_10c1b600()
{
    APawn* Pawn = FUN_10c1b580();
    if (Pawn && !(Pawn->ObjectFlags & 0x800000))
    {
        float Value = ((AAIPawn*)Pawn)->Virtual110();
        if (!(GetTimeSeconds() - Value > 5.0))
            return true;
    }
    return false;
}

// FUNCTION: 0x10C1B640 ?FUN_10c1b640@Class_10E98F48@@UAEXAAVFArchive@@@Z
void Class_10E98F48::FUN_10c1b640(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, Unknown48);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown54);
}
