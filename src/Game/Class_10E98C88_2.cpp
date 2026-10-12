// Game/Class_10E98C88_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

class Class_10E98C8C;

void FUN_10c164c0(Class_10E98C8C* P);

class Class_10E98C8C
{
public:
    Class_10E98C8C(int p1);

    virtual void FUN_10c162e0(int p1);

    int Unknown04;
};

class Class_10E98C88;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E98C88* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E98C88
{
public:
    virtual ~Class_10E98C88();

    cIntArray Unknown04;
};

// FUNCTION: 0x10C163F0 ??1Class_10E98C88@@UAE@XZ
Class_10E98C88::~Class_10E98C88()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10C16580 ??0Class_10E98C8C@@QAE@H@Z
Class_10E98C8C::Class_10E98C8C(int p1)
{
    Unknown04 = p1;
    FUN_10c164c0(this);
}
