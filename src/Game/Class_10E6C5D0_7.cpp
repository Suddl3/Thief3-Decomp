// Game/Class_10E6C5D0_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10E6C5D0.h"

extern const char DAT_10e6c100[];

// FUNCTION: 0x10A8A6B0 ?FUN_10a8a6b0@Class_10E6C5D0@@UAE?AVcString@@XZ
cString Class_10E6C5D0::FUN_10a8a6b0()
{
    if (!m_Next)
        return cString(DAT_10e6c100);
    return m_Next->FUN_10a8a6b0();
}
