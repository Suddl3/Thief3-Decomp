// Game/Class_10E7EA48_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"

class AGarrett
{
public:
    char Unknown00[0x54C];
    unsigned char InputSpeed;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

class Class_10E7EA48 : public Class_10AA82D0
{
public:
    void FUN_10b4e7a0(AGarrett* Garrett);

    int Unknown10;
};

// FUNCTION: 0x10B4E7A0 ?FUN_10b4e7a0@Class_10E7EA48@@QAEXPAVAGarrett@@@Z
void Class_10E7EA48::FUN_10b4e7a0(AGarrett* Garrett)
{
    if (Garrett->InputSpeed == 3)
    {
        ((Class_10B39530*)GetLinkedObject())->Play(1, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    }
    switch (Unknown10)
    {
    case 1:
        ((Class_10B39530*)GetLinkedObject())->Play(0x33, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        break;
    case 2:
        ((Class_10B39530*)GetLinkedObject())->Play(0x35, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        break;
    case 3:
        ((Class_10B39530*)GetLinkedObject())->Play(0x37, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        break;
    case 4:
        ((Class_10B39530*)GetLinkedObject())->Play(0x39, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        break;
    }
}
