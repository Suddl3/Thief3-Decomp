// Game/cTriggerSoundSchemaParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerSoundSchemaParam.h"

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

// FUNCTION: 0x10A8AC40 ?IsValid@cTriggerSoundSchemaParam@@UAEHXZ
int cTriggerSoundSchemaParam::IsValid()
{
    int Result = m_Schema && m_Schema->Virtual7(&m_Schema);
    return (unsigned char)Result;
}
