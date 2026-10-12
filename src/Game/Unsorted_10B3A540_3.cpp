// Game/Unsorted_10B3A540_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B3A520.h"

// FUNCTION: 0x10B3ABF0 ?GetEntries@@YAPAVClass_10B3A460@@XZ
Class_10B3A460* GetEntries()
{
    static Class_10B3A520 GSingleton;
    return &GSingleton;
}
