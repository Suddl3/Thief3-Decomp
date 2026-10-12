// Game/cFactionPane.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cFactionPane.h"
#include "Game/Object_10B5AFF0.h"

// FUNCTION: 0x10B5AFF0 ?ResetStyles@cFactionPane@@QAEXXZ
void cFactionPane::ResetStyles()
{
    if (m_HammerFaction)
        m_HammerFaction->Virtual70(0);
    if (m_PaganFaction)
        m_PaganFaction->Virtual70(0);
}
