// Game/Unsorted_10B326B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Options.h"
#include "Game/Class_10AC14F0.h"

class Class_10B21340
{
public:
    int FUN_1098e330(int Id, int* Out);
};

class Class_10B32B50
{
public:
    void BeginArrowAttach(Class_10B21340* A);
    void FUN_10b31fb0(int* A, Class_10B21340* B);
    void FUN_10b32620(Class_10B21340* A);
    void FUN_10b326b0(Class_10B21340* A);
    bool FUN_10b32200(Class_10B21340* A);

    char Unknown00[0x32];
    bool Unknown32;
    int Unknown34;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x10];
    Class_10AC14F0* Unknown10;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

Options* GetOptions();

// FUNCTION: 0x10B326B0 ?FUN_10b326b0@Class_10B32B50@@QAEXPAVClass_10B21340@@@Z
void Class_10B32B50::FUN_10b326b0(Class_10B21340* A)
{
    float First;
    int Second;
    float Third;
    if (GetOptions()->Get(10))
    {
        if (!FUN_10b32200(A))
        {
            First = 20.0f;
            Second = 0x40000000;
            Third = 30.0f;
            A->FUN_1098e330(0x100509, (int*)&First);
            A->FUN_1098e330(0x10050b, &Second);
            A->FUN_1098e330(0x10050a, (int*)&Third);
            DAT_10f3a3d8->Unknown10->FUN_10ac14f0(First, Second, Third, false);
        }
    }
}
