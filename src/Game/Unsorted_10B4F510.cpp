// Game/Unsorted_10B4F510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B4F590.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
};

class GSLean : public Class_10AA82D0
{
public:
    void PlayLeanMotion(AGarrett* Garrett);

    char Pad[0x2C - sizeof(Class_10AA82D0)];
    int Unknown2C;
};

// FUNCTION: 0x10B4F510 ?PlayLeanMotion@GSLean@@QAEXPAVAGarrett@@@Z
void GSLean::PlayLeanMotion(AGarrett* Garrett)
{
    if (!Unknown2C) {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)GetLinkedObject())->Play(0x53, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)GetLinkedObject())->Play(0x59, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    } else {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)GetLinkedObject())->Play(0x56, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)GetLinkedObject())->Play(0x5c, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    }
}

// FUNCTION: 0x10B4F590 ?FUN_10b4f590@Class_10B4F590@@QAEXPAVAGarrett@@@Z
void Class_10B4F590::FUN_10b4f590(AGarrett* Garrett)
{
    if (Unknown2C == 0)
    {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)GetLinkedObject())->Play(0x54, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)GetLinkedObject())->Play(0x5a, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    }
    else
    {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)GetLinkedObject())->Play(0x57, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)GetLinkedObject())->Play(0x5d, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    }
}
