// Game/cAIManager_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10BA90A0
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A);
};

int FUN_10ba90a0();

class cAIManager
{
public:
    virtual void Virtual0();
    virtual void Activate(int A);
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
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21(int A);

    bool m_Active;
    char Unknown05[0xF];
    int m_Controllers;
    char Unknown18[0x2A];
    bool Unknown42;
};

// FUNCTION: 0x10C0B510 ?Activate@cAIManager@@UAEXH@Z
void cAIManager::Activate(int A)
{
    if (m_Controllers > 0 && !m_Active)
    {
        m_Active = true;
        Virtual21(A);
        Object_10BA90A0* Owner = (Object_10BA90A0*)FUN_10ba90a0();
        if (Owner->Virtual1() && !Unknown42)
            ((Object_10BA90A0*)FUN_10ba90a0())->Virtual4(0);
    }
}
