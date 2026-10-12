// Game/Class_10E992D4_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E992D4.h"

// FUNCTION: 0x10C266D0 ?SyncRegistration@Class_10E992D4@@UAEXXZ
void Class_10E992D4::SyncRegistration()
{
    if (!Unknown34)
    {
        if (Unknown38 > 0)
            Register();
    }
    else if (Unknown38 == 0)
        Unregister();
}
