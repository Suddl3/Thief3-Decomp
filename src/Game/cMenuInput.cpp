// Game/cMenuInput.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"
#include "Game/cMenuInput.h"

extern void* DAT_10e7aaac[];

extern float DAT_10f03038;

extern float DAT_10f0303c;

// FUNCTION: 0x10B26690 ??0cMenuInput@@QAE@XZ
cMenuInput::cMenuInput()
{
    // vtable pointer: the vtable is the data block at DAT_10e7aaac
    *(void**)this = DAT_10e7aaac;
    Config::Instance()->GetFloat("T3Settings", "MenuInputInitialDelay", &DAT_10f03038, 0);
    Config::Instance()->GetFloat("T3Settings", "MenuInputRepeatDelay", &DAT_10f0303c, 0);
}
