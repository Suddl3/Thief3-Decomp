// Game/cTriggerSuperEnumParam_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E6C740_Member.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

class cTriggerSuperEnumParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int TestRelation(int A, const cTriggerSuperEnumParam* B);
    virtual Class_109081E0 GetValueName();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void AdvanceCursor();
    virtual int IsDone();
    virtual void Virtual8() = 0;
    virtual void Virtual9() = 0;
    virtual void Virtual10() = 0;
    virtual void Virtual11() = 0;
    virtual void CopyValueFrom(const cTriggerSuperEnumParam* p1);

    Class_10E6C740_Member* m_SuperEnum;
    int m_Value;
};

extern const char DAT_10e5d9fc[];

extern const char DAT_10e6c778[];

extern const char DAT_10e48c2c[];

Class_109081E0 FUN_1090a660(const char* Format, ...);

// FUNCTION: 0x10A8CCC0 ?GetValueName@cTriggerSuperEnumParam@@UAE?AVClass_109081E0@@XZ
Class_109081E0 cTriggerSuperEnumParam::GetValueName()
{
    if (m_Value == -1)
        return Class_109081E0(DAT_10e5d9fc);
    if (m_SuperEnum && m_Value <= m_SuperEnum->Unknown38)
    {
        if (m_Value == m_SuperEnum->Unknown38)
            return Class_109081E0(DAT_10e6c778);
        return Class_109081E0(m_SuperEnum->Unknown34[m_Value].FUN_10af9730());
    }
    return Class_109081E0(FUN_1090a660(DAT_10e48c2c, m_Value));
}
