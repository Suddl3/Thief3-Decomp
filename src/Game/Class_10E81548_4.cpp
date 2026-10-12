// Game/Class_10E81548_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B39870.h"
#include "Game/Class_10B39890.h"
#include "Game/Struct_10B1DCA0.h"

class AGarrett
{
public:
    char Unknown00[0x38];
    FRotator Unknown38;
    char Unknown44[0x300];
    int Unknown344;
    int Unknown348;
    char Unknown34C[0x104];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();
    Class_10B39870* GetLinkedObject();
};

class GSMantle : public Class_10AA82D0
{
public:
    void ForceArms(AGarrett* Garrett);
};

class Class_10B3AE70 : public GSMantle
{
public:
    virtual void Virtual1();

    void ForceBody(AGarrett* Garrett);

    char Unknown04[0xC];
};

class Class_10E7E730 : public Class_10B3AE70
{
public:
    void FUN_10b3b0b0(AGarrett* Garrett);
};

class Class_10E81548 : public Class_10E7E730
{
public:
    virtual void FUN_10b4bf20(AGarrett* Garrett);

    int Unknown10;
};

void FUN_109672e0(const Struct_10B1DCA0& Coords, const FVector& V, FVector& Out);

// FUNCTION: 0x10B4BF20 ?FUN_10b4bf20@Class_10E81548@@UAEXPAVAGarrett@@@Z
void Class_10E81548::FUN_10b4bf20(AGarrett* Garrett)
{
    FUN_10b3b0b0(Garrett);
    Unknown10 = Garrett->Unknown348;
    switch (Unknown10)
    {
    case 2:
        ForceArms(Garrett);
        break;
    default:
        ForceBody(Garrett);
        break;
    }
    ((Class_10B39530*)GetLinkedObject())->Play(Garrett->Unknown344, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    FVector V = *(FVector*)((Class_10B39890*)GetLinkedObject())->GetEntryData(Garrett->Unknown344);
    Struct_10B1DCA0 Coords(FVector(0.0f, 0.0f, 0.0f));
    Coords.FUN_109620b0(Garrett->Unknown38);
    {
        FVector Result;
        FUN_109672e0(Coords, V, Result);
    }
    Garrett->bUpdatePhysHeight = 0;
}
