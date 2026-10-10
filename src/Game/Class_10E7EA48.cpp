// Game/Unsorted_10B4E000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39530.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    char Unknown454[0xF8];
    char Unknown54C;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();
};

class Class_10B3AE70 : public Class_10AA82D0
{
public:
    virtual void Virtual1();

    void FUN_10b3ae70(AGarrett* Garrett);

    char Unknown04[0xC];
};

class Class_10E7EA48 : public Class_10B3AE70
{
public:
    virtual void FUN_10b4e5e0(AGarrett* Garrett);

    int Unknown10;
};

extern float DAT_10f04aa0;

float FUN_10abc0a0();

void FUN_10abc090(float A);

void FUN_10b1f6a0(AGarrett* Garrett, int A);

// FUNCTION: 0x10B4E5E0 ?FUN_10b4e5e0@Class_10E7EA48@@UAEXPAVAGarrett@@@Z
void Class_10E7EA48::FUN_10b4e5e0(AGarrett* Garrett)
{
    if (Garrett->isCrouching)
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(1, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    else
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    Unknown10 = 0;
    Garrett->Unknown54C = 3;
    DAT_10f04aa0 = FUN_10abc0a0();
    FUN_10abc090(0.2f);
    FUN_10b1f6a0(Garrett, 0);
}
