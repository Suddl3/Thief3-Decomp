// Game/Unsorted_109568F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/cD3DStateCache.h"

extern IDirect3DDevice8* GDirect3DDevice8;

extern cD3DStateCache* DAT_10f31be0;

class Class_10955C80
{
public:
    void ApplyStage(int A, unsigned char B);

    char Unknown00[0x38];
};

class Class_109523D0
{
public:
    int FUN_10952410(int* A);

    char Unknown00[0x30];
};

class Class_109568F0 : public Class_109523D0
{
public:
    void ApplyStages(int A);

    int Unknown30;
    char Unknown34[8];
    float Alpha;
    char Unknown40[0xC];
    unsigned char Unknown4C;
    char Unknown4D[0x43];
    Class_10955C80 m_Stages[9];
};

// FUNCTION: 0x109568F0 ?ApplyStages@Class_109568F0@@QAEXH@Z
void Class_109568F0::ApplyStages(int A)
{
    DAT_10f31be0->ResetTextureStagesBiased();
    GDirect3DDevice8->SetRenderState(0x3c, (int)(Alpha * 255.5f) * 0x01010101);
    int Index;
    int Result = FUN_10952410(&Index);
    if (Result == 1)
    {
        m_Stages[Index].ApplyStage(A, Unknown4C);
        return;
    }
    for (int i = 0; i < 9; i++)
    {
        switch (i)
        {
        case 0:
        case 3:
        case 5:
        case 8:
            m_Stages[i].ApplyStage(A, Unknown4C);
            break;
        case 1:
        case 7:
            if ((Unknown30 & 0x40) && Result == 2)
                m_Stages[i].ApplyStage(A, Unknown4C);
            break;
        case 6:
            m_Stages[6].ApplyStage(A, Unknown4C);
            break;
        }
    }
}
