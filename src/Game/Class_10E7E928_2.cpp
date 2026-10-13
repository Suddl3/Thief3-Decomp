// Game/Class_10E7E928_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B32160.h"
#include "Game/Class_10B32B50.h"
#include "Game/Class_10B32750.h"

class Class_1098E330;

class Class_10B21340;

class Class_10E7E928
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10b32c80(Class_1098E330* A);

    void FUN_10b32ac0(Class_1098E330* A);
    void FUN_10b324f0(Class_1098E330* A);

    char Unknown04[0x2C];
    bool Unknown30;
    bool Unknown31;
    bool Unknown32;
};

// FUNCTION: 0x10B32C80 ?FUN_10b32c80@Class_10E7E928@@UAEHPAVClass_1098E330@@@Z
int Class_10E7E928::FUN_10b32c80(Class_1098E330* A)
{
    if (Unknown31)
    {
        return 0x17;
    }
    if (!Unknown30)
    {
        FUN_10b32ac0(A);
        ((Class_10B32750*)this)->FUN_10b31c40(A);
        FUN_10b324f0(A);
        if (Unknown32)
        {
            ((Class_10B32B50*)this)->FUN_10b32620((Class_10B21340*)A);
            ((Class_10B32750*)this)->FUN_10b329f0(A);
            ((Class_10B32160*)this)->FUN_10b32100(A);
        }
    }
    return Virtual4();
}
