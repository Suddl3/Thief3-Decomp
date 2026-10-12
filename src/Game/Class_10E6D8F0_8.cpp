// Game/Class_10E6D8F0_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10AA6B50_Data.h"
#include "Game/Class_10AA6B50_Unknown04.h"

class Class_10E6D8F0;

class Class_10E5D5E0
{
public:
    Class_10E5D5E0() { Unknown0C = -1; }
    virtual ~Class_10E5D5E0() {}

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    Class_10E6D8F0* Unknown10;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Arg0, int Arg1, Class_10E5D5E0* Arg2, int Arg3);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6D8F0 : public Class_10AA6B50_Unknown04, public Class_10BFBD70
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
    virtual void RemoveEntry(int Arg0);

    int Unknown14;
};

// FUNCTION: 0x10AA6B50 ?RemoveEntry@Class_10E6D8F0@@UAEXH@Z
void Class_10E6D8F0::RemoveEntry(int Arg0)
{
    Class_10AA6B50_Data* Elem = (Class_10AA6B50_Data*)Data[Arg0];
    int Value = Elem->Virtual5();
    if (Elem->Virtual4())
    {
        Elem->Virtual0(1);
        Data[Arg0] = 0;
        if (Class_10AA6B50_Unknown04::Unknown04 == 0x7fffffff)
        {
            int Last = Count - 1;
            int Tmp = Data[Arg0];
            Class_10BFBD70& Arr = *this;
            Data[Arg0] = Data[Last];
            Arr.Data[Last] = Tmp;
            Arr.FUN_10bfbd70(Arr.Count - 1);
        }
    }
    Class_10E5D5E0 Notice;
    Notice.Unknown04 = Unknown14;
    Notice.Unknown08 = Arg0;
    Notice.Unknown10 = this;
    DAT_10f46da0->Virtual5(0x16, Value, &Notice, 0);
}
