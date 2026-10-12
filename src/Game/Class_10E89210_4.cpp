// Game/Class_10E89210_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E89210
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
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void SetState(int A, int B);

    char Unknown04[8];
    int m_State;
};

// FUNCTION: 0x10B876E0 ?SetState@Class_10E89210@@UAEXHH@Z
void Class_10E89210::SetState(int A, int B)
{
    switch (A)
    {
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        SetState(5, 0);
        break;
    }
    m_State = A;
}
