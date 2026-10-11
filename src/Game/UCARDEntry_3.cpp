// Game/UCARDEntry_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Object_10BFBD00.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);

    char Unknown04[0x08];
    int ArVer;
    int Unknown10;
    int ArIsLoading;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

class UCARDEntry : public UObject
{
public:
    virtual ~UCARDEntry();
    virtual void Serialize(FArchive& Ar);

    int Unknown2C;
    int Unknown30;
    int Unknown34;
    char Unknown38[0x0C];
    char Unknown44[0x0C];
    char Unknown50[0x0C];
    int Unknown5C;
};

// FUNCTION: 0x1098ABF0 ?Serialize@UCARDEntry@@UAEXAAVFArchive@@@Z
void UCARDEntry::Serialize(FArchive& Ar)
{
    UObject::Serialize(Ar);
    if (Ar.ArVer >= 0x20)
    {
        int Value = Unknown2C;
        Ar.Serialize(&Value, 4);
        if (Ar.ArIsLoading)
            Unknown2C = Value;
        if (Ar.ArVer < 0x73)
            Ar.Virtual6(&Unknown30);
        else
            DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown30);
        FUN_10b052a0(Ar, Unknown38);
        FUN_10b052a0(Ar, Unknown44);
        FUN_10b052a0(Ar, Unknown50);
        Ar.Serialize(&Unknown5C, 4);
    }
    if (Ar.ArVer >= 0x73)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown34);
}
