// Game/Unsorted_1091CA20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/cIntArray.h"

class Class_10919C40;

extern float DAT_10e499a4;

double FUN_10d20ec0(double Value);

class Class_1091CB20
{
public:
    Class_1091CB20(Class_10919C40* Owner, const Class_109081E0& Name, float A, float B, bool C, int D);

    int FUN_1091cb20();
    void FUN_1091be70();
    int FUN_1091cb40();
    int GetValue(unsigned int Index);
    int Count()
    {
        if (!Unknown0C)
            FUN_1091be70();
        return Unknown00.Unknown00;
    }

    cIntArray Unknown00;
    bool Unknown0C;
    bool Unknown0D;
    char Unknown0E[2];
    Class_109081E0 Unknown10;
    float Unknown14;
    float Unknown18;
    int Unknown1C;
    Class_10919C40* Unknown20;
};

// FUNCTION: 0x1091CA20 ??0Class_1091CB20@@QAE@PAVClass_10919C40@@ABVClass_109081E0@@MM_NH@Z
Class_1091CB20::Class_1091CB20(Class_10919C40* Owner, const Class_109081E0& Name, float A, float B, bool C, int D)
    : Unknown0D(C), Unknown10(Name),
      Unknown14(A == DAT_10e499a4 ? DAT_10e499a4 : FUN_10d20ec0((int)(A * 100.0f) * 0.01f)),
      Unknown18(B == DAT_10e499a4 ? DAT_10e499a4 : FUN_10d20ec0((int)(B * 100.0f) * 0.01f)),
      Unknown1C(D), Unknown20(Owner)
{
    FUN_1091be70();
}
