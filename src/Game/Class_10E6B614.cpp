// Game/Class_10E6B614.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cCauseManager.h"

extern void* DAT_10e6b614[];

class Class_10E6B614;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6B614* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6B614
{
public:
    Class_10E6B614* Init();

    void** Unknown00;
};

// FUNCTION: 0x10A69540 ?Init@Class_10E6B614@@QAEPAV1@XZ
Class_10E6B614* Class_10E6B614::Init()
{
    Unknown00 = DAT_10e6b614;
    DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x24, -1, -1);
    return this;
}
