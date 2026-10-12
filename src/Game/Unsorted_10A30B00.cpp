// Game/Unsorted_10A30B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A30530.h"
#include "Game/Class_10A30690.h"

class Class_10A30690;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10A30690* A);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E663B4;

extern Class_10E663B4* DAT_10f39f38;

// FUNCTION: 0x10A30E10 ?Destroy@Class_10A30690@@QAEXXZ
void Class_10A30690::Destroy()
{
    if (m_Registered)
    {
        Unknown04.SetCount(0);
        DAT_10f46da0->Virtual2(this);
        m_Registered = false;
        delete this;
        DAT_10f39f38 = 0;
    }
}
