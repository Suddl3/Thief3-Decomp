// Game/Class_10E93F60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E93F60.h"
#include "Game/Struct_10C368F0_Entry.h"

// FUNCTION: 0x10C368F0 ?FUN_10c368f0@Class_10E93F60@@UAEXHDH@Z
void Class_10E93F60::FUN_10c368f0(int A, char B, int C)
{
    for (int i = 0; i < UnknownC4; i++)
    {
        if (Unknown04[i].Unknown00 == A && Unknown04[i].Unknown08 == B)
        {
            Unknown04[i].Unknown04 += C;
            return;
        }
    }
    Unknown04[UnknownC4].Unknown00 = A;
    Unknown04[UnknownC4].Unknown08 = B;
    Unknown04[UnknownC4].Unknown04 = C;
    UnknownC4++;
}
