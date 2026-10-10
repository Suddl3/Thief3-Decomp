// Game/Unsorted_10ACC0D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10971570.h"
#include "Game/Class_10E67938.h"
#include "Game/Class_10E7007C.h"
#include "Game/Class_10E70098.h"

class Class_1098E330;

class Class_10E70098;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E70098* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E70020
{
public:
    virtual void FUN_10acb0c0(int A, int B, int C, int D);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

// FUNCTION: 0x10ACC280 ?FUN_10acb0c0@Class_10E70020@@UAEXHHHH@Z
void Class_10E70020::FUN_10acb0c0(int A, int B, int C, int D)
{
    if (A != 0x3c)
        return;
    unsigned char State;
    ((Class_10971570*)B)->FUN_10971570(0x2000273, (bool*)&State);
    if (State == 3 || State == 4 || State == 2)
        Virtual5(B, 0, 1, 0);
}

// FUNCTION: 0x10ACC3E0 ??1Class_10E70098@@UAE@XZ
Class_10E70098::~Class_10E70098()
{
    DAT_10f46da0->Virtual2(this);
}
