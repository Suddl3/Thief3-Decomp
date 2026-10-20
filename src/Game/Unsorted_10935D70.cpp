// Game/Unsorted_10935D70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/cD3DStateCache.h"
#include "Game/Class_109373D0.h"
#include "Game/Class_10937400.h"
#include "Game/Class_10952640.h"
#include "Game/Class_109526F0.h"
#include "Game/Class_10955DB0.h"

extern cD3DStateCache* DAT_10f31be0;

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_109526D0;

struct Struct_10934FE0;

class Class_10935D70_Arg
{
public:
    char Unknown00[0x34];
    unsigned char Unknown34 : 1;
    char Unknown35[0x19];
    bool Unknown4E;
    char Unknown4F[0x41];
    Class_10955DB0 Unknown90;
    Class_10955DB0 Unknown1E0;
};

class Class_10E49F90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool FUN_10936240(Class_109526D0* Item, int A);
    virtual bool FUN_10934fe0(Struct_10934FE0* P, int B);
    virtual bool FUN_10935d70(Class_10935D70_Arg* A, int B);

    char Unknown04[0x14C];
    unsigned long Unknown150;
    unsigned long Unknown154;
    char Unknown158[0x170];
    unsigned long Unknown2C8;
    unsigned long Unknown2CC;
    char Unknown2D0[0x2C];
    int Unknown2FC;
};

// FUNCTION: 0x10935D70 ?FUN_10935d70@Class_10E49F90@@UAE_NPAVClass_10935D70_Arg@@H@Z
bool Class_10E49F90::FUN_10935d70(Class_10935D70_Arg* A, int B)
{
    if (A && !A->Unknown4E && (A->Unknown34 & 1))
    {
        if (Unknown2FC == 0)
        {
            DAT_10f31be0->SetVertexShader(Unknown150);
            DAT_10f31be0->FUN_10937400(Unknown2C8);
            ((Class_10952640*)A)->Apply();
            ((Class_109526F0*)A)->ApplyPixelShaderConstant();
            A->Unknown1E0.FUN_10955db0(0, 0, 1);
            A->Unknown90.FUN_10955db0(1, 0, 1);
            GDirect3DDevice8->SetRenderState(0xe, 0);
            GDirect3DDevice8->SetRenderState(0x1b, 1);
            GDirect3DDevice8->SetRenderState(0xf, 0);
            GDirect3DDevice8->SetRenderState(0x13, 2);
            GDirect3DDevice8->SetRenderState(0x14, 6);
        }
        else
        {
            DAT_10f31be0->SetVertexShader(Unknown154);
            DAT_10f31be0->FUN_10937400(Unknown2CC);
            ((Class_10952640*)A)->Apply();
            ((Class_109526F0*)A)->ApplyPixelShaderConstant();
            A->Unknown1E0.FUN_10955db0(0, 0, 1);
            A->Unknown90.FUN_10955db0(1, 0, 1);
            GDirect3DDevice8->SetRenderState(0xe, 0);
            GDirect3DDevice8->SetRenderState(0x1b, 1);
            GDirect3DDevice8->SetRenderState(0xf, 0);
            GDirect3DDevice8->SetRenderState(0x13, 2);
            GDirect3DDevice8->SetRenderState(0x14, 2);
        }
        return true;
    }
    return false;
}
