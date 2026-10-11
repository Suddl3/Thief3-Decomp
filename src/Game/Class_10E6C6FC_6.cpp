// Game/Class_10E6C6FC_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

void FUN_10d3d2d0(void* A, int B);

void FUN_10d3d990(void* Stream, int* Value);

class Class_10E6C6FC
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
    virtual void FUN_10a8c390(int A, void* B);

    int Unknown04;
    int Unknown08;
    FName Unknown0C;
};

// FUNCTION: 0x10A8C390 ?FUN_10a8c390@Class_10E6C6FC@@UAEXHPAX@Z
void Class_10E6C6FC::FUN_10a8c390(int A, void* B)
{
    FUN_10d3d2d0(B, Unknown08);
    FUN_10d3d990(B, (int*)&Unknown0C.FUN_10af9730());
}
