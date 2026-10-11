// Game/cConCameraController_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cConCameraController.h"

// FUNCTION: 0x10AACE40 ?FUN_10aace40@cConCameraController@@UAE_NH@Z
bool cConCameraController::FUN_10aace40(int Kind)
{
    switch (Kind)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 0xC:
    case 0xD:
    case 0xE:
        return true;
    }
    return false;
}
