// Game/Class_10E6C5D0_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E6C5D0.h"

extern const char DAT_10e6c608[];

// FUNCTION: 0x10A8A670 ?FUN_10a8a670@Class_10E6C5D0@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E6C5D0::FUN_10a8a670()
{
    if (!m_Next)
        return Class_109081E0(DAT_10e6c608);
    return m_Next->FUN_10a8a670();
}
