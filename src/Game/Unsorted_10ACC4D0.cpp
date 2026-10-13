// Game/Unsorted_10ACC4D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ACCFB0.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E70060.h"

class Class_1098E330;

class Class_10E70098;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E70098* Obj, int Type, int A, int B);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E70098 : public cActorManager, public Class_10E70060
{
public:
    Class_10E70098();
    ~Class_10E70098();

    virtual float FUN_10acc440(int A, int B, Class_1098E330* Obj);
};

// FUNCTION: 0x10ACC4D0 ??0Class_10E70098@@QAE@XZ
Class_10E70098::Class_10E70098()
{
    DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
}
