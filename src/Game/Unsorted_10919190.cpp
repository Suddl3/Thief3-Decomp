// Game/Unsorted_10919190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091E400.h"
#include "Game/cD3DStateCache.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10919190.h"

extern cD3DStateCache* DAT_10f31be0;

// D3DX's matrix product and transpose.
extern "C" D3DXMATRIX* __stdcall FUN_10d67f9a(D3DXMATRIX* pOut, const D3DXMATRIX* pM1, const D3DXMATRIX* pM2);

extern "C" D3DXMATRIX* __stdcall FUN_10d681e3(D3DXMATRIX* pOut, const D3DXMATRIX* pM);

extern IDirect3DDevice8* GDirect3DDevice8;

extern Class_1091E400* DAT_10f2c8c0;

// FUNCTION: 0x10919190 ?FUN_10919190@@YAXPAUStruct_10919190@@@Z
void FUN_10919190(Struct_10919190* P)
{
    if (DAT_10f2c8c0)
    {
        D3DXMATRIX World = P->Unknown00;
        GDirect3DDevice8->SetTransform(0x100, &World);
        D3DXMATRIX Combined;
        FUN_10d67f9a(&Combined, &World, (D3DXMATRIX*)DAT_10f2c8c0->FUN_1091e400());
        FUN_10d681e3(&Combined, &Combined);
        GDirect3DDevice8->SetVertexShaderConstant(1, &Combined, 4);
        FUN_10d681e3(&World, &World);
        GDirect3DDevice8->SetVertexShaderConstant(0xc, &World, 4);
    }
}

// FUNCTION: 0x109192E0 ?FUN_109192e0@@YAXHHH@Z
void FUN_109192e0(int A, int B, int C)
{
    DAT_10f31be0->SetStreamSource(A, B);
    DAT_10f31be0->SetIndices(C, 0);
}
