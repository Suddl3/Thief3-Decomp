// Game/Class_10E7EA48_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

    int GetLinkedObject();
};

class Class_10B3AE70 : public Class_10AA82D0
{
public:
    virtual void Virtual1();

    void ForceBody(AGarrett* Garrett);

    char Unknown04[0xC];
};

class Class_10E7EA48 : public Class_10B3AE70
{
public:
    virtual void FUN_10b4e5e0(AGarrett* Garrett);

    void FUN_10b4e6a0(AGarrett* Garrett);

    int Unknown10;
};

// FUNCTION: 0x10B4E6A0 ?FUN_10b4e6a0@Class_10E7EA48@@QAEXPAVAGarrett@@@Z
void Class_10E7EA48::FUN_10b4e6a0(AGarrett* Garrett)
{
    if (Garrett->Unknown54C == 3)
    {
        ((Class_10B39530*)GetLinkedObject())->Play(0, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    }
    switch (Unknown10)
    {
    case 1:
        ((Class_10B39530*)GetLinkedObject())->Play(3, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    case 2:
        ((Class_10B39530*)GetLinkedObject())->Play(9, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    case 3:
        ((Class_10B39530*)GetLinkedObject())->Play(0xf, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    case 4:
        ((Class_10B39530*)GetLinkedObject())->Play(0x15, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    }
}
