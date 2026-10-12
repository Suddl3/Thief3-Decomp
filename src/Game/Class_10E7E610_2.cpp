// Game/Class_10E7E610_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B396A0.h"

class AGarrett
{
public:
    void SetNoiseEnabled(int A);

    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
};

class Class_10E7E6A0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();

    void ReleaseArm(AGarrett* Garrett);
    void ClearVelocity(AGarrett* Garrett);
};

class Class_10E7E610 : public Class_10E7E6A0
{
public:
    virtual void FUN_10b49360(AGarrett* Garrett);
};

// FUNCTION: 0x10B49360 ?FUN_10b49360@Class_10E7E610@@UAEXPAVAGarrett@@@Z
void Class_10E7E610::FUN_10b49360(AGarrett* Garrett)
{
    ReleaseArm(Garrett);
    ClearVelocity(Garrett);
    ((Class_10B396A0*)GetLinkedObject())->FUN_10b396a0();
    Garrett->bUpdatePhysHeight = 1;
    Garrett->SetNoiseEnabled(0);
}
