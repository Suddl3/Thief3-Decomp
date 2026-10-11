// Game/Class_10E5D5D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E5D5D0.h"
#include "Game/Class_10E7755C.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* A, int B, int C, Class_10E7755C* D);
    virtual void Virtual2(Class_10E5B578* A);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A15AA0 ?FUN_10a15aa0@Class_10E5D5D0@@UAEXXZ
void Class_10E5D5D0::FUN_10a15aa0()
{
    Class_10E7755C Local;
    Local.Unknown04 = 0x281B9D0;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
}
