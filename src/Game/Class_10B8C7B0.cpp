// Game/Class_10B8C7B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B8C7B0.h"
#include "Game/Class_10B8C9B0.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10B8DC70.h"
#include "Game/cIntArray.h"

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B8CC60 ?ExitSingleMode@Class_10B8C7B0@@QAEXXZ
void Class_10B8C7B0::ExitSingleMode()
{
    if (m_SingleMode)
    {
        FUN_10d9dcb0()->FUN_10d9e5e0(m_Single);
        m_SingleMode = false;
        Refresh();
    }
}
