// Game/PlayerStateController_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/PlayerStateController.h"
#include "Game/Class_10B22D60_Unknown90.h"

// FUNCTION: 0x10B22BD0 ?FUN_10b22bd0@PlayerStateController@@QAEXH@Z
void PlayerStateController::FUN_10b22bd0(int A)
{
    int Value = Unknown90->Virtual8(A);
    if (Value != Unknown90->Virtual4())
        SetSlot((void**)&Unknown90, Value);
}
