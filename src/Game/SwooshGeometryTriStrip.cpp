// Game/SwooshGeometryTriStrip.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/SwooshGeometryTriStrip.h"

class Object_10AA4D20_A
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Object_10AA4D20_B
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

// FUNCTION: 0x10AA4D20 ?Release@SwooshGeometryTriStrip@@UAEXXZ
void SwooshGeometryTriStrip::Release()
{
    if (Unknown18)
    {
        Unknown18->Virtual1();
        Unknown18 = 0;
    }
    if (Unknown1C)
    {
        Unknown1C->Virtual2();
        Unknown1C = 0;
    }
    Unknown04 = false;
}
