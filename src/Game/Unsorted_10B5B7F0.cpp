// Game/Unsorted_10B5B7F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cOptionsWindow.h"

void FUN_10b792d0();

void* GetWindowManager();

class Class_10B17220
{
public:
    bool FUN_10b17220();
};

// FUNCTION: 0x10B5B7F0 ?CancelAndClose@cOptionsWindow@@QAEXXZ
void cOptionsWindow::CancelAndClose()
{
    FUN_10b57cb0(0);
    Close();
}

// FUNCTION: 0x10B5BF10 ?FUN_10b5bf10@@YA_NXZ
bool FUN_10b5bf10()
{
    FUN_10b792d0();
    return static_cast<Class_10B17220*>(GetWindowManager())->FUN_10b17220();
}
