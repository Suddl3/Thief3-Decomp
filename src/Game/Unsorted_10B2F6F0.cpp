// Game/Unsorted_10B2F6F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cCountLabel.h"

// FUNCTION: 0x10B2F6F0 ?SetCount@cCountLabel@@QAEXH@Z
void cCountLabel::SetCount(int p1)
{
    if (p1 != m_Count)
    {
        m_Count = p1;
        RefreshLabel();
    }
}
