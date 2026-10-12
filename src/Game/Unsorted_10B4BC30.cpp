// Game/Unsorted_10B4BC30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7E808.h"
#include "Game/Object_10B4BC30.h"

class Class_10E7E7C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int OnAnimationEnd(Object_10B4BC30* A, int B);

    char Unknown04[0xC];
    int Unknown10;
};

void MoveTowardTarget(int A);

void FUN_10b1f370(int A, int B);

// FUNCTION: 0x10B4BC30 ?OnAnimationEnd@Class_10E7E7C0@@UAEHPAVObject_10B4BC30@@H@Z
int Class_10E7E7C0::OnAnimationEnd(Object_10B4BC30* A, int B)
{
    if (B == A->Unknown344)
        return Unknown10;
    return Virtual4();
}

// FUNCTION: 0x10B4BCB0 ?FUN_10b4bcb0@Class_10E7E808@@UAEXH@Z
void Class_10E7E808::FUN_10b4bcb0(int A)
{
    MoveTowardTarget(A);
    FUN_10b1f370(A, 0);
    Virtual4();
}
