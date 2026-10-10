// Game/Class_10E5D654.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A16BF0.h"

class Class_10E5D654;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(Class_10E5D654* Listener, int Code, int A, int B);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E5D654
{
public:
    ~Class_10E5D654();

    virtual void FUN_10a173e0(int p1, int p2, int p3, int p4);

    Class_10A16BF0 Unknown04;
};

// FUNCTION: 0x10A17360 ??1Class_10E5D654@@QAE@XZ
Class_10E5D654::~Class_10E5D654()
{
    DAT_10f46da0->Virtual3(this, 0x5a, -1, -1);
}
