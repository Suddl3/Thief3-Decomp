// Game/Class_10E897D4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E897D4_Primary.h"
#include "Game/Class_10E897D4_Secondary.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E897D4_Secondary* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E897D4 : public Class_10E897D4_Primary, public Class_10E897D4_Secondary
{
public:
    virtual void FUN_10b8f2d0();
};

// FUNCTION: 0x10B8F2D0 ?FUN_10b8f2d0@Class_10E897D4@@UAEXXZ
void Class_10E897D4::FUN_10b8f2d0()
{
    DAT_10f46da0->Virtual1(this, 0x73, -1, -1);
}
