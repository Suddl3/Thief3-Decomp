// Game/cRadiusPinger_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"
#include "Game/cRadiusPinger.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class cRadiusPinger;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(cRadiusPinger* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A73980 ??0cRadiusPinger@@QAE@XZ
cRadiusPinger::cRadiusPinger()
{
    Class_10E5D360 Local(0x80378);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
}
