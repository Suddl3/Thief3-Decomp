// Game/Unsorted_10A245C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A245C0.h"

// FUNCTION: 0x10A245C0 ??1Class_10A245C0@@QAE@XZ
Class_10A245C0::~Class_10A245C0()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
