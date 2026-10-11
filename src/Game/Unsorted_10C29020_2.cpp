// Game/Unsorted_10C29020_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"

class Class_10DBD510;

class Class_10BBA080
{
public:
    unsigned char FUN_10bb8c60();
    int FUN_10bba080(Class_1098E330* Obj);
    float FUN_10bb8e70();
    bool FUN_10bb8e00();

    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10C292E0
{
public:
    void FUN_10c292e0(int Id, double Value);
};

class Class_10C29410
{
public:
    void FUN_10c29410(int Value);
    void FUN_10c29380(int Value);

    Class_10BBA080* Unknown00;
    Class_10BFBD70 Unknown04;
    char Pad10[0x8];
    float Unknown18;
    bool Unknown1C;
    bool Unknown1D;
    char Pad1E[0x2];
    int Unknown20;
};

double FUN_10c00480();

// FUNCTION: 0x10C29380 ?FUN_10c29380@Class_10C29410@@QAEXH@Z
void Class_10C29410::FUN_10c29380(int Value)
{
    double Scale = Unknown00->FUN_10bb8e70();
    Unknown18 = FUN_10c00480() + Scale;
    float Local = 0.0f;
    ((Class_1098E330*)Value)->FUN_1098e330(0x100790, (int*)&Local);
    ((Class_10C292E0*)Value)->FUN_10c292e0(0x40100781, FUN_10c00480() + Local);
    Unknown1C = Unknown00->FUN_10bb8e00();
    if (!Unknown1C)
        ((Class_10971570*)Value)->FUN_10971570(0x4200077e, &Unknown1D);
    Unknown20 = 0;
}
