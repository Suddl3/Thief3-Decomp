// Game/Class_10E7AD54.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7AD54.h"
#include "Game/Class_10B28950.h"
#include "Game/Struct_10B28950.h"

// FUNCTION: 0x10B289C0 ?Update@Class_10E7AD54@@UAEXM@Z
void Class_10E7AD54::Update(float Delta)
{
    m_Elapsed += Delta;
    if (m_Elapsed > (float)m_Duration)
        FUN_10b289f0(true);
}

// FUNCTION: 0x10B28B60 ?FUN_10b28b60@Class_10E7AD54@@UAEXXZ
void Class_10E7AD54::FUN_10b28b60()
{
    FUN_10b289f0(false);
}
