// Game/cActorManager_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A4C550.h"

class Class_10A4C6C0
{
public:
    virtual ~Class_10A4C6C0();
};

struct Struct_10A4C6C0
{
    char Unknown00[0xC];
    Class_10A4C6C0* Unknown0C;
};

extern Class_10A4C550 DAT_10f3a068;

extern bool DAT_10f3a060;

extern int DAT_10f3a064;

extern int DAT_10f3a084;

class cActorManager
{
public:
    virtual void FUN_10a4c470(int Type, int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(int A);
    virtual void Virtual8(int A, int B, int C);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14(int& A, int B);
};

// FUNCTION: 0x10A4C6C0 ?Virtual7@cActorManager@@UAEXH@Z
void cActorManager::Virtual7(int A)
{
    int Result;
    Virtual14(A, A);
    if (A != DAT_10f3a084)
    {
        Class_10A4C6C0* Owner = ((Struct_10A4C6C0*)A)->Unknown0C;
        if (DAT_10f3a064 == (int)Owner)
        {
            DAT_10f3a060 = true;
            return;
        }
        if (Owner)
            delete Owner;
        DAT_10f3a068.FUN_10dd5120(&Result, A);
    }
}
