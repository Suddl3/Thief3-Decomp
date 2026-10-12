// Game/Class_10E97BE8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C09A40.h"
#include "Game/Class_10C0A6F0.h"
#include "Game/Class_10E97BE8.h"

class Class_10E97BE8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E97BE8* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C0A7E0 ??1Class_10E97BE8@@UAE@XZ
Class_10E97BE8::~Class_10E97BE8()
{
    DAT_10f46da0->Virtual2(this);
}
