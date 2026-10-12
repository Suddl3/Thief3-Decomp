// Game/Unsorted_10B8B830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E895D0.h"
#include "Game/Class_10E896A8.h"

class Struct_10B8B830
{
public:
    int Unknown00;
    int Unknown04;
};

class Class_10E50610
{
public:
    Class_10E50610(int Value);
    virtual ~Class_10E50610() {}

    int Unknown04;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E50610* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10B8B830 ?FUN_10b8b830@Class_10B8B830@@QAEXH@Z
void Class_10E895D0::FUN_10b8b830(int Arg)
{
    if (Unknown0C != Arg)
    {
        Unknown0C = Arg;
        Class_10E50610 Local(Arg);
        DAT_10f46da0->Virtual5(7, Unknown08->Unknown04, &Local, 0);
    }
}

// FUNCTION: 0x10B8C690 ?ClampToMax@Class_10E896A8@@UAEMMH@Z
float Class_10E896A8::ClampToMax(float Value, int Unused)
{
    if (m_MaxValue > Value)
        return Value;
    return m_MaxValue;
}
