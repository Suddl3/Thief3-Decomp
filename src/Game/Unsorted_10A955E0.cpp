// Game/Unsorted_10A955E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10A174E0.h"
#include "Game/Struct_10AA3520.h"

class Class_10A95860_Virtual4
{
public:
    char Pad00[4];
    FName Unknown04;
};

class Class_10A95860_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A95860_Virtual4* Virtual4(int A);
};

class Class_10AAB5C0 : public Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10a94fc0();
    virtual void Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);

    Class_10A95860_Unknown08* GetUnknown08();
    int FUN_10a95860(int A, int B);

    union
    {
        int Unknown08;
        int unknown_08;
    };
};

extern Struct_10AA3520* DAT_10f35dec;

double GetSimtimePlayedTimer();

Class_10A174E0* GetStats();

// FUNCTION: 0x10A95860 ?FUN_10a95860@Class_10AAB5C0@@QAEHHH@Z
int Class_10AAB5C0::FUN_10a95860(int A, int B)
{
    if (DAT_10f35dec != 0 && DAT_10f35dec->Unknown70 != 0)
    {
        int Now = (int)(GetSimtimePlayedTimer() * 0.016666666666666666);
        Class_10A95860_Virtual4* First = GetUnknown08()->Virtual4(0);
        Class_10A174E0* Stats = GetStats();
        FName Key = First->Unknown04;
        int Count = Stats->Virtual0(Key);
        Class_10A95860_Virtual4* Second = GetUnknown08()->Virtual4(1);
        Class_10A174E0* Stats2 = GetStats();
        FName Key2 = Second->Unknown04;
        Stats2->Virtual1(Key2.Value, Now);
        if (Count != -1 && Now >= Count)
            return 1;
    }
    return 0;
}
