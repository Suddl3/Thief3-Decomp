// Game/Unsorted_109401B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091A4F0.h"
#include "Game/Class_109401B0.h"
#include "Game/Class_10941570.h"
#include "Game/Class_109418E0.h"
#include "Game/Class_10941C40.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"

struct Struct_10941980
{
    short Unknown00;
    short Unknown02;
    short Unknown04;
};

class Class_10941480
{
public:
    void FUN_10941480();

    char Unknown00[0x44];
};

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

extern IDirect3DDevice8* GDirect3DDevice8;

struct Struct_109401B0
{
    char Unknown00[0x144];
    D3DXMATRIX Unknown144;
    D3DXMATRIX Unknown184;
};

// FUNCTION: 0x109401B0 ?FUN_109401b0@Class_109401B0@@QAEXPAUStruct_109401B0@@_N@Z
void Class_109401B0::FUN_109401b0(Struct_109401B0* P, bool B)
{
    D3DXMATRIX Product;
    D3DXMATRIX Matrix;
    D3DXMatrixIdentity(&Matrix);
    FUN_10d67f9a(&Product, &P->Unknown144, &P->Unknown184);
    FUN_10d67f9a(&Matrix, &Product, &Unknown310);
    FUN_10d681e3(&Matrix, &Matrix);
    if (B)
        GDirect3DDevice8->SetVertexShaderConstant(0x1d, &Matrix, 4);
    else
        GDirect3DDevice8->SetVertexShaderConstant(0x16, &Matrix, 4);
}

// FUNCTION: 0x10941570 ?FUN_10941570@Class_10941570@@QAEXXZ
void Class_10941570::FUN_10941570()
{
    for (int i = 0; i < Unknown04; i++)
        Unknown0C[i].FUN_10941480();
}

// FUNCTION: 0x10941980 ?FUN_10941980@Class_10941C40@@QAEXFFF@Z
void Class_10941C40::FUN_10941980(short A, short B, short C)
{
    Class_109418E0* Item = Unknown1C;
    Struct_10941980 Value;
    Value.Unknown00 = A;
    Value.Unknown02 = B;
    Value.Unknown04 = C;
    Class_1091A4F0* Array = &Item->Unknown2C;
    Item->Unknown06 = 0;
    int Index = Array->Unknown00;
    Array->FUN_1091a4f0(Index + 1);
    Array->Unknown08[Index] = Value;
}
