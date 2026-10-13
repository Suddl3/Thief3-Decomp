// Game/Class_10B3E340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10B3E340 : public Class_10AA82D0
{
public:
    void FUN_10b3e340();

    char Unknown04[0x3C];
    int Unknown40;
};

// FUNCTION: 0x10B3E340 ?FUN_10b3e340@Class_10B3E340@@QAEXXZ
void Class_10B3E340::FUN_10b3e340()
{
    if (Unknown40)
    {
        ((Class_10B39530*)GetLinkedObject())->Play(0xbc, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown40 = 0;
    }
}
