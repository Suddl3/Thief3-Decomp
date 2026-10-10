// Game/Unsorted_10B73890_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Options.h"

Options* FUN_10929550();

class Class_10B73810
{
public:
    void FUN_10b737b0();
};

class Class_10B739C0_Unknown1A4
{
public:
    int Unknown00;
};

class Class_10E873B0 : public Class_10B73810
{
public:
    void FUN_10b73890();

    char Unknown00[0x19C];
    int Unknown19C;
    char Unknown1A0[0x4];
    Class_10B739C0_Unknown1A4** Unknown1A4;
};

// FUNCTION: 0x10B73890 ?FUN_10b73890@Class_10E873B0@@QAEXXZ
void Class_10E873B0::FUN_10b73890()
{
    for (int i = 0; i < Unknown19C; i++)
        FUN_10929550()->Set(Unknown1A4[i]->Unknown00, FUN_10929550()->SetDefaults(Unknown1A4[i]->Unknown00));
    FUN_10b737b0();
    FUN_10929550()->FUN_10ab6420();
}
