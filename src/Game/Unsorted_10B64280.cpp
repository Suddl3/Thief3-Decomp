// Game/Unsorted_10B64280.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15960.h"
#include "Game/Class_10B64280.h"

void* GetWindowManager();

// FUNCTION: 0x10B64280 ?FUN_10b64280@Class_10B64280@@QAEXXZ
void Class_10B64280::FUN_10b64280()
{
    bool Hidden = !Unknown17C;
    FUN_10b744b0();
    if (Hidden)
        static_cast<Class_10B15960*>(GetWindowManager())->OpenMainMenuWindow(0);
}
