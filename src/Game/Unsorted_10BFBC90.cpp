// Game/Unsorted_10BFBC90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBC90.h"
#include "Game/Class_10BFC190.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10C16580.h"
#include "Game/Class_10E97AD4.h"
#include "Game/Class_10E97ADC.h"

void FUN_10bfbd30(int* A);

extern void* DAT_10e97adc[];

double FUN_1095af80();

double FUN_10c00480();

// FUNCTION: 0x10BFBC90 ?FUN_10bfbc90@Class_10BFBC90@@QAEXXZ
void Class_10BFBC90::FUN_10bfbc90()
{
    Unknown4C = (float)FUN_10c00480();
}

// FUNCTION: 0x10BFC190 ?FUN_10bfc190@Class_10BFC190@@QAEXXZ
void Class_10BFC190::FUN_10bfc190()
{
    int* Head = &Unknown08;
    FUN_10bfbd30(Head);
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    *Head = 0;
}

// FUNCTION: 0x10BFD210 ?FUN_10bfd210@Class_10BFD210@@QAEXXZ
void Class_10BFD210::FUN_10bfd210()
{
    FUN_10bfc680(0.0f);
}

// FUNCTION: 0x10BFF210 ??0Class_10E97AD4@@QAE@HH@Z
Class_10E97AD4::Class_10E97AD4(int A, int B) : Unknown04(A), Unknown08(B)
{
    Unknown10 = false;
}

// FUNCTION: 0x10BFF240 ?FUN_10bff240@Class_10BFF240@@QAEXE@Z
void Class_10BFF240::FUN_10bff240(unsigned char param)
{
    Unknown10 = param;
}

// FUNCTION: 0x10BFF720 ?FUN_10bff720@Class_10E97ADC@@QAEPAV1@XZ
Class_10E97ADC* Class_10E97ADC::FUN_10bff720()
{
    Unknown00 = DAT_10e97adc;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown28 = 0;
    Unknown2C = 0;
    Unknown30 = 0;
    Unknown34 = 0;
    return this;
}

// FUNCTION: 0x10C00670 ?FUN_10c00670@@YANXZ
double FUN_10c00670()
{
    double Seconds = FUN_1095af80();
    return Seconds;
}
