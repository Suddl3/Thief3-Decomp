// Game/cTriggerPropertyParam_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"

bool __cdecl IsOfFlaggedClass(UObject* Obj, unsigned int Flags);

UClass* FUN_10af1840(const char* Package);

void FUN_10aef5a0();

UClass* FUN_10af0c40(const char* Package);

void FUN_10aeefa0();

extern const char DAT_10e475cc[];

extern UClass* DAT_10f3ed98;

extern UClass* DAT_10f3ed88;

// The object the iterator yields: the game reads two flag bytes in it.
class Class_10A8A340_Unknown08
{
public:
    char Pad00[0x3C];
    unsigned char Unknown3C;
    char Pad3D[0x3];
    unsigned char Unknown40;
};

struct Struct_10A89290
{
    char Pad00[0x8];
    UObject* Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1C];
    Struct_10A89290* Unknown1C;
};

// Copied from include/Game/Class_1096C8D0.h with IsValid added.
class Class_1096C8D0
{
public:
    void FUN_1096c8d0();

    UBOOL IsValid()
    {
        if (Unknown04 == 0)
            return Unknown08 < UObject::GObjObjects.Num();
        return !(Unknown10 == Unknown0C->Unknown1C && Unknown24 == 0);
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    Struct_10A89290* Unknown10;
    Class_10B0D530 Unknown14;
    char Pad15[0xF];
    int Unknown24;
};

// The global the game keeps the iterator in.
class Class_10F3A1D8 : public Class_1096C8D0
{
};

extern Class_10F3A1D8* DAT_10f3a1d8;

// Copied from include/Game/cTriggerPropertyParam.h with the field at 0x10 added.
class cTriggerPropertyParam
{
public:
    virtual ~cTriggerPropertyParam() {}
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10a8a340();

    int Unknown04;
    int Unknown08;
    int* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A8A340 ?FUN_10a8a340@cTriggerPropertyParam@@UAEXXZ
void cTriggerPropertyParam::FUN_10a8a340()
{
    for (DAT_10f3a1d8->FUN_1096c8d0(); DAT_10f3a1d8->IsValid(); DAT_10f3a1d8->FUN_1096c8d0())
    {
        UObject* Obj = (DAT_10f3a1d8->Unknown04 == 0)
                           ? UObject::GObjObjects(DAT_10f3a1d8->Unknown08)
                           : DAT_10f3a1d8->Unknown10->Unknown08;
        if ((((Class_10A8A340_Unknown08*)Obj)->Unknown40 & 0x43) == 0)
            continue;

        Obj = (DAT_10f3a1d8->Unknown04 == 0) ? UObject::GObjObjects(DAT_10f3a1d8->Unknown08)
                                              : DAT_10f3a1d8->Unknown10->Unknown08;
        if ((((Class_10A8A340_Unknown08*)Obj)->Unknown40 & 8) != 0)
            continue;

        Obj = (DAT_10f3a1d8->Unknown04 == 0) ? UObject::GObjObjects(DAT_10f3a1d8->Unknown08)
                                              : DAT_10f3a1d8->Unknown10->Unknown08;
        if ((((Class_10A8A340_Unknown08*)Obj)->Unknown3C & 1) == 0)
            continue;

        if (!DAT_10f3ed98)
        {
            DAT_10f3ed98 = FUN_10af1840(DAT_10e475cc);
            FUN_10aef5a0();
        }

        Obj = (DAT_10f3a1d8->Unknown04 == 0) ? UObject::GObjObjects(DAT_10f3a1d8->Unknown08)
                                              : DAT_10f3a1d8->Unknown10->Unknown08;
        if (Obj->IsA(DAT_10f3ed98))
            continue;

        if (!DAT_10f3ed88)
        {
            DAT_10f3ed88 = FUN_10af0c40(DAT_10e475cc);
            FUN_10aeefa0();
        }

        Obj = (DAT_10f3a1d8->Unknown04 == 0) ? UObject::GObjObjects(DAT_10f3a1d8->Unknown08)
                                              : DAT_10f3a1d8->Unknown10->Unknown08;
        if (Obj->IsA(DAT_10f3ed88))
            continue;

        Obj = (DAT_10f3a1d8->Unknown04 == 0) ? UObject::GObjObjects(DAT_10f3a1d8->Unknown08)
                                              : DAT_10f3a1d8->Unknown10->Unknown08;
        if (IsOfFlaggedClass(Obj, Unknown10))
            break;
    }
}
