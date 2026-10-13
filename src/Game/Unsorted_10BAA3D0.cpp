// Game/Unsorted_10BAA3D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10BAA3D0.h"

// FUNCTION: 0x10BAA3D0 ?FUN_10baa3d0@Class_10BAA3D0@@QAE_NXZ
bool Class_10BAA3D0::FUN_10baa3d0()
{
    if (m_CachedValue == -1)
    {
        int Value = 0;
        Unknown34->FUN_1098e330(0x8003e8, &Value);
        m_CachedValue = Value;
    }
    return m_CachedValue != 0;
}
