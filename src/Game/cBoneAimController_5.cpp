// Game/cBoneAimController_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Struct_10A2C500.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10A2C530 ?IsAngleBelow@cBoneAimController@@QAE_NPAXPAHM@Z
bool cBoneAimController::IsAngleBelow(void* A, int* B, float C)
{
    Struct_10A2C500* Entry = (Struct_10A2C500*)FindEntry(A, B);
    if (Entry && !Entry->Unknown7D)
    {
        float Value = Entry->UnknownAC * 180.0f * 0.3183098861837907;
        if (!(Value >= DAT_10eafbdc))
            Value = -Value;
        if (Value < C)
            return true;
    }
    return false;
}
