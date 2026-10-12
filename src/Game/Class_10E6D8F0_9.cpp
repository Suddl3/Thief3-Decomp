// Game/Class_10E6D8F0_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10AA6B50_Unknown04.h"

class Class_10E6D8F0;

class Class_10AA6C20_Data
{
public:
    virtual void Virtual0(int Arg0);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int Arg0);
};

class Class_10E662E0
{
public:
    Class_10E662E0() { Unknown0C = -1; }
    virtual ~Class_10E662E0() {}

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
    virtual void Virtual5(int Arg0, int Arg1, Class_10E662E0* Arg2, int Arg3);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6D8F0 : public Class_10AA6B50_Unknown04, public cIntArray
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
    virtual void RemoveValue(int Arg0);
    virtual void RemoveEntry(int Arg0);
    virtual int Virtual12(int Arg0);
    virtual int Virtual13(int Arg0, int Arg1);

    int Unknown14;
};

// FUNCTION: 0x10AA6C20 ?RemoveValue@Class_10E6D8F0@@UAEXH@Z
void Class_10E6D8F0::RemoveValue(int Arg0)
{
    int Index = Virtual12(Arg0);
    int Value = Virtual13(Index, Arg0);
    Class_10AA6C20_Data* Elem = (Class_10AA6C20_Data*)Data[Index];
    if (Elem->Virtual3(Value))
    {
        Elem->Virtual0(1);
        Data[Index] = 0;
        if (Class_10AA6B50_Unknown04::Unknown04 == 0x7fffffff)
        {
            int Last = Count - 1;
            int Tmp = Data[Index];
            cIntArray& Arr = *this;
            Data[Index] = Data[Last];
            Arr.Data[Last] = Tmp;
            Arr.SetCount(Arr.Count - 1);
        }
    }
    Class_10E662E0 Notice;
    Notice.Unknown04 = Unknown14;
    Notice.Unknown08 = Index;
    Notice.Unknown10 = this;
    DAT_10f46da0->Virtual5(0x16, Arg0, &Notice, 0);
}
