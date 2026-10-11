// Game/Unsorted_10C285C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C16580.h"
#include "Game/Class_10C28B10.h"
#include "Game/Class_109081E0.h"

double FUN_10c00480();

class Class_10C285C0
{
public:
    void FUN_10c285c0();

    int Unknown00;
    char Unknown04[0x1c];
    int Unknown20;
};

int FUN_10c28480(int A, Class_109081E0* B, Class_109081E0* C);

class Class_10C28740
{
public:
    void FUN_10c28740();

    int Unknown00;
    char Unknown04[0x24];
    int Unknown28;
};

// FUNCTION: 0x10C285C0 ?FUN_10c285c0@Class_10C285C0@@QAEXXZ
void Class_10C285C0::FUN_10c285c0()
{
    Class_109081E0 Head("head");
    Class_109081E0 HeadFlex("head_flex");
    Unknown20 = FUN_10c28480(Unknown00, &HeadFlex, &Head);
}

// FUNCTION: 0x10C28740 ?FUN_10c28740@Class_10C28740@@QAEXXZ
void Class_10C28740::FUN_10c28740()
{
    Class_109081E0 Spine("M1 Spine1");
    {
        Class_109081E0 SpineFlex("spine_flex2");
        Unknown28 = FUN_10c28480(Unknown00, &SpineFlex, &Spine);
    }
    if (Unknown28)
        return;
}

// FUNCTION: 0x10C28B10 ??0Class_10C28B10@@QAE@HH@Z
Class_10C28B10::Class_10C28B10(int A, int B) : Unknown00(A), Unknown08(B)
{
    Unknown10 = FUN_10c00480();
}
