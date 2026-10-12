// Game/Class_10E4ADC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955AA0.h"
#include "Game/Class_10E4ADC0.h"

// FUNCTION: 0x109524A0 ?Reset@Class_10E4ADC0@@UAEXXZ
void Class_10E4ADC0::Reset()
{
    for (int i = 0; i < 9; i++)
        Unknown90[i].SetMode(i);
    for (int j = 0; j < 9; j++)
        Unknown90[j].Unknown04 = -1;
    Unknown0C = -1;
    Unknown34 = -1;
    Unknown2C = 0;
    Unknown30 = 0;
    Unknown28 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown4C = false;
    Unknown44 = 0;
    Unknown48 = 0;
    Unknown4E = false;
    Unknown54 = 0;
    Unknown4F = false;
    Unknown58 = 0;
    Unknown50 = false;
    Unknown288 = 0;
    Unknown28C = false;
    Unknown290 = 0;
    Unknown60 = 0;
    Unknown64 = 0;
    Unknown68 = 0;
    Unknown38 = 1.0f;
    Unknown3C = 0.5f;
    Unknown40 = 0.5f;
    Unknown4D = true;
    Unknown5C = 1.0f;
    Unknown6C = 1.0f;
    Unknown70 = 1.0f;
    Unknown74 = 1.0f;
    Unknown78 = 1.0f;
    Unknown7C = 1.0f;
    Unknown80 = 1.0f;
    Unknown84 = 1.0f;
    Unknown88 = 1.0f;
    Unknown8C = 1.0f;
}
