// Game/Unsorted_109E5660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1091D390.h"

class Class_109E5660
{
public:
    void FUN_109e5660(Class_1091D390* Obj, float B, float C, int D, int E, float F, float G, int H);

    char Unknown00[0xB0];
    float Unknown0B0;
    float Unknown0B4;
    char Unknown0B8[0x14];
    float Unknown0CC;
    float Unknown0D0;
};

// FUNCTION: 0x109E5660 ?FUN_109e5660@Class_109E5660@@QAEXPAVClass_1091D390@@MMHHMMH@Z
void Class_109E5660::FUN_109e5660(Class_1091D390* Obj, float B, float C, int D, int E, float F, float G, int H)
{
    if (Obj)
    {
        float X = Unknown0B0 / Unknown0CC;
        float Y = Unknown0B4 / Unknown0D0;
        float M;
        B = B * X;
        C = Y * C;
        if (X > Y)
        {
            F = F * X;
            M = X;
        }
        else
        {
            F = Y * F;
            M = Y;
        }
        G = M * G;
        Obj->Draw(*(int*)&B, *(int*)&C, D, E, *(int*)&F, *(int*)&G, H);
    }
}
