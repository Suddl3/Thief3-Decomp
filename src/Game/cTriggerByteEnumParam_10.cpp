// Game/cTriggerByteEnumParam_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdlib.h>
#include "Game/cString.h"

int appStricmp(const char* A, const char* B);

class FName
{
public:
    Class_1090A780 FUN_10af9730() const;

    unsigned long Value;
};

class Class_10A8C4D0_Unknown60
{
public:
    char Unknown00[0x34];
    FName* Unknown34;
    int Unknown38;
};

class Class_10A8C4D0_Unknown04
{
public:
    char Unknown00[0x60];
    Class_10A8C4D0_Unknown60* Unknown60;
};

static const char* TextOf(const Class_1090A780& Text)
{
    return Text.Unknown00 ? Text.Unknown00 : DAT_10e47660;
}

class cTriggerByteEnumParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10a8c4d0(const cString& Name);

    Class_10A8C4D0_Unknown04* Unknown04;
    int Unknown08;
    FName Unknown0C;
};

// FUNCTION: 0x10A8C4D0 ?FUN_10a8c4d0@cTriggerByteEnumParam@@UAEHABVcString@@@Z
int cTriggerByteEnumParam::FUN_10a8c4d0(const cString& Name)
{
    if (!Unknown04 || !Unknown04->Unknown60)
    {
        Unknown08 = atoi(*Name);
        return 1;
    }
    for (int i = 0; i < Unknown04->Unknown60->Unknown38; i++)
    {
        bool Equal = appStricmp(*Name, TextOf(Unknown04->Unknown60->Unknown34[i].FUN_10af9730())) == 0;
        if (Equal)
        {
            Unknown08 = i;
            Unknown0C = Unknown04->Unknown60->Unknown34[i];
            return 1;
        }
    }
    return 0;
}
