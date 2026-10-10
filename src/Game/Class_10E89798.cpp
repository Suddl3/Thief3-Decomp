// Game/Class_10E89798.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10C08940.h"
#include "Game/Class_10E89798_Secondary.h"
#include "Game/Class_10E89798.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E89798_Secondary* A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10B8F110 ?FUN_10b8f110@Class_10E89798@@UAEXXZ
void Class_10E89798::FUN_10b8f110()
{
    DAT_10f46da0->Virtual1(this, 0x71, FUN_10978090()->Virtual8(-1));
}
