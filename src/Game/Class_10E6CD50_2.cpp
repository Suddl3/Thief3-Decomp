// Game/Class_10E6CD50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E5D5E0Base.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E5D5E0.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6CD50.h"

class Class_10E6CE28
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10a94fc0();
    virtual void Virtual3();
    virtual Class_10E6CE28* Virtual4(int A);
    int GetUnknown08();

    int Unknown04;
    int Unknown08;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(cActorManager* Obj, int B, int C, Class_10E5D5E0* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A94FC0 ?FUN_10a94fc0@Class_10E6CD50@@UAEXXZ
void Class_10E6CD50::FUN_10a94fc0()
{
    // GetUnknown08() gives the owner kept at +0x08; the manager is the secondary base at +0x0C.
    Class_10E6CE28* Owner = (Class_10E6CE28*)((Class_10E6CE28*)this)->GetUnknown08();
    Class_10E6CE28* Result = Owner->Virtual4(0);
    Class_10E5D5E0 Local;
    Local.Unknown00 = Result->Unknown04;
    DAT_10f46da0->Virtual1((cActorManager*)(Class_10E5B578*)this, 0x61, -1, &Local);
}
