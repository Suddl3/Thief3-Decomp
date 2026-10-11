// Game/Class_10E6C6C4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

void FUN_10d3d990(void* Stream, int* Value);

class Class_10E6C6C4
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
    virtual void FUN_10a8bfc0(int A, void* Stream);

    FName Unknown04;
};

// FUNCTION: 0x10A8BFC0 ?FUN_10a8bfc0@Class_10E6C6C4@@UAEXHPAX@Z
void Class_10E6C6C4::FUN_10a8bfc0(int A, void* Stream)
{
    FUN_10d3d990(Stream, (int*)&Unknown04.FUN_10af9730());
}
