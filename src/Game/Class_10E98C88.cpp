// Game/Class_10E98C88.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

class Class_10E98C88;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E98C88* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E98C88
{
public:
    Class_10E98C88();

    virtual ~Class_10E98C88();

    cIntArray Unknown04;
};

// FUNCTION: 0x10C16390 ??0Class_10E98C88@@QAE@XZ
Class_10E98C88::Class_10E98C88()
{
    DAT_10f46da0->Virtual1(this, 0x26, -1, -1);
}
