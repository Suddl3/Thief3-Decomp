// Game/Class_10E6B5A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10953AC0.h"

class Class_10E6B5A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void SetCount(int p1);

    char Unknown04[0xC];
    int Unknown10;
    Class_10953AC0 m_Items;
};

// FUNCTION: 0x10A68BF0 ?SetCount@Class_10E6B5A0@@UAEXH@Z
void Class_10E6B5A0::SetCount(int p1)
{
    m_Items.Resize(p1);
    Unknown10++;
}
