// Game/Unsorted_10A68DB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

struct Struct_10BBFB80;

class Class_10A68DB0_Arg
{
public:
    char Unknown00[4];
    int Unknown04;
    int Unknown08;
};

void FUN_10a68270(int A, int B, int C, int D, int E, int F);

// FUNCTION: 0x10A68DB0 ?DrawCircle@@YAXHPAXMPAUStruct_10BBFB80@@H@Z
void DrawCircle(int A, void* B, float C, Struct_10BBFB80* D, int E)
{
    Class_10A68DB0_Arg* Arg = (Class_10A68DB0_Arg*)A;
    float* Center = (float*)B;
    int Count = E;
    for (int i = 0; i < Count; i++)
    {
        float FloatCount = (float)Count;
        int Next = (i == Count - 1) ? 0 : i + 1;
        double Angle0 = (double)i / FloatCount * 6.283185307179586;
        double Angle1 = (double)Next / FloatCount * 6.283185307179586;
        float Start[3];
        float End[3];
        Start[2] = Center[2];
        End[2] = Center[2];
        Start[0] = sin(Angle0) * C + Center[0];
        Start[1] = cos(Angle0) * C + Center[1];
        End[0] = sin(Angle1) * C + Center[0];
        End[1] = cos(Angle1) * C + Center[1];
        FUN_10a68270(Arg->Unknown04, Arg->Unknown08, (int)Start, (int)End, (int)D, 0);
    }
}
