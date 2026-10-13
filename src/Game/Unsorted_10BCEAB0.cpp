// Game/Unsorted_10BCEAB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9313C.h"

extern void* DAT_10e92d60[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class DeathState : public Class_10E90D70
{
public:
    DeathState(int A, int B, int C, int D, void* E, bool F);

    char Unknown40[0x14];
};

class Class_10E92D60 : public DeathState
{
public:
    Class_10E92D60* Initialize(int A, int B, bool C, int D, void* E, int F);

    bool Unknown54;
};

// FUNCTION: 0x10BCEBC0 ?Initialize@Class_10E92D60@@QAEPAV1@HH_NHPAXH@Z
Class_10E92D60* Class_10E92D60::Initialize(int A, int B, bool C, int D, void* E, int F)
{
    this->DeathState::DeathState(A, B, F, D, E, false);
    Unknown00 = DAT_10e92d60;
    Unknown54 = C;
    return this;
}
