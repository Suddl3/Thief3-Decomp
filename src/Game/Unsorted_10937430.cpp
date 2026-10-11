// Game/Unsorted_10937430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10937790.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"

// D3DX's matrix product and transpose.
extern "C" D3DXMATRIX* __stdcall FUN_10d67f9a(D3DXMATRIX* pOut, const D3DXMATRIX* pM1, const D3DXMATRIX* pM2);

extern "C" D3DXMATRIX* __stdcall FUN_10d681e3(D3DXMATRIX* pOut, const D3DXMATRIX* pM);

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x10937430 ?FUN_10937430@Class_10937790@@QAEXPAX00@Z
void Class_10937790::FUN_10937430(void* A, void* B, void* C)
{
    D3DXMATRIX World = *(D3DXMATRIX*)C;
    GDirect3DDevice8->SetTransform(3, (D3DXMATRIX*)A);
    GDirect3DDevice8->SetTransform(2, (D3DXMATRIX*)B);
    GDirect3DDevice8->SetTransform(0x100, (D3DXMATRIX*)C);
    D3DXMATRIX Mid;
    D3DXMATRIX Combined;
    FUN_10d67f9a(&Mid, &World, (D3DXMATRIX*)B);
    FUN_10d67f9a(&Combined, &Mid, (D3DXMATRIX*)A);
    FUN_10d681e3(&Combined, &Combined);
    GDirect3DDevice8->SetVertexShaderConstant(1, &Combined, 4);
    FUN_10d681e3(&World, &World);
    GDirect3DDevice8->SetVertexShaderConstant(0xc, &World, 4);
}
