// Game/Class_10E6B978.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"

class Class_10E5D360
{
public:
    Class_10E5D360();
    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6B978;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6B978* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6B978 : public cActorManager
{
public:
    Class_10E6B978();
    virtual void HandleEvent(int A, int B, int C, int D);
};

// FUNCTION: 0x10A6DAA0 ??0Class_10E6B978@@QAE@XZ
Class_10E6B978::Class_10E6B978()
{
    Class_10E5D360 Local;
    Local.Unknown04 = 0x2b21a41;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
}
