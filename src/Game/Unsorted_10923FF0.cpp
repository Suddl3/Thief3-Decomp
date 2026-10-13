// Game/Unsorted_10923FF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10924100.h"
#include "Game/Class_10924100_Unknown38.h"
#include "Game/Class_10924100_Unknown44.h"

class Class_10924100_Unknown38;

class Class_10924100_Unknown44;

class Class_10A1E620_Inner;

class cD3DStateCache
{
public:
    void Reset();
    void FUN_10937c70();

    char Unknown00[0xC];
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    IDirect3DBaseTexture8* Unknown1C[4];
};

extern cD3DStateCache* DAT_10f31be0;

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x10924100 ?FUN_10924100@Class_10924100@@QAEXXZ
void Class_10924100::FUN_10924100()
{
    if (!Unknown4C)
    {
        for (int i = 0; i < Unknown30; i++)
        {
            Unknown38[i]->Unknown5C |= 1;
            Unknown38[i]->Virtual0(0);
        }
        for (int i = 0; i < Unknown3C; i++)
        {
            Unknown44[i]->Unknown5C |= 1;
            Unknown44[i]->Virtual0(0);
        }
    }
    else
    {
        FUN_10923ff0(0);
        FUN_1091f850();
    }
    ClearFlags(0);
    DAT_10f31be0->FUN_10937c70();
    cD3DStateCache* Obj = DAT_10f31be0;
    DAT_10f31be0->Reset();
    for (int i = 0; i < 4; i++)
    {
        Obj->Unknown1C[i] = 0;
        if (GDirect3DDevice8)
            GDirect3DDevice8->SetTexture(i, 0);
    }
    Obj->Unknown0C = 0;
    Obj->Unknown10 = 0;
    Obj->Unknown14 = 0;
}
