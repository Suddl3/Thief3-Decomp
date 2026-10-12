// Game/cStatePatrol.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

int FUN_10bb3730(int A, int B, int C, const Class_109081E0& Name);

class cStatePatrol
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb3a50(int A, int B, int C);
};

// FUNCTION: 0x10BB3A50 ?FUN_10bb3a50@cStatePatrol@@UAEHHHH@Z
int cStatePatrol::FUN_10bb3a50(int A, int B, int C)
{
    Class_109081E0 Name("STATE_PATROL");
    return FUN_10bb3730(A, B, C, Name);
}
