// Game/Class_10E95D00_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB85E0.h"
#include "Game/Class_10BB8620.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BC4160.h"
#include "Game/Class_10E8BE68.h"
#include "Game/cTacticMoveToPoint.h"

extern float DAT_10eafbdc;

double GetTimeSeconds();

class Class_10BE3EA0_Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual int Virtual34();
};

class Class_10E95D00 : public cTacticMoveToPoint
{
public:
    virtual void FUN_10be2ee0(int A, int B, int C, int D, int E);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10be3ea0();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void FUN_10be3e40(int Param);
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();

    bool FUN_10be3220();
    void FUN_10be38e0();
    void FUN_10be3df0();

    char Pad24[0x1c];
    bool Unknown40;
    char Pad41[0x1b];
    int Unknown5C;
    float Unknown60;
};

// FUNCTION: 0x10BE3EA0 ?FUN_10be3ea0@Class_10E95D00@@UAEXXZ
void Class_10E95D00::FUN_10be3ea0()
{
    if (((Class_10BB85E0*)Unknown04)->FUN_10bb85e0())
    {
        Class_10BFF460* Cur = ((Class_10BBB410*)Unknown04)->GetCurrent();
        if (Cur)
        {
            if (((Class_10BFF280*)Cur)->FUN_10bff280())
            {
                Class_10BE3EA0_Result* Res = (Class_10BE3EA0_Result*)((Class_10BFF280*)Cur)->FUN_10bff280();
                if (Res->Virtual34())
                {
                    if (Cur->FUN_10bff330())
                    {
                        ((Class_10BB85E0*)Unknown04)->FUN_10bb8ee0(1);
                        ((Class_10E8BE68*)this)->PopState();
                        return;
                    }
                }
            }
        }
    }
    if (FUN_10be3220())
    {
        ((Class_10BB8620*)Unknown04)->FUN_10bb8620();
        ((Class_10E8BE68*)this)->PopState();
    }
    else if (!Unknown40)
    {
        if (Unknown5C > 8)
        {
            ((Class_10BB85E0*)Unknown04)->FUN_10bb8ee0(0);
            ((Class_10E8BE68*)this)->PopState();
        }
        else
        {
            FUN_10be38e0();
        }
    }
    if (((Class_10AA82D0*)FUN_10bc4160())->GetLinkedObject() == 0)
    {
        if (Unknown60 <= DAT_10eafbdc)
            Unknown60 = (float)GetTimeSeconds();
        if (GetTimeSeconds() - Unknown60 > 1.0)
        {
            FUN_10be3df0();
            Unknown60 = 0.0f;
        }
    }
}
