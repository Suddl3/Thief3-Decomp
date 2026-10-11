// Game/State_Patrol_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

double GetTimeSeconds();

class State_Patrol
{
public:
    virtual void StartTimer();
    void FUN_10beec50(int A);

    char m_Id[0x64];
    bool m_HasStartTime;
    float m_StartTime;
};

// FUNCTION: 0x10BEF040 ?StartTimer@State_Patrol@@UAEXXZ
void State_Patrol::StartTimer()
{
    m_HasStartTime = true;
    m_StartTime = (float)GetTimeSeconds();
    FUN_10beec50(0);
}
