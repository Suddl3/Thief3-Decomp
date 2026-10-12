// Game/WindowManager_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class WindowManager
{
public:
    char Unknown00[0xCC];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;

    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);
};

// FUNCTION: 0x109E4300 ?UIPositionToScreen@WindowManager@@QAEXPAVFVector@@PAH1@Z
void WindowManager::UIPositionToScreen(FVector* Pos, int* OutX, int* OutY)
{
    *OutX = (int)((Pos->X + 1.0f) * (AssumedUIScreenWidth * 0.5f));
    *OutY = (int)((1.0f - Pos->Y) * (AssumedUIScreenHeight * 0.5f));
}
