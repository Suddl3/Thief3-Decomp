// Game/Class_10E6B620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6B620;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6B620* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6B620 : public cActorManager
{
public:
    Class_10E6B620();
};

// FUNCTION: 0x10A69860 ??0Class_10E6B620@@QAE@XZ
Class_10E6B620::Class_10E6B620()
{
    Class_10E5D360 Local(0x20005af);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
}
