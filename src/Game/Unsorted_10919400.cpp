// Game/Unsorted_10919400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49684;

struct Struct_10919400
{
    float X;
    float Y;
    float Z;
};

struct Struct_10919400_Color
{
    unsigned char B;
    unsigned char G;
    unsigned char R;
    unsigned char A;
};

// FUNCTION: 0x10919400 ?FUN_10919400@@YAXUStruct_10919400_Color@@PAUStruct_10919400@@@Z
void FUN_10919400(Struct_10919400_Color Color, Struct_10919400* Out)
{
    const Struct_10919400_Color& c = Color;
    Out->X = c.R * (2.0f / 255.0f) - DAT_10e49684;
    Out->Y = c.G * (2.0f / 255.0f) - DAT_10e49684;
    Out->Z = c.B * (2.0f / 255.0f) - DAT_10e49684;
}
