// Game/GSMantle_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10993E20.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B39890.h"
#include "Game/Class_10B3B220.h"
#include "Game/Class_10B82DD0.h"
#include "Game/Class_10E7E730.h"
#include "Game/Config.h"
#include "Game/Struct_10B1DCA0.h"
#include "Game/Struct_10B53A00.h"

class Class_10B3B220_Unknown0B0;

// The player object the target's argument points at: a vector at 0x2c, a
// rotator at 0x38, a pointer at 0xb0, an int at 0x35c, a float at 0x418 and
// the bitfields at 0x450.
class AGarrett
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
    FRotator Unknown38;
    char Unknown44[0x6C];
    Class_10B3B220_Unknown0B0* Unknown0B0;
    char Unknown0B4[0x2A8];
    int Unknown35C;
    char Unknown360[0xB8];
    float Unknown418;
    char Unknown41C[0x34];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
    unsigned bMantleFence : 1;
};

// The object at Garrett+0xb0; its virtual 6 hands out the object Teleport is called on.
class Class_10B3B220_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B82DD0* Virtual6();
};

struct Struct_10B21820_Object
{
public:
    void FUN_109b3640(const FVector* A);
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

struct Static_10B3A410
{
public:
    float FUN_10b39ad0(float A);
};

extern float DAT_10f05300;

extern float DAT_10f05304;

extern float DAT_10f05308;

extern float DAT_10e6f308;

extern const char DAT_10e81724[];

extern const char DAT_10e50250[];

Static_10B3A410* __cdecl FUN_10b3a410();

void FUN_109672e0(const Struct_10B1DCA0& Coords, const FVector& V, FVector& Out);

// Game/GSMantle.h copied whole, with the slot the target fills in and the
// members it uses named.
class GSMantle
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b53b30(AGarrett* Garrett);
    virtual int OnAnimationEnd(Struct_10B53A00* P, int Code);

    void ForceArms(AGarrett* Garrett);
    void ReleaseItem(Struct_10B53A00* P);
    GSMantle* Init();
    void GrabItem(Struct_10B53A00* P);
    bool TryGrab(Struct_10B53A00* P);

    char Pad04[0xC];
    unsigned char Unknown10;
    unsigned char Unknown11;
    FVector Unknown14;
    char Pad20[8];
    float Unknown28;
};

// FUNCTION: 0x10B53B30 ?FUN_10b53b30@GSMantle@@UAEXPAVAGarrett@@@Z
void GSMantle::FUN_10b53b30(AGarrett* Garrett)
{
    ((GSMantle*)this)->ForceArms(Garrett);
    if (Garrett->bMantleFence)
    {
        ((Class_10B3B220*)this)->GrabItem((Struct_10B53A00*)Garrett);
        ((Class_10B39530*)((Class_10AA82D0*)this)->GetLinkedObject())->Play(
            0x51,
            FUN_10b3a410()->FUN_10b39ad0(Garrett->Unknown418),
            1.0f,
            0x101,
            0,
            0,
            -1.0f);
        Class_10B82DD0* Target = Garrett->Unknown0B0->Virtual6();
        Struct_10B1DCA0 Coords(Garrett->Unknown2C);
        Target->Teleport(Coords.Unknown00, 1);
        FVector V;
        V.X = DAT_10f05300;
        V.Y = DAT_10f05304;
        V.Z = DAT_10f05308 - DAT_10e6f308;
        Struct_10B21820_Object* Obj = ((Class_10B21820*)Garrett)->FUN_10991e10();
        Obj->FUN_109b3640(&V);
        ((Class_10993E20*)Garrett)->FUN_10993e20(0x3dcccccd);
    }
    else
    {
        ((Class_10B39530*)((Class_10AA82D0*)this)->GetLinkedObject())->Play(
            0x50,
            FUN_10b3a410()->FUN_10b39ad0(Garrett->Unknown418),
            1.0f,
            0x101,
            0,
            0,
            -1.0f);
    }
    ((Class_10E7E730*)this)->StopBody(Garrett);
    FVector V = *(FVector*)((Class_10B39890*)((Class_10AA82D0*)this)->GetLinkedObject())->GetEntryData(0x50);
    V.Z = Garrett->Unknown418;
    Struct_10B1DCA0 Coords(FVector(0.0f, 0.0f, 0.0f));
    {
        FRotator R = Garrett->Unknown38;
        R.Yaw = Garrett->Unknown35C;
        Coords.FUN_109620b0(R);
    }
    {
        FVector Result;
        FUN_109672e0(Coords, V, Result);
        V = Result;
    }
    Unknown14 = Garrett->Unknown2C;
    Unknown11 = 0;
    Unknown10 = 0;
    Garrett->bUpdatePhysHeight = 0;
    if (Unknown28 == -1.0f)
    {
        Config::Instance()->GetFloat(DAT_10e50250, DAT_10e81724, &Unknown28, 0);
    }
}
