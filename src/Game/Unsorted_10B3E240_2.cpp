// Game/Unsorted_10B3E240_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"

class cLockPickController
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    char Unknown04[0x48];
    bool m_ResetPending;
};

class cGarrettLockPickController : public cLockPickController
{
public:
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
    virtual void FUN_10b3e240(int A, int B);

    void FUN_109e38b0(int A, int B);

    char Unknown50[0x20];
    bool Unknown70;
};

// FUNCTION: 0x10B3E240 ?FUN_10b3e240@cGarrettLockPickController@@UAEXHH@Z
void cGarrettLockPickController::FUN_10b3e240(int A, int B)
{
    FUN_109e38b0(A, B);
    Unknown70 = true;
}
