// Game/Unsorted_10A48160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A1F880.h"
#include "Game/Class_10A1F9D0.h"
#include "Game/Class_10A1FB50.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E678F0.h"

class Class_10E678F0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E678F0* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

Class_10A1F880* FUN_10a1fcf0();

class Class_10B59F70
{
public:
    int FUN_10b59f70();
};

// FUNCTION: 0x10A481F0 ?FUN_10a481f0@@YAHHH@Z
int FUN_10a481f0(int A, int B)
{
    if (B >= 0)
        return ((Class_10A1FB50*)FUN_10a1fcf0())->FUN_10a1fad0(B);
    if (A)
        return ((Class_10A1F9D0*)FUN_10a1fcf0())->FUN_10a1f8a0(A);
    return ((Class_10B59F70*)FUN_10a1fcf0())->FUN_10b59f70();
}

// FUNCTION: 0x10A484D0 ??1Class_10E678F0@@UAE@XZ
Class_10E678F0::~Class_10E678F0()
{
    DAT_10f46da0->Virtual2(this);
}
