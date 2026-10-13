// Game/cFactionPane.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cFactionPane.h"
#include "Game/Object_10B5AFF0.h"
#include "Core/Core.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10B5B050.h"
#include "Game/Class_10B5FAE0.h"
#include "Game/Class_10B61020.h"
#include "Game/Class_10B64430.h"
#include "Game/Class_10B78780.h"
#include "Game/Info_10B66060.h"
#include "Game/cString.h"
#include "Game/Class_10B56C80.h"
#include "Game/Class_10B66060.h"

extern void* DAT_10e82af8[];

// FUNCTION: 0x10B5AEA0 ?InitDefaults@cFactionPane@@QAEPAV1@XZ
cFactionPane* cFactionPane::InitDefaults()
{
    FUN_10b78780();
    m_HammerFaction = 0;
    m_PaganFaction = 0;
    Unknown00 = DAT_10e82af8;
    return this;
}

// FUNCTION: 0x10B5AFF0 ?ResetStyles@cFactionPane@@QAEXXZ
void cFactionPane::ResetStyles()
{
    if (m_HammerFaction)
        m_HammerFaction->Virtual70(0);
    if (m_PaganFaction)
        m_PaganFaction->Virtual70(0);
}
