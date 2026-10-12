// Game/PlayerStateController_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/PlayerStateController.h"
#include "Game/Class_10B22D60_Unknown90.h"

// FUNCTION: 0x10B22CE0 ?HandleBodyCarryNotification@PlayerStateController@@QAEXH@Z
void PlayerStateController::HandleBodyCarryNotification(int A)
{
    int Value = Unknown90->Virtual9(m_Body, A);
    if (Value != Unknown90->Virtual4())
        SetSlot((void**)&Unknown90, Value);
}
