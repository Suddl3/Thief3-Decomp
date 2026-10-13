// Game/Class_10E94100_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10BDB3A0.h"
#include "Game/Class_10BFB8C0.h"
#include "Game/Class_10BFB8D0.h"
#include "Game/Class_10E94100.h"
#include "Game/cAISpeech.h"

double GetTimeSeconds();

class Class_10E97B00
{
public:
    virtual void Serialize(void* A);

    Class_10E97B00(const char* Name);
    Class_10E97B00(const Class_10E97B00& Other);
    Class_10E97B00(const Class_1090A780& Name);
    Class_10E97B00& operator=(const Class_10E97B00& Other);

    cString m_Name;
};

class Class_10FF667C
{
public:
    char Unknown00[0x28];
    Class_10BFB8C0* Unknown28;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BDC860 ?FUN_10bdc860@Class_10E94100@@QAEXH@Z
void Class_10E94100::FUN_10bdc860(int A)
{
    if ((char)A == 0)
    {
        double Now = GetTimeSeconds();
        if (Now < DAT_10ff667c->Unknown28->GetTime(5))
            return;
    }
    Class_10E97B00 Name("+Frustration:Continue");
    if (((Class_10BDB3A0*)this)->IsTargetAbove())
        Name = Class_10E97B00(",?EnemyLocation:up");
    {
        cString Text(DAT_10e47660);
        ((cAISpeech*)this)->FUN_10bc7d70(&Name, 0x14, 9, &Text, true);
    }
    ((Class_10BFB8D0*)DAT_10ff667c->Unknown28)->FUN_10bfb8d0(5);
}
