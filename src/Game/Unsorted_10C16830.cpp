// Game/Unsorted_10C16830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B255F0.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C1B0F0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10C16830.h"

double GetTimeSeconds();

extern float DAT_10eafbdc;

class Class_10BFE9E0
{
public:
    void FUN_10bfe9e0(Class_10B255F0* A1, float A2);
};

class Class_10C16830_FUN_10dc1760
{
public:
    char Unknown00[0x2C];
    int Unknown2C;
    char Unknown30[0x2C];
    float Unknown5C;
};

// FUNCTION: 0x10C16830 ?RefreshClamp@Class_10C16830@@QAEXPAVClass_10B255F0@@M@Z
void Class_10C16830::RefreshClamp(Class_10B255F0* A1, float A2)
{
    Class_10C16830_FUN_10dc1760* Item = (Class_10C16830_FUN_10dc1760*)A1->FUN_10dc1760();
    if (Item->Unknown2C == 0x100 && Item->Unknown5C < GetTimeSeconds() - 2.5)
    {
        float Value = Unknown04->FUN_10dbd510(0x40100242)->GetFloat() - 5.0f;
        if (!(Value > DAT_10eafbdc))
            Value = 0.0f;
        ((Class_10C1B0F0*)A1)->SetClampedValue(Value);
        A2 = 0.0f;
    }
    Unknown0C->FUN_10bfe9e0(A1, A2);
}
