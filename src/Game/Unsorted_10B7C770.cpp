// Game/Unsorted_10B7C770.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4B178.h"
#include "Game/Class_10E4B180.h"

class Object_10B7C7C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5(int A, int B);
};

class Class_10D9D740
{
public:
    void FUN_10d9d740();
};

class Class_10E4B180_Unknown4C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// FUNCTION: 0x10B7C770 ?Shutdown@Class_10E4B180@@UAEXXZ
void Class_10E4B180::Shutdown()
{
    for (int i = 0; i < Unknown44; i++)
        Unknown4C[i]->Virtual1();
    Class_10D9D740* Object = Unknown34;
    if (Object)
    {
        Object->FUN_10d9d740();
        delete Object;
        Unknown34 = 0;
    }
}

// FUNCTION: 0x10B7C7C0 ?FUN_10b7c7c0@Class_10E4B178@@UAEHHH@Z
int Class_10E4B178::FUN_10b7c7c0(int A, int B)
{
    for (int i = 0; i < Unknown30; i++)
    {
        int Result = Unknown38[i]->Virtual5(A, B);
        if (Result)
            return Result;
    }
    return 0;
}
