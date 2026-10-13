// Game/Class_10E992D4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_109B6D50.h"
#include "Game/Class_10E9925C.h"
#include "Game/Class_10E992D4.h"

// FUNCTION: 0x10C26600 ?Unregister@Class_10E992D4@@QAEXXZ
void Class_10E992D4::Unregister()
{
    if (Unknown34 && FUN_10c26490() && m_RegistryId >= 0)
    {
        if (FUN_10c26490()->FUN_109b6c50(m_RegistryId) != -1)
            FUN_10c26490()->FUN_109c33f0(m_RegistryId, Unknown10);
        FUN_10c26770();
        Unknown34 = false;
    }
}
