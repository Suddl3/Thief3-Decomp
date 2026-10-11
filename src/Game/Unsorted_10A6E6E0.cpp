// Game/Unsorted_10A6E6E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BFBD70.h"

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10C08690;

class Class_10AA6290
{
public:
    void FUN_10aa6290(int A);
};

int FUN_10aa6040();

class Class_10A6E760_Virtual11
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A, Class_10BFBD70& B);
};

class Class_10A6E760
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(int A);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Class_10A6E760_Virtual11* Virtual11(int A);

    void FUN_10a6e760(int A);
};

// FUNCTION: 0x10A6E760 ?FUN_10a6e760@Class_10A6E760@@QAEXH@Z
void Class_10A6E760::FUN_10a6e760(int A)
{
    Class_10A6E760_Virtual11* Obj = Virtual11(A);
    if (Obj)
    {
        Class_10BFBD70 Items;
        Obj->Virtual3(A, Items);
    }
    Virtual7(A);
    ((Class_10AA6290*)FUN_10aa6040())->FUN_10aa6290(A);
}
