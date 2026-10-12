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

class Class_10E92C38 : public Class_10E90D70
{
public:
    Class_10E92C38(int A, int B, int C, int D, void* E, bool F);

    char Unknown40[0x14];
};

class Class_10E92D60 : public Class_10E92C38
{
public:
    Class_10E92D60* Initialize(int A, int B, bool C, int D, void* E, int F);

    bool Unknown54;
};

// FUNCTION: 0x10BCEBC0 ?Initialize@Class_10E92D60@@QAEPAV1@HH_NHPAXH@Z
Class_10E92D60* Class_10E92D60::Initialize(int A, int B, bool C, int D, void* E, int F)
{
    this->Class_10E92C38::Class_10E92C38(A, B, F, D, E, false);
    Unknown00 = DAT_10e92d60;
    Unknown54 = C;
    return this;
}

// FUNCTION: 0x10BD0190 ?FUN_10bd0190@Class_10E9313C@@UAEXH@Z
void Class_10E9313C::FUN_10bd0190(int p1)
{
    if (p1 == Unknown1c)
        Unknown1c = 0;
}
