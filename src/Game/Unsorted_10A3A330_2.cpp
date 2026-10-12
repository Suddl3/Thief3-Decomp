// Game/Unsorted_10A3A330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3A330_Primary.h"
#include "Game/Class_10E667AC.h"
#include "Game/Class_10A3A330.h"

class Class_10A3A330;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10A3A330* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A3A330 ?RegisterMessages@Class_10A3A330@@UAEXXZ
void Class_10A3A330::RegisterMessages()
{
    DAT_10f46da0->Virtual1(this, 0x3b, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x27, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x26, -1, -1);
    DAT_10f46da0->Virtual1(this, 6, -1, -1);
}
