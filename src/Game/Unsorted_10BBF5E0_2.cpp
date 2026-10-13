// Game/Unsorted_10BBF5E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"

struct Struct_10BBFB80
{
    unsigned char Unknown00;
    unsigned char Unknown01;
    unsigned char Unknown02;
    unsigned char Unknown03;
};

void DrawCircle(int A, void* B, float C, Struct_10BBFB80* D, int E);

// FUNCTION: 0x10BBFB80 ?DrawRadiusCircle@@YGXPAVClass_1098E330@@H@Z
void __stdcall DrawRadiusCircle(Class_1098E330* A, int B)
{
    float Scale = 0.0f;
    if (A->FUN_1098e330(0x1002fd, (int*)&Scale))
    {
        Scale = Scale * 16.0f;
        Struct_10BBFB80 Color;
        Color.Unknown00 = 0;
        Color.Unknown02 = 0;
        Color.Unknown01 = 0x80;
        Color.Unknown03 = 0xff;
        DrawCircle(B, &A->Location, Scale, &Color, 8);
    }
}
