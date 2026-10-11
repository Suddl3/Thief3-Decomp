// Game/State_Patrol.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10BC4240_Param;

class cTacticMoveToPoint
{
public:
    virtual void Virtual0();

    void PopState();
};

class State_Patrol : public cTacticMoveToPoint
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
    virtual void FUN_10becfd0();

    void FUN_10bc4240(Struct_10BC4240_Param* A, bool B);
    void FUN_10bece10();

    char m_Id[0x45];
    char Unknown49;
    char Unknown4A[2];
    Struct_10BC4240_Param* Unknown4C;
};

// FUNCTION: 0x10BECFD0 ?FUN_10becfd0@State_Patrol@@UAEXXZ
void State_Patrol::FUN_10becfd0()
{
    if (Unknown4C)
        FUN_10bc4240(Unknown4C, false);
    else if (Unknown49 == 1)
        PopState();
    else
        FUN_10bece10();
}
