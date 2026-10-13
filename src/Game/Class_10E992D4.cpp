// Game/Class_10E992D4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_109B6D50.h"
#include "Game/Class_10E9925C.h"
#include "Game/Class_10E992D4.h"
#include "Game/Class_10C26570.h"
#include "Game/Class_10C3CFC0.h"
#include "Core/Core.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10C1A940.h"
#include "Game/Class_10C1A950.h"
#include "Game/Class_10C1AAC0.h"
#include "Game/Class_10E98D08.h"
#include "Game/Class_10C28EF0.h"
#include "Game/Class_10C28F00.h"
#include "Game/SoundNotifier.h"
#include "Game/Class_10E99370.h"
#include "Game/Struct_10C1AAD0.h"
#include "Game/Struct_10C1ACA0.h"
#include "Game/Struct_10C1AD20.h"
#include "Game/Struct_10C1AF80.h"
#include "Game/Class_10C1AAD0.h"
#include "Game/Class_10C1AF80.h"
#include "Game/cMenu.h"
#include "Game/Class_10E98F00.h"
#include "Game/Class_10E99020.h"
#include "Game/Class_10E8D7AC.h"
#include "Game/Class_10E98F48.h"

// FUNCTION: 0x10C265C0 ?Register@Class_10E992D4@@QAEXXZ
void Class_10E992D4::Register()
{
    if (FUN_10c26490() && m_RegistryId >= 0 && !Virtual8())
    {
        FUN_10c26490()->FUN_109bf5f0(m_RegistryId, Unknown10);
        Unknown34 = true;
    }
}

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

// FUNCTION: 0x10C266D0 ?SyncRegistration@Class_10E992D4@@UAEXXZ
void Class_10E992D4::SyncRegistration()
{
    if (!Unknown34)
    {
        if (Unknown38 > 0)
            Register();
    }
    else if (Unknown38 == 0)
        Unregister();
}

// FUNCTION: 0x10C270B0 ?FUN_10c270b0@Class_10E992D4@@QAEEXZ
unsigned char Class_10E992D4::FUN_10c270b0()
{
    return Field44;
}
