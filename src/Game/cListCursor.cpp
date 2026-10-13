// Game/cListCursor.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cListCursor.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10B25E90 ?FUN_10b25e90@cListCursor@@QAEXH@Z
void cListCursor::FUN_10b25e90(int A)
{
    Unknown1C = false;
    if (Unknown20 > DAT_10eafbdc)
    {
        if (Unknown20 <= 0.5)
        {
            bool Recompute = m_Index != 0 || Unknown08 == 0;
            if (Unknown24 == 0)
            {
                m_Index = Unknown08;
                m_InListA = Unknown14;
                if (Recompute)
                    Advance();
            }
        }
        Unknown08 = m_Index;
        Unknown14 = m_InListA;
        Unknown20 = -1.0f;
    }
}
