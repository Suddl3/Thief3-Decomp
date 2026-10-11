// Game/Unsorted_10B4F510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
};

class Class_10E7EC88 : public Class_10AA82D0
{
public:
    void FUN_10b4f510(AGarrett* Garrett);

    char Pad[0x2C - sizeof(Class_10AA82D0)];
    int Unknown2C;
};

class Class_10B4F590 : public Class_10AA82D0
{
public:
    void FUN_10b4f590(AGarrett* Garrett);

    char Unknown28[0x4];
    int Unknown2C;
};

// FUNCTION: 0x10B4F510 ?FUN_10b4f510@Class_10E7EC88@@QAEXPAVAGarrett@@@Z
void Class_10E7EC88::FUN_10b4f510(AGarrett* Garrett)
{
    if (!Unknown2C) {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x53, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x59, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    } else {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x56, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x5c, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    }
}

// FUNCTION: 0x10B4F590 ?FUN_10b4f590@Class_10B4F590@@QAEXPAVAGarrett@@@Z
void Class_10B4F590::FUN_10b4f590(AGarrett* Garrett)
{
    if (Unknown2C == 0)
    {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x54, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x5a, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    }
    else
    {
        if (!Garrett->isCrouching)
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x57, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        else
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x5d, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    }
}
