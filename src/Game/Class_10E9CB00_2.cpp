// Game/Class_10E9CB00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cResSound.h"

struct Struct_10C60E60 {};

// FUNCTION: 0x10C60E60 ?ReleaseData@cResSound@@UAEXXZ
void cResSound::ReleaseData()
{
    if (m_Data)
        m_LoadedSize -= m_DataSize;
    delete m_Data;
    m_Data = 0;
    delete Unknown130;
    Unknown130 = 0;
}
