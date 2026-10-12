// Game/cGarrettLockPickController_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cLockPickController
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void Reset();
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
    virtual void FUN_10b3efe0(int p1);
};

// FUNCTION: 0x10B3EFE0 ?FUN_10b3efe0@cGarrettLockPickController@@UAEXH@Z
void cGarrettLockPickController::FUN_10b3efe0(int p1)
{
    Reset();
    Virtual4();
}
