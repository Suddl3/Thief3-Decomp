// Game/cDifficultyPane.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A2AEF0.h"
#include "Game/Class_10B6BD50.h"

struct Struct_10B6B940
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x150];
    Struct_10B6B940* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

extern int* DAT_10ff65a8;

class Class_10B6BDE0_Member
{
public:
    char Unknown00[0x128];
    int* Unknown128;
    int Unknown12C;
};

class cDifficultyPane
{
public:
    int GetData();
    void FUN_10b6bb80(int A, int B, int C, int D, int E, int F);
    int GetSelectedValue();

    char Unknown00[0x160];
    Class_10A2AEF0* Unknown160;
    int Unknown164;
    int Unknown168;
    int Unknown16C;
    char Pad170[0x20];
    Class_10B6BDE0_Member* Unknown190;
    int Unknown194;
    char Pad198[0x4];
    int m_Mode;
};

// FUNCTION: 0x10B6B940 ?GetData@cDifficultyPane@@QAEHXZ
int cDifficultyPane::GetData()
{
    switch (m_Mode)
    {
    case 0:
        return DAT_10f3a3d8->Unknown150->Unknown08;
    case 1:
        return DAT_10f3a3d8->Unknown150->Unknown10;
    }
    return 0;
}

// FUNCTION: 0x10B6BB80 ?FUN_10b6bb80@cDifficultyPane@@QAEXHHHHHH@Z
void cDifficultyPane::FUN_10b6bb80(int A, int B, int C, int D, int E, int F)
{
    Unknown160->FUN_10a2aef0(&Unknown168, A, B, Unknown194 + C, D, E, F, 0, &Unknown16C);
}

// FUNCTION: 0x10B6BD50 ?FUN_10b6bd50@Class_10B6BD50@@QAEHHH@Z
int Class_10B6BD50::FUN_10b6bd50(int A, int B)
{
    if (A == 8 && B != -1)
        return DAT_10ff65a8[B];
    return B;
}

// FUNCTION: 0x10B6BDE0 ?GetSelectedValue@cDifficultyPane@@QAEHXZ
int cDifficultyPane::GetSelectedValue()
{
    if (Unknown190)
        return Unknown190->Unknown128[Unknown190->Unknown12C];
    return 0;
}
