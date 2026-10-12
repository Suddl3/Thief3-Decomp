// Game/Unsorted_10B22C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class PlayerStateController
{
public:
    void FUN_10b22d60();
    void SetSlot(void** A, int B);

    char Unknown00[0x90];
    void* Unknown90;
};

// FUNCTION: 0x10B22D60 ?FUN_10b22d60@PlayerStateController@@QAEXXZ
void PlayerStateController::FUN_10b22d60()
{
    SetSlot(&Unknown90, 0xd);
}
