// Game/Class_10E98FD8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98FD8.h"

extern float DAT_10eafbdc;

extern float DAT_10e8d904;

// FUNCTION: 0x10C1B750 ?FUN_10c1b750@Class_10E98FD8@@UAE_NPAV1@@Z
bool Class_10E98FD8::FUN_10c1b750(Class_10E98FD8* A)
{
    if (A->Unknown04 == Unknown04)
    {
        float Diff = A->Unknown48 - Unknown48;
        if (!(Diff >= DAT_10eafbdc))
            Diff = -Diff;
        if (Diff < DAT_10e8d904)
            return true;
    }
    return false;
}
