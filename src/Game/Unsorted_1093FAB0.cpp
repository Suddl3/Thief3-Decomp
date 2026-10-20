// Game/Unsorted_1093FAB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DBaseTexture8;

// D3DX's inline identity (d3dx8math.inl).
inline D3DXMATRIX* D3DXMatrixIdentity(D3DXMATRIX* pOut)
{
    pOut->m[0][1] = pOut->m[0][2] = pOut->m[0][3] =
    pOut->m[1][0] = pOut->m[1][2] = pOut->m[1][3] =
    pOut->m[2][0] = pOut->m[2][1] = pOut->m[2][3] =
    pOut->m[3][0] = pOut->m[3][1] = pOut->m[3][2] = 0.0f;

    pOut->m[0][0] = pOut->m[1][1] = pOut->m[2][2] = pOut->m[3][3] = 1.0f;
    return pOut;
}

// D3DX's matrix product and transpose.
extern "C" D3DXMATRIX* __stdcall FUN_10d67f9a(D3DXMATRIX* pOut, const D3DXMATRIX* pM1, const D3DXMATRIX* pM2);

extern "C" D3DXMATRIX* __stdcall FUN_10d681e3(D3DXMATRIX* pOut, const D3DXMATRIX* pM);

// A three-float vector (D3DXVECTOR3).
struct D3DXVECTOR3
{
    float x;
    float y;
    float z;
};

// Makes a rotation matrix around pAxis and puts pTranslation into it.
void FUN_109572e0(D3DXMATRIX* pOut, D3DXVECTOR3* pTranslation, D3DXVECTOR3* pAxis);

extern IDirect3DDevice8* GDirect3DDevice8;

struct Struct_109403A0
{
    char Unknown00[0x140];
    IDirect3DBaseTexture8* Unknown140;
    D3DXMATRIX Unknown144;
    D3DXMATRIX Unknown184;
    D3DXMATRIX Unknown1C4;
    char Unknown204;
    bool Unknown205;
    char Unknown206[0x26];
    D3DXVECTOR3 Unknown22C;
};

class Class_109403A0
{
public:
    void FUN_1093fcd0(Struct_109403A0* Material);
    void SetMaterialTextures(Struct_109403A0* Material, bool Enable);
    void FUN_109405d0(Struct_109403A0* Material);

    char Unknown00[0x300];
    IDirect3DBaseTexture8* Unknown300;
    char Unknown304[4];
    IDirect3DBaseTexture8* Unknown308;
    char Unknown30C[4];
    D3DXMATRIX Unknown310;
};

// FUNCTION: 0x1093FCD0 ?FUN_1093fcd0@Class_109403A0@@QAEXPAUStruct_109403A0@@@Z
void Class_109403A0::FUN_1093fcd0(Struct_109403A0* Material)
{
    D3DXMATRIX Product;
    D3DXMATRIX Result;
    D3DXMATRIX Rotation;
    D3DXMATRIX Matrix;
    D3DXVECTOR3 Translation;

    Translation.x = 0.0f;
    Translation.y = 0.0f;
    Translation.z = 0.0f;
    D3DXMatrixIdentity(&Rotation);
    if (Material->Unknown205)
        FUN_109572e0(&Rotation, &Translation, &Material->Unknown22C);
    D3DXMatrixIdentity(&Matrix);
    FUN_10d67f9a(&Product, &Material->Unknown144, &Material->Unknown184);
    FUN_10d67f9a(&Result, &Product, &Rotation);
    if (!Material->Unknown140)
        FUN_10d67f9a(&Matrix, &Result, &Unknown310);
    else
        FUN_10d67f9a(&Matrix, &Result, &Material->Unknown1C4);
    FUN_10d681e3(&Matrix, &Matrix);
    GDirect3DDevice8->SetVertexShaderConstant(0x16, &Matrix, 4);
}
