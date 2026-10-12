// Game/Class_10E92730_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10E95288 : public Class_10BC4160
{
public:
    void FUN_10be02e0();
};

float FUN_10c00490();

class Class_10E92730 : public Class_10E95288
{
public:
    virtual void Virtual1();
    virtual void TickCountdown();

    char Unknown04[0x60];
    float m_Countdown;
};

// FUNCTION: 0x10BCBF00 ?TickCountdown@Class_10E92730@@UAEXXZ
void Class_10E92730::TickCountdown()
{
    if (FUN_10bc4160()->GetLinkedObject() == 0)
    {
        double Remaining = m_Countdown;
        m_Countdown = Remaining - FUN_10c00490();
        if (m_Countdown < 0.0f)
            FUN_10be02e0();
    }
}
