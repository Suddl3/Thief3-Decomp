// Game/SoundSchema_15.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/SoundSchema.h"

// FUNCTION: 0x10C66900 ?GetMetaSound@SoundSchema@@UAEHH@Z
int SoundSchema::GetMetaSound(int param)
{
    return m_MetaSounds[param];
}
