// Game/cDifficultyPane_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A56860.h"
#include "Game/Struct_10B6BC80.h"
#include "Game/Struct_10B6C180.h"
#include "Game/Data_10B66060.h"

class Class_10F3A3D8
{
public:
    char Unknown00[0x150];
    Struct_10B6BC80* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class cDifficultyPane
{
public:
    void ApplySelection();
    void SetData(Struct_10B6C180* Src);

    char Unknown00[0x190];
    Class_10A56860* Unknown190;
    char Unknown194[8];
    int m_Mode;
};

// FUNCTION: 0x10B6C180 ?SetData@cDifficultyPane@@QAEXPAUStruct_10B6C180@@@Z
void cDifficultyPane::SetData(Struct_10B6C180* Src)
{
    Data_10B66060* Value;
    switch (m_Mode)
    {
    case 0:
        Value = DAT_10f3a3d8->Unknown150->Unknown08;
        break;
    case 1:
        Value = DAT_10f3a3d8->Unknown150->Unknown10;
        break;
    default:
        Value = 0;
        break;
    }
    if (Src)
    {
        Value->Unknown178 = *Src;
        Value->Unknown174 = Unknown190->Unknown12C;
        ApplySelection();
    }
    else
        Unknown190->FUN_10a56480(Value->Unknown174);
}
