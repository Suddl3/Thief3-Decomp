// Game/State_Patrol_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

double GetTimeSeconds();

class State_Patrol
{
public:
    virtual void FUN_10bef040();
    void FUN_10beec50(int A);

    char Unknown04[0x64];
    bool Unknown68;
    float Unknown6C;
};

// FUNCTION: 0x10BEF040 ?FUN_10bef040@State_Patrol@@UAEXXZ
void State_Patrol::FUN_10bef040()
{
    Unknown68 = true;
    Unknown6C = (float)GetTimeSeconds();
    FUN_10beec50(0);
}
