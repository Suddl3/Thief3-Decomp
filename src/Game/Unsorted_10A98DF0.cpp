// Game/Unsorted_10A98DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88_Primary.h"
#include "Game/Class_10E6D07C.h"
#include "Game/Class_10E6D098.h"
#include "Game/Class_10E6DC88.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* Listener, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A99350 ?SendEvent@Class_10E6D07C@@UAEXXZ
void Class_10E6D07C::SendEvent()
{
    DAT_10f46da0->Virtual1(this, 0x7a, -1, -1);
}

// FUNCTION: 0x10A99420 ?SendEvent@Class_10E6D098@@UAEXXZ
void Class_10E6D098::SendEvent()
{
    DAT_10f46da0->Virtual1(this, 0x79, -1, -1);
}
