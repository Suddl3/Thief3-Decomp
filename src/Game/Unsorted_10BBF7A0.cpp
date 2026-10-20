// Game/Unsorted_10BBF7A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The colour of an AI path point's flags, and the floats such a colour is built from.

typedef unsigned char BYTE;

struct FVector
{
    float X;
    float Y;
    float Z;
};

struct FLinearColor
{
    FVector RGB;
    float A;
};

struct FColor
{
    void FUN_109ecee0(const FLinearColor* Linear);

    BYTE B;
    BYTE G;
    BYTE R;
    BYTE A;
};

// FUNCTION: 0x10BBFA20 ?FUN_10bbfa20@@YAPAUFColor@@PAU1@H@Z
FColor* FUN_10bbfa20(FColor* Color, int Type)
{
    switch (Type)
    {
    case 2:
        Color->B = 0;
        Color->G = 255;
        Color->R = 0;
        Color->A = 255;
        break;
    case 4:
        Color->B = 255;
        Color->G = 0;
        Color->R = 0;
        Color->A = 255;
        break;
    case 8:
        Color->B = 0;
        Color->G = 0;
        Color->R = 255;
        Color->A = 255;
        break;
    case 16:
        Color->B = 0;
        Color->G = 255;
        Color->R = 255;
        Color->A = 255;
        break;
    case 32:
        Color->B = 0xA0;
        Color->G = 0;
        Color->R = 0xA0;
        Color->A = 255;
        break;
    case 64:
        Color->B = 0x0D;
        Color->G = 0x6E;
        Color->R = 255;
        Color->A = 255;
        break;
    default:
    {
        FVector V;
        V.X = 128.0f;
        V.Y = 255.0f;
        V.Z = 128.0f;
        FLinearColor Linear;
        Linear.RGB = V;
        Linear.A = 0.0f;
        Color->FUN_109ecee0(&Linear);
        break;
    }
    }
    return Color;
}
