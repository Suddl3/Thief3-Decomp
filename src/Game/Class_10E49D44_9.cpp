// Game/Class_10E49D44_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49D44.h"

class Object_109331D0
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

// FUNCTION: 0x109331D0 ??1Class_10E49D44@@QAE@XZ
Class_10E49D44::~Class_10E49D44()
{
    ClearItems();
    if (Unknown08)
    {
        Unknown08->Virtual2();
        Unknown08 = 0;
    }
}
