// Game/Unsorted_10B270D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B27220.h"
#include "Game/Struct_10F0328C.h"

extern Struct_10F0328C DAT_10f0328c[];

// FUNCTION: 0x10B271D0 ?FUN_10b271d0@Class_10B27220@@QAEXM@Z
void Class_10B27220::FUN_10b271d0(float A)
{
    for (int i = 0; i < 4; i++)
    {
        if (Unknown08[i])
        {
            if (i != 0)
            {
                Unknown34 += A;
                if (Unknown34 >= DAT_10f0328c[i].Unknown00 && Unknown38)
                    FUN_10b270d0();
            }
            return;
        }
    }
}
