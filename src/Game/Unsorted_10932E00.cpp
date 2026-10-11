// Game/Unsorted_10932E00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C49740.h"
#include "Game/Class_109081E0.h"

struct Group_10BA14C0;

struct Struct_10C32C30;

struct Entry_10C32C30
{
public:
    union
    {
        Entry_10C32C30* Next;
        Struct_10C32C30* Unknown00;
        int Count;
    };
    union
    {
        Entry_10C32C30* Prev;
        int Unknown04;
    };
    Group_10BA14C0* Data;
    char Unknown0C[0x90];
    int Unknown9C;
};

class Class_10E4A668
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual ~Class_10E4A668();
};

Class_109081E0 FUN_10932a70(const char* Name);

Class_10E4A668* FUN_10955860(const char* Name);

int FUN_10932c50(int A, Class_10E4A668* P);

void FUN_10932d40(int A, int B);

extern Class_10C49740 DAT_10eff31c;

// FUNCTION: 0x10932E00 ?FUN_10932e00@@YAHPBD@Z
int FUN_10932e00(const char* Name)
{
    Class_109081E0 Key = FUN_10932a70(Name);
    Entry_10C32C30* Found = 0;
    DAT_10eff31c.FUN_10c49740((int*)&Key, &Found);
    int Result;
    if (Found)
    {
        Result = (int)Found;
        Found->Unknown9C += 1;
    }
    else
    {
        Class_10E4A668* Obj = FUN_10955860(Name);
        if (Obj)
        {
            Result = FUN_10932c50((int)&Key, Obj);
            FUN_10932d40((int)&Key, Result);
            delete Obj;
        }
        else
        {
            Result = 0;
        }
    }
    return Result;
}
