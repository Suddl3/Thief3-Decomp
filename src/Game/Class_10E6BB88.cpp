// Game/Class_10E6BB88.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cActorManager.h"
#include "Game/Class_10E6BB88.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BB88* Obj, int Type, int A, int B);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A74410 ??0Class_10E6BB88@@QAE@XZ
Class_10E6BB88::Class_10E6BB88()
{
    DAT_10f46da0->Virtual1(this, 0x24, -1, -1);
}

// FUNCTION: 0x10A74470 ?HandleEvent@Class_10E6BB88@@UAEXHHHH@Z
void Class_10E6BB88::HandleEvent(int A, int B, int C, int D)
{
    if (A == 0x24)
        Virtual15(B, C, D);
    cActorManager::FUN_10a4c470(A, B, C, D);
}
