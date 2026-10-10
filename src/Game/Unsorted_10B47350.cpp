// Game/Unsorted_10B47350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10993E20
{
public:
    void FUN_10993e20(int A);
};

class Class_10B7AC30
{
public:
    float FUN_10b7ac30();
};

class Class_10B473D0_Unknown10
{
public:
    char Unknown00[0x4A1];
    bool Unknown4A1;
};

class Class_10B473D0
{
public:
    void FUN_10b473d0();
    FVector FUN_10b47220();

    char Unknown00[4];
    Class_10993E20* Unknown04;
    Class_10B7AC30* Unknown08;
    char Unknown0C[4];
    Class_10B473D0_Unknown10* Unknown10;
    char Unknown14[8];
    bool Unknown1C;
    bool Unknown1D;
    char Unknown1E[2];
    FVector Unknown20;
    float Unknown2C;
};

class Class_10C3E140
{
public:
    unsigned char FUN_10c3e140();
};

class Class_10B7AB80 : public Class_10C3E140
{
public:
    void FUN_10b7ab80(int A, float B);
};

class Class_10B7AD70 : public Class_10B7AB80
{
public:
    void FUN_10b7b8a0();
    void FUN_10b7b820();
    void FUN_10b7abb0(int A);
    void FUN_10b7b760(int A);
    void FUN_10b7ac80(unsigned char A);
    void FUN_10b7b460(int A, int B, int C, int D);
    void FUN_10b7b610(int A, int B);
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int A);
};

class Class_10B47660_Member
{
public:
    char Unknown000[0x4A1];
    bool Unknown4A1;
};

class Class_10B47660
{
public:
    void FUN_10b47660(int A, int B);
    void FUN_10b47350(int A, int B, float C, int D, int E, int F);

    int Unknown00;
    int Unknown04;
    Class_10B7AD70* Unknown08;
    Class_10B7AD70* Unknown0C;
    Class_10B47660_Member* Unknown10;
    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    bool Unknown1D;
    char Unknown1E[0x2E];
    Class_10BFBD70 Unknown4C;
};

// FUNCTION: 0x10B47350 ?FUN_10b47350@Class_10B47660@@QAEXHHMHHH@Z
void Class_10B47660::FUN_10b47350(int A, int B, float C, int D, int E, int F)
{
    Unknown0C->FUN_10b7ac80(0);
    Unknown0C->FUN_10b7b820();
    Unknown0C->FUN_10b7ab80(A, C);
    Unknown0C->FUN_10b7abb0(0);
    Unknown0C->FUN_10b7b460(D, E, 0, F);
    Unknown0C->FUN_10b7b610(B, F);
    if (Unknown1C)
    {
        Unknown1D = false;
        Unknown10->Unknown4A1 = true;
    }
}

// FUNCTION: 0x10B473D0 ?FUN_10b473d0@Class_10B473D0@@QAEXXZ
void Class_10B473D0::FUN_10b473d0()
{
    if (Unknown1C)
    {
        Unknown1D = true;
        Unknown10->Unknown4A1 = false;
        Unknown04->FUN_10993e20(0);
        Unknown20 = FUN_10b47220();
        Unknown2C = Unknown08->FUN_10b7ac30();
    }
}
