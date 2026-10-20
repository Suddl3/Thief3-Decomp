// Game/Class_10E7C2EC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7C2EC.h"
#include "Game/Class_10E7C2EC_Primary.h"
#include "Game/Class_10E7C2EC_Secondary.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E7C2EC_Secondary* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10B358A0 ?FUN_10b358a0@Class_10E7C2EC@@UAEXXZ
void Class_10E7C2EC::FUN_10b358a0()
{
    DAT_10f46da0->Virtual1((Class_10E7C2EC_Secondary*)((Class_10E5B578*)this), 0x4e, -1, -1);
}
