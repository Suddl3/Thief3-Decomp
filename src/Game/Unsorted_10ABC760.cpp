// Game/Unsorted_10ABC760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ABCC20.h"
#include "Game/Class_10AF4B90.h"

typedef unsigned char BYTE;

struct FColor
{
    FColor(BYTE InR, BYTE InG, BYTE InB, BYTE InA = 255) : B(InB), G(InG), R(InR), A(InA) {}

    BYTE B;
    BYTE G;
    BYTE R;
    BYTE A;
};

// FUNCTION: 0x10ABC760 ?GetFlavorColor@@YA?AUFColor@@H@Z
FColor GetFlavorColor(int Index)
{
    static FColor Colors[4] =
    {
        FColor(0x7a, 0x70, 0xbc),
        FColor(0x61, 0x57, 0xad),
        FColor(0x6a, 0x57, 0xff),
        FColor(0xff, 0x00, 0x00),
    };
    return Colors[Index];
}

// FUNCTION: 0x10ABCC20 ?FUN_10abcc20@Class_10ABCC20@@QAEPAV1@XZ
Class_10ABCC20* Class_10ABCC20::FUN_10abcc20()
{
    Unknown04.FUN_10af4b90(0x27, DAT_10e47850);
    return this;
}
