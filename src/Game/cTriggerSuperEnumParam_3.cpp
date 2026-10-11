// Game/cTriggerSuperEnumParam_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A8C9B0
{
    char Unknown00[0x38];
    int Unknown38;
};

extern int DAT_10f3a1f4;

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
    virtual int IsDone();

    Struct_10A8C9B0* m_SuperEnum;
};

// FUNCTION: 0x10A8C9B0 ?IsDone@cTriggerSuperEnumParam@@UAEHXZ
int cTriggerSuperEnumParam::IsDone()
{
    if (m_SuperEnum)
        return DAT_10f3a1f4 > m_SuperEnum->Unknown38;
    return 1;
}
