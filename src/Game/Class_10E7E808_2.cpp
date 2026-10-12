// Game/Class_10E7E808_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7E6A0.h"

enum EFatalAttackState
{
    eFAS_None,
    eFAS_ArmsPrepared,
    eFAS_BodyPrepared,
    eFAS_Attacking
};

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
    char Unknown454[0xFC];
    unsigned char FatalAttackState;
};

class GSMantle : public Class_10E7E6A0
{
public:
    void ForceArms(AGarrett* Garrett);
};

class Class_10B3AE70 : public GSMantle
{
public:
    void FUN_10b3ae70(AGarrett* Garrett);
};

class Class_10E7E730 : public Class_10B3AE70
{
public:
    void FUN_10b3b0b0(AGarrett* Garrett);
};

class Class_10E7E808 : public Class_10E7E730
{
public:
    virtual void FUN_10b4bcb0(int A);
    virtual void FUN_10b4bce0(AGarrett* Garrett);
    virtual void ReleaseArmsForBody(AGarrett* Garrett);
    virtual void Virtual4();

    char Unknown04[0xC];
    float Unknown10;
};

// FUNCTION: 0x10B4BD30 ?ReleaseArmsForBody@Class_10E7E808@@UAEXPAVAGarrett@@@Z
void Class_10E7E808::ReleaseArmsForBody(AGarrett* Garrett)
{
    ClearVelocity(Garrett);
    ReleaseArm(Garrett);
    Garrett->bUpdatePhysHeight = 1;
    if (Garrett->FatalAttackState == eFAS_ArmsPrepared)
        Garrett->FatalAttackState = eFAS_BodyPrepared;
}
