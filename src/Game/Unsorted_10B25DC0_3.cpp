// Game/Unsorted_10B25DC0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cMenuInput.h"

// FUNCTION: 0x10B266E0 ?GetMenuInput@@YAPAVcMenuInput@@XZ
cMenuInput* GetMenuInput()
{
    static cMenuInput GSingleton;
    return &GSingleton;
}
