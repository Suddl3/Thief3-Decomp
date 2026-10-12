// Game/Class_10E9CD90_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E9CD90
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
    virtual int IsAtEnd();

    char Unknown04[0x34];
    int m_Size;
    int m_Position;
};

// FUNCTION: 0x10C64010 ?IsAtEnd@Class_10E9CD90@@UAEHXZ
int Class_10E9CD90::IsAtEnd()
{
    return m_Position >= m_Size;
}
