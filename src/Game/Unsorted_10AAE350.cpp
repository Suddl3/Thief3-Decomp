// Game/Unsorted_10AAE350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

extern float DAT_10e6dc44;

extern float DAT_10e49684;

extern float DAT_10e499a4;

// The header's Class_10E6C470 copied whole, with the two floats the axis uses.
class Class_10E6C470
{
public:
    virtual void Virtual0();
    void FUN_10aae590(float* A, float* B);

    char Unknown04[0x804];
    float Unknown808;
    float Unknown80c;
};

void FUN_10d4e2a0(float* Out, float* In);

float FUN_10d4e2f0(float* A);

// FUNCTION: 0x10AAE590 ?FUN_10aae590@Class_10E6C470@@QAEXPAM0@Z
void Class_10E6C470::FUN_10aae590(float* A, float* B)
{
    float v0 = (*A - DAT_10e6dc44) * (1.0f / 32767.0f);
    float v1 = (*B - DAT_10e6dc44) * (1.0f / 32767.0f);
    if (fabs(v0) > Unknown808 || fabs(v1) > Unknown808)
    {
        float Norm[2];
        float Vec[2];
        Vec[0] = v0;
        Vec[1] = v1;
        FUN_10d4e2a0(Norm, Vec);
        float Y, X;
        if (FUN_10d4e2f0(&Vec[0]) > DAT_10e49684)
        {
            Y = Norm[0];
            X = Norm[1];
        }
        else
        {
            Y = Vec[0];
            X = Vec[1];
        }
        float P = (Y - Norm[0] * Unknown808) * Unknown80c;
        float Q = (X - Norm[1] * Unknown808) * Unknown80c;
        if (P < DAT_10e499a4)
            P = -1.0f;
        else if (P > DAT_10e49684)
            P = 1.0f;
        if (Q < DAT_10e499a4)
            Q = DAT_10e499a4;
        else if (Q > DAT_10e49684)
            Q = DAT_10e49684;
        *A = P;
        *B = Q;
    }
    else
    {
        *A = 0.0f;
        *B = 0.0f;
    }
}
