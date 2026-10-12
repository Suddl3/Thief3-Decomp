// Game/Class_10E6CE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10AA3520.h"

class Class_10A67BC0
{
public:
    double FUN_10a67bc0();
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6CE50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int UpdateTimer(int A, int B);

    char Unknown04[4];
    int m_TimeRemaining;
    double m_LastTime;
};

// FUNCTION: 0x10A95910 ?UpdateTimer@Class_10E6CE50@@UAEHHH@Z
int Class_10E6CE50::UpdateTimer(int A, int B)
{
    if (DAT_10f35dec && DAT_10f35dec->Unknown70)
    {
        double Now = DAT_10f35dec->Unknown70->FUN_10a67bc0();
        double Elapsed = Now - m_LastTime;
        if (Elapsed < 0.0)
            Elapsed = 0.0;
        m_TimeRemaining = (int)(m_TimeRemaining - Elapsed);
        m_LastTime = Now;
        if (m_TimeRemaining < 0)
            return 1;
    }
    return 0;
}
