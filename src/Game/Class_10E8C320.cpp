// Game/Class_10E8C320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10C08940.h"
#include "Game/Class_10E8C320.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C14280 ?FUN_10c14280@Class_10E8C320@@UAEXXZ
void Class_10E8C320::FUN_10c14280()
{
    // The game's Class_10978090 sits at the front of the object, the secondary base behind it.
    DAT_10f46da0->Virtual1(this, 0x57, ((Class_10978090*)this)->FUN_10978090()->Virtual8(-1));
}
