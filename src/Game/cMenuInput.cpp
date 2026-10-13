// Game/cMenuInput.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

extern void* DAT_10e7aaac[];

extern float DAT_10f03038;

extern float DAT_10f0303c;

class cMenuInput
{
public:
    cMenuInput();

    void** Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
};

// FUNCTION: 0x10B26690 ??0cMenuInput@@QAE@XZ
cMenuInput::cMenuInput()
{
    Unknown00 = DAT_10e7aaac;
    Config::Instance()->GetFloat("T3Settings", "MenuInputInitialDelay", &DAT_10f03038, 0);
    Config::Instance()->GetFloat("T3Settings", "MenuInputRepeatDelay", &DAT_10f0303c, 0);
}
