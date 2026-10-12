// Game/Class_10E66320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E66320.h"

// FUNCTION: 0x10A2F510 ?FUN_10a2f510@Class_10E66320@@UAEPAVFString@@XZ
FString* Class_10E66320::FUN_10a2f510()
{
    if (m_HasName)
        return &m_Name;
    return 0;
}
