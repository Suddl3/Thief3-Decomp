// Game/Unsorted_10B55810.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Options.h"
#include "Game/Struct_10B55810.h"
#include "Game/Class_10E81C20.h"
#include "Game/cOptionsWindow.h"

Options* GetOptions();

// FUNCTION: 0x10B55810 ?FUN_10b55810@Class_10E81C20@@UAE?AUStruct_10B55810@@XZ
Struct_10B55810 Class_10E81C20::FUN_10b55810()
{
    return Unknown54;
}

// FUNCTION: 0x10B56520 ?SaveAndClose@cOptionsWindow@@QAEXXZ
void cOptionsWindow::SaveAndClose()
{
    GetOptions()->Save();
    FUN_10b57cb0(0);
    Close();
}
