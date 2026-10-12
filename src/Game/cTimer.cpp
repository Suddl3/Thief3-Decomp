// Game/cTimer.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTimer.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

extern float DAT_10eafbdc;

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10ACA5B0 ?Tick@cTimer@@QAEXM@Z
void cTimer::Tick(float A)
{
    if (Remaining > DAT_10eafbdc)
    {
        Remaining -= A;
        if (Remaining <= DAT_10eafbdc)
        {
            Remaining = 0.0f;
            DAT_10f46da0->Virtual5(0xb, Unknown04, -1, 0);
        }
    }
}
