// Game/Unsorted_10AA66D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

class Class_10AA6B50_Data
{
public:
    virtual void Virtual0(int Arg0);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int Virtual5();
};

class Class_10E5D5E0;

class Class_10E6D8F0;

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

class Class_10AA6B50_Unknown04
{
public:
    int Unknown04;
};

// Include/Game/Class_10E6D8F0.h, copied whole with slot 19 (FUN_10aa66d0) added and the bases of the accepted sibling.
class Class_10E6D8F0 : public Class_10AA6B50_Unknown04, public Class_10BFBD70
{
public:
    virtual ~Class_10E6D8F0();
    virtual void FUN_10c3e130(int Value);
    virtual void Virtual2();
    virtual void FUN_10aa69a0(int A);
    virtual void Virtual4();
    virtual int FUN_10aa6390();
    virtual void FUN_10bfbb50(int param);
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual int FUN_10aa65c0(int A);
    virtual int FUN_10aa6600(int Index, int Value);
    virtual void Virtual14();
    virtual void Virtual15();
    virtual int FUN_10aa6650(int Index);
    virtual int FUN_10aa6680(int Index, int B);
    virtual int FUN_10aa66b0(int Index);
    virtual void FUN_10aa66d0(int A, int B);

    int Unknown14;
};

// The accepted sibling's copy of Class_10E5D5E0 (its vtable is 0x10E662E0).
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

// FUNCTION: 0x10AA66D0 ?FUN_10aa66d0@Class_10E6D8F0@@UAEXHH@Z
void Class_10E6D8F0::FUN_10aa66d0(int A, int B)
{
    Class_10AA6B50_Data* Ea = (Class_10AA6B50_Data*)Data[A];
    Class_10AA6B50_Data* Eb = (Class_10AA6B50_Data*)Data[B];
    if ((Ea && Ea->Virtual5()) || (Eb && Eb->Virtual5()))
    {
        Data[B] = (int)Ea;
        Data[A] = (int)Eb;
        int Value = (Ea && Ea->Virtual5()) ? Ea->Virtual5() : Eb->Virtual5();
        Class_10E5D5E0 Notice;
        Notice.Unknown10 = this;
        Notice.Unknown04 = Unknown14;
        Notice.Unknown08 = A;
        Notice.Unknown0C = B;
        DAT_10f46da0->Virtual5(0x17, Value, &Notice, 0);
    }
}
