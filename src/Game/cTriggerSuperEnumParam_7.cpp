// Game/cTriggerSuperEnumParam_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

extern int DAT_10f3a1f4;

extern const char DAT_10e6c100[];

extern const char DAT_10e6c778[];

class Class_10A8CF70_Unknown04
{
public:
    char Pad00[0x34];
    FName* Unknown34;
    int Unknown38;
};

class cTriggerSuperEnumParam
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
    virtual cString GetCurrentName();

    Class_10A8CF70_Unknown04* m_SuperEnum;
};

// FUNCTION: 0x10A8CF70 ?GetCurrentName@cTriggerSuperEnumParam@@UAE?AVcString@@XZ
cString cTriggerSuperEnumParam::GetCurrentName()
{
    if (m_SuperEnum)
    {
        int Count = m_SuperEnum->Unknown38;
        if (DAT_10f3a1f4 == Count)
            return cString(DAT_10e6c778);
        if (DAT_10f3a1f4 < Count)
            return cString(m_SuperEnum->Unknown34[DAT_10f3a1f4].FUN_10af9730());
    }
    return cString(DAT_10e6c100);
}
