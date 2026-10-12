// Game/Unsorted_10B49D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA9DC0.h"
#include "Game/Class_10B49D90.h"
#include "Game/Class_10E7E6A0.h"

class AGarrett;

class Class_10B3AE70
{
public:
    virtual void Virtual0();
    virtual void Virtual1();

    void ForceBody(AGarrett* Garrett);

    char Unknown04[0xC];
};

class Class_10B19300 : public Class_10AA9DC0
{
};

Class_10B19300* FUN_10b190e0();

class Class_10E7E730 : public Class_10B3AE70
{
public:
    virtual void Enter(AGarrett* Garrett);

    void StopBody(AGarrett* Garrett);

    void* Unknown10;
    float m_Timer;
};

class Class_10E7E6E8 : public Class_10E7E6A0
{
public:
    virtual void FUN_10b4a160(AGarrett* Param);
};

// FUNCTION: 0x10B49D90 ?FUN_10b49d90@Class_10B49D90@@QAE_NHH@Z
bool Class_10B49D90::FUN_10b49d90(int A, int B)
{
    if (A == 1 && B == 2 || A == 2 && B == 1 || A == 3 && B == 4 || A == 4 && B == 3)
        return true;
    return false;
}

// FUNCTION: 0x10B4A120 ?Enter@Class_10E7E730@@UAEXPAVAGarrett@@@Z
void Class_10E7E730::Enter(AGarrett* Garrett)
{
    m_Timer = -1.0f;
    Unknown10 = FUN_10b190e0()->FUN_10aa9dc0();
    StopBody(Garrett);
    ForceBody(Garrett);
}

// FUNCTION: 0x10B4A160 ?FUN_10b4a160@Class_10E7E6E8@@UAEXPAVAGarrett@@@Z
void Class_10E7E6E8::FUN_10b4a160(AGarrett* Param)
{
    ReleaseArm(Param);
    ClearVelocity(Param);
}
