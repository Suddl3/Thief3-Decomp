// Game/Unsorted_10A7DDE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6BED8.h"

typedef unsigned char BYTE;

struct FColor
{
    FColor(BYTE InR, BYTE InG, BYTE InB, BYTE InA) : B(InB), G(InG), R(InR), A(InA) {}

    BYTE B;
    BYTE G;
    BYTE R;
    BYTE A;
};

// FUNCTION: 0x10A7DDE0 ?FUN_10a7dde0@Class_10E6BED8@@UAEXHPAEHH@Z
void Class_10E6BED8::FUN_10a7dde0(int A, BYTE* Data, int C, int D)
{
    FColor* Dest = (FColor*)Data;
    FColor Color(10, 5, 60, 255);
    for (int Y = 0; Y < 8; Y++)
    {
        for (int X = 0; X < 8; X++)
        {
            *Dest++ = Color;
        }
    }
}
