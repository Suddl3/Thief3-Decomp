// Game/Unsorted_10B270D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B27220.h"
#include "Game/Struct_10F0328C.h"

extern Struct_10F0328C DAT_10f0328c[];

// FUNCTION: 0x10B271D0 ?Update@Class_10B27220@@QAEXM@Z
void Class_10B27220::Update(float A)
{
    for (int i = 0; i < 4; i++)
    {
        if (m_Active[i])
        {
            if (i != 0)
            {
                m_Elapsed += A;
                if (m_Elapsed >= DAT_10f0328c[i].Unknown00 && m_StopPending)
                    Stop();
            }
            return;
        }
    }
}
