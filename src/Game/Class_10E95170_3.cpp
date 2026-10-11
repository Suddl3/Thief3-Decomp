// Game/Class_10E95170_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cTacticMoveToPoint
{
public:
    virtual void Virtual0();

    bool FUN_10bc40e0();
    void PopState();
};

class Class_10E95170 : public cTacticMoveToPoint
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
    virtual void FUN_10bdf3f0();

    char Unknown04[0x3C];
    int m_State;
};

// FUNCTION: 0x10BDF3F0 ?FUN_10bdf3f0@Class_10E95170@@UAEXXZ
void Class_10E95170::FUN_10bdf3f0()
{
    if (m_State == 3)
    {
        PopState();
        return;
    }
    if (FUN_10bc40e0())
        PopState();
}
