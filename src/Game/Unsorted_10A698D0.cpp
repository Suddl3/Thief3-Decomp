// Game/Unsorted_10A698D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A69C00Color
{
    unsigned char B;
    unsigned char G;
    unsigned char R;
    unsigned char A;
};

class Class_10B19940
{
public:
    int FUN_10af4cc0(int A, int B);

    Struct_10A69C00Color* Unknown00;
};

struct Struct_10A69C00
{
    float Unknown00;
    float Unknown04;
    Class_10B19940 Unknown08;
};

// FUNCTION: 0x10A69C00 ?FUN_10a69c00@@YAXPAUStruct_10A69C00@@@Z
void FUN_10a69c00(Struct_10A69C00* A)
{
    A->Unknown00 = 1.0f;
    A->Unknown04 = 1.0f;
    Struct_10A69C00Color Color;
    Color.B = 0;
    Color.G = 0;
    Color.R = 255;
    Color.A = 255;
    A->Unknown08.Unknown00[A->Unknown08.FUN_10af4cc0(4, 1)] = Color;
    Color.B = 0;
    Color.G = 255;
    Color.R = 0;
    Color.A = 255;
    A->Unknown08.Unknown00[A->Unknown08.FUN_10af4cc0(4, 1)] = Color;
    Color.B = 255;
    Color.G = 0;
    Color.R = 0;
    Color.A = 255;
    A->Unknown08.Unknown00[A->Unknown08.FUN_10af4cc0(4, 1)] = Color;
}
