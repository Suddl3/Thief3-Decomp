// Game/Class_10E8C22C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10C08940.h"
#include "Game/Class_10E8C22C_Secondary.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E8C22C_Secondary* A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E8C22C : public Class_10978090, public Class_10E8C22C_Secondary
{
public:
    virtual void Virtual1();
    virtual void FUN_10c14000();
};

// FUNCTION: 0x10C14000 ?FUN_10c14000@Class_10E8C22C@@UAEXXZ
void Class_10E8C22C::FUN_10c14000()
{
    DAT_10f46da0->Virtual1(this, 0x52, FUN_10978090()->Virtual8(-1));
}
