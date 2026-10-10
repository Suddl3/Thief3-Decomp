// Game/Unsorted_1094D9A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094D9A0.h"

class Object_1094D9A0_B
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

// FUNCTION: 0x1094D9A0 ??1Class_1094D9A0@@QAE@XZ
Class_1094D9A0::~Class_1094D9A0()
{
    Object_1094D9A0_B* Pending = Unknown14;
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0xff000000;
    if (Pending)
    {
        Pending->Virtual2();
        Unknown14 = 0;
    }
    if (Unknown18)
    {
        Unknown18->Virtual2();
        Unknown18 = 0;
    }
    if (Unknown1C)
    {
        Unknown1C->Virtual2();
        Unknown1C = 0;
    }
}
