// Game/GState_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B39870.h"
#include "Game/Class_10B39890.h"
#include "Game/Struct_10B1DCA0.h"
#include "T3Player/T3PlayerClasses.h"

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
    void StopBody(AGarrett* Garrett);
};

class GState : public Class_10E7E730
{
public:
    virtual void Enter(AGarrett* Garrett);

    int Unknown10;
};

void FUN_109672e0(const Struct_10B1DCA0& Coords, const FVector& V, FVector& Out);

// FUNCTION: 0x10B4BF20 ?Enter@GState@@UAEXPAVAGarrett@@@Z
void GState::Enter(AGarrett* Garrett)
{
    StopBody(Garrett);
    Unknown10 = Garrett->NextState;
    switch (Unknown10)
    {
    case 2:
        ForceArms(Garrett);
        break;
    default:
        ForceBody(Garrett);
        break;
    }
    ((Class_10B39530*)GetLinkedObject())->Play(Garrett->AnimToPlay, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    FVector V = *(FVector*)((Class_10B39890*)GetLinkedObject())->GetEntryData(Garrett->AnimToPlay);
    Struct_10B1DCA0 Coords(FVector(0.0f, 0.0f, 0.0f));
    Coords.FUN_109620b0(Garrett->Rotation);
    {
        FVector Result;
        FUN_109672e0(Coords, V, Result);
    }
    Garrett->bUpdatePhysHeight = 0;
}
