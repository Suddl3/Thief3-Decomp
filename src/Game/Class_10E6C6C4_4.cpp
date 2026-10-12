// Game/Class_10E6C6C4_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6C6C4
{
public:
    virtual void Virtual0() = 0;
    virtual void Virtual1() = 0;
    virtual void Virtual2() = 0;
    virtual void Virtual3() = 0;
    virtual void Virtual4() = 0;
    virtual void Virtual5() = 0;
    virtual void Virtual6() = 0;
    virtual void Virtual7() = 0;
    virtual void Virtual8() = 0;
    virtual void Virtual9() = 0;
    virtual void Virtual10() = 0;
    virtual void Virtual11() = 0;
    virtual int CopyValueFrom(const Class_10E6C6C4* p1);

    int m_Value;
};

// FUNCTION: 0x10A8D090 ?CopyValueFrom@Class_10E6C6C4@@UAEHPBV1@@Z
int Class_10E6C6C4::CopyValueFrom(const Class_10E6C6C4* p1)
{
    return m_Value = p1->m_Value;
}
