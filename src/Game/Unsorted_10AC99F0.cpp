// Game/Unsorted_10AC99F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC99F0.h"

// FUNCTION: 0x10AC99F0 ?FUN_10ac99f0@Class_10AC99F0@@QAEXH@Z
void Class_10AC99F0::FUN_10ac99f0(int A)
{
    for (int i = 0; i < Unknown04; i++)
    {
        if (Unknown0C[i] == A)
            Unknown0C[i] = 0;
    }
}
