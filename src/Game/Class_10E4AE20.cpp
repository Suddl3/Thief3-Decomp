// Game/Class_10E4AE20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4ADC0.h"
#include "Game/Class_10E4AE20.h"

extern void* DAT_10e4ae20[];

// FUNCTION: 0x10956780 ?FUN_10956780@Class_10E4AE20@@QAEPAV1@HH@Z
Class_10E4AE20* Class_10E4AE20::FUN_10956780(int A, int B)
{
    this->Class_10E4ADC0::Class_10E4ADC0(A, B);
    Unknown0C = B;
    *(void**)this = DAT_10e4ae20;
    Unknown294 = 0;
    Unknown298 = 0;
    Unknown29C = 0;
    Unknown2A0 = 1.0f;
    switch (B)
    {
    case 1:
        Unknown24 = 0;
        Unknown4C = true;
        Unknown34 = 4;
        break;
    default:
        Unknown34 = 0;
        break;
    }
    return this;
}
