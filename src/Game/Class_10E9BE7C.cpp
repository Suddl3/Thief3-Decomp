// Game/Class_10E9BE7C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C4E880_Primary.h"
#include "Game/Class_10C4E8D0.h"
#include "Game/Class_10C4EDA0.h"
#include "Game/Class_10C50EC0.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10E9BE7C.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* Listener, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C50F00 ??0Class_10E9BE7C@@QAE@XZ
Class_10E9BE7C::Class_10E9BE7C()
    : Unknown20(0.1f), Unknown24(20), Unknown34(0)
{
    DAT_10f46da0->Virtual1(this, 7, -1, -1);
    DAT_10f46da0->Virtual1(this, 90, -1, -1);
}
