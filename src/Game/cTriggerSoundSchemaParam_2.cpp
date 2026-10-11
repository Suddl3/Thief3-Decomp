// Game/cTriggerSoundSchemaParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A036A0.h"

class cTriggerSoundSchemaParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void CopyFrom(cTriggerSoundSchemaParam* Other);

    Class_10A036A0 m_Schema;
    Class_109081E0 Unknown14;
};

// FUNCTION: 0x10A8B080 ?CopyFrom@cTriggerSoundSchemaParam@@UAEXPAV1@@Z
void cTriggerSoundSchemaParam::CopyFrom(cTriggerSoundSchemaParam* Other)
{
    Unknown14.FUN_1090a590(DAT_10e47660);
    m_Schema.FUN_10a036a0(Other->m_Schema);
}
