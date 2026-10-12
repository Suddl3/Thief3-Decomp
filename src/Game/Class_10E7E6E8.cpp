// Game/Class_10E7E6E8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39530.h"

class AGarrett;

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

class Class_10E7E730 : public Class_10B3AE70
{
public:
    void StopBody(AGarrett* Garrett);
};

class Class_10E7E6E8 : public Class_10E7E730
{
public:
    virtual void FUN_10b4a0d0(AGarrett* Garrett);

    bool Unknown10;
    float Unknown14;
};

// FUNCTION: 0x10B4A0D0 ?FUN_10b4a0d0@Class_10E7E6E8@@UAEXPAVAGarrett@@@Z
void Class_10E7E6E8::FUN_10b4a0d0(AGarrett* Garrett)
{
    ((Class_10B39530*)GetLinkedObject())->Play(0xa3, 0.0f, 1.0f, 0x101, 0, 0, -1.0f);
    StopBody(Garrett);
    ForceBody(Garrett);
    Unknown10 = false;
    Unknown14 = 1.5f;
}
