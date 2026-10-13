// Game/cTriggerSoundSchemaParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cTriggerSoundSchemaParam.h"
#include "Game/Class_10E6C5D0.h"
#include "Game/cTriggerByteEnumParam.h"

class Object_10A8AC40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Object_10A8AC40** Ref);
};

extern int DAT_10f3a1dc;

extern int DAT_10f3a1e0;

// FUNCTION: 0x10A8ABE0 ?IsRelated@cTriggerSoundSchemaParam@@UAEHHPAV1@@Z
int cTriggerSoundSchemaParam::IsRelated(int p1, cTriggerSoundSchemaParam* p2)
{
    switch (p1)
    {
    case 1:
    {
        bool Same = Unknown08 == p2->Unknown08;
        return Same;
    }
    default:
        return 0;
    }
}

// FUNCTION: 0x10A8AC00 ?IncrementCount@cTriggerSoundSchemaParam@@UAEXXZ
void cTriggerSoundSchemaParam::IncrementCount()
{
    if (DAT_10f3a1dc < DAT_10f3a1e0)
        DAT_10f3a1dc++;
}

// FUNCTION: 0x10A8AC20 ?IsLimitReached@cTriggerSoundSchemaParam@@UAE_NXZ
bool cTriggerSoundSchemaParam::IsLimitReached()
{
    return DAT_10f3a1dc >= DAT_10f3a1e0;
}

// FUNCTION: 0x10A8AC40 ?IsValid@cTriggerSoundSchemaParam@@UAEHXZ
int cTriggerSoundSchemaParam::IsValid()
{
    int Result = m_Schema && m_Schema->Virtual7(&m_Schema);
    return (unsigned char)Result;
}
