// Game/Unsorted_10919240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091E3E0.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10924210.h"
#include "Game/Struct_109E44B0.h"
#include "Game/Class_1091E400.h"
#include "Game/cCamera.h"

class Class_10E6D8F0
{
public:
    virtual void FUN_10c3e130(int A);

    int Unknown04[5];
};

class Class_109242E0 : public Class_10E6D8F0
{
public:
    Struct_10924210 m_Viewport;
};

extern int DAT_10f2c8c4;

extern Class_1091E400* DAT_10f2c8c0;

extern IDirect3DDevice8* GDirect3DDevice8;

extern Struct_10924210 DAT_10f2c780;

extern Class_109242E0* DAT_10f319a0;

extern Struct_109E44B0 DAT_10f2c8e8;

// FUNCTION: 0x10919240 ?SetCurrentCamera@@YAXPAVcCamera@@H@Z
void SetCurrentCamera(cCamera* A, int B)
{
    DAT_10f2c8c4 = B;
    DAT_10f2c8c0 = A;
    GDirect3DDevice8->SetViewport(&DAT_10f2c780);
    A->SetViewport(&DAT_10f2c780, 1);
    A->FUN_1091eb80();
    DAT_10f319a0->Class_10E6D8F0::FUN_10c3e130((int)A);
    DAT_10f319a0->m_Viewport = DAT_10f2c780;
    DAT_10f2c8e8 = *(Struct_109E44B0*)A->FUN_1091e3e0();
}
