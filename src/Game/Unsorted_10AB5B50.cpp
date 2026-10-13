// Game/Unsorted_10AB5B50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6F3EC.h"
#include <math.h>

class Class_10E6F3EC;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E6F3EC* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E49AC4
{
public:
    Class_10E49AC4();

    virtual void Virtual0();

    void Init();

    char m_Values[0x54];
    bool Unknown58;
    bool Unknown59;
    bool Unknown5A;
};

extern float DAT_10eafbdc;

// FUNCTION: 0x10AB5B50 ?FUN_10ab5b50@@YAMM@Z
float FUN_10ab5b50(float x)
{
    float v = log(x) * 6.5 / log(2.0);
    if (x < 1.0e-5)
        return -65.0f;
    if (v < -65.0f)
        return -65.0f;
    if (v > DAT_10eafbdc)
        return DAT_10eafbdc;
    return v;
}

// FUNCTION: 0x10AB6EB0 ??0Class_10E49AC4@@QAE@XZ
Class_10E49AC4::Class_10E49AC4()
{
    Unknown58 = false;
    Unknown59 = false;
    Unknown5A = false;
    Init();
}

// FUNCTION: 0x10AB72D0 ?FUN_10ab72d0@Class_10E6F3EC@@QAEXXZ
void Class_10E6F3EC::FUN_10ab72d0()
{
    DAT_10f46da0->Virtual2(this);
}
