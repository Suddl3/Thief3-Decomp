// Game/Class_10E49F90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10937400.h"
#include "Game/Class_10952640.h"
#include "Game/Class_109526F0.h"
#include "Game/Class_10955DB0.h"

class cD3DStateCache : public Class_10937400
{
public:
    void FUN_10937140(int A, float* B);
};

extern cD3DStateCache* DAT_10f31be0;

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10935F00_Arg
{
public:
    char Unknown00[0x34];
    int Unknown34;
    char Unknown38[0x16];
    bool Unknown4E;
    char Unknown4F[0x41];
    Class_10955DB0 Unknown90;
    Class_10955DB0 Unknown1E0;
};

class Class_109526D0;

struct Struct_10934FE0;

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
    virtual void Virtual7();
    virtual bool FUN_10935f00(Class_10935F00_Arg* A, int B);

    char Unknown04[0x14C];
    unsigned long Unknown150;
    char Unknown154[0x174];
    unsigned long Unknown2C8;
};

// FUNCTION: 0x10935F00 ?FUN_10935f00@Class_10E49F90@@UAE_NPAVClass_10935F00_Arg@@H@Z
bool Class_10E49F90::FUN_10935f00(Class_10935F00_Arg* A, int B)
{
    if (A && A->Unknown4E && (A->Unknown34 & 4))
    {
        DAT_10f31be0->SetVertexShader(Unknown150);
        DAT_10f31be0->FUN_10937400(Unknown2C8);
        ((Class_10952640*)A)->Apply();
        ((Class_109526F0*)A)->ApplyPixelShaderConstant();
        float Color[4] = {1.0f, 1.0f, 1.0f, 1.0f};
        DAT_10f31be0->FUN_10937140(0x12, Color);
        A->Unknown1E0.FUN_10955db0(0, 0, 1);
        A->Unknown90.FUN_10955db0(1, 0, 1);
        GDirect3DDevice8->SetRenderState(0xe, 0);
        GDirect3DDevice8->SetRenderState(0x1b, 1);
        GDirect3DDevice8->SetRenderState(0xf, 0);
        GDirect3DDevice8->SetRenderState(0x13, 2);
        GDirect3DDevice8->SetRenderState(0x14, 6);
        return true;
    }
    return false;
}
