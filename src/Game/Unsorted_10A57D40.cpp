// Game/Unsorted_10A57D40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern float DAT_10f46e5c[];

class Class_10E68F94
{
public:
    virtual void Virtual0();
    virtual void FUN_10a58250(float Delta);

    FVector Unknown04;
    FVector Unknown10;
    FVector Unknown1C;
    FVector Unknown28;
    BYTE Unknown34;
    char Pad35[0x3];
    float Unknown38;
    float Unknown3C;
    float Unknown40;
};

// FUNCTION: 0x10A58250 ?FUN_10a58250@Class_10E68F94@@UAEXM@Z
void Class_10E68F94::FUN_10a58250(float Delta)
{
    if (Unknown34)
        return;
    Delta = Delta + Unknown3C;
    Unknown3C = Delta;
    if (Unknown38 <= Delta)
    {
        Unknown04 = Unknown1C;
        Unknown34 = 1;
        return;
    }
    float Ratio = Delta / Unknown38;
    int Index = (int)(Ratio * Unknown40);
    float Alpha = (DAT_10f46e5c[((Index - 0x4001) >> 2) & 0x3FFF] + 1.0f) * 0.5f;
    Unknown04 = Unknown10 + Unknown28 * Alpha;
}
