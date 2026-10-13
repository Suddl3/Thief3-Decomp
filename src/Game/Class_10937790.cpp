// Game/Class_10937790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10937790.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_1091E3E0.h"
#include "Game/Class_1091E3F0.h"

// D3DX's matrix product and transpose.
extern "C" D3DXMATRIX* __stdcall FUN_10d67f9a(D3DXMATRIX* pOut, const D3DXMATRIX* pM1, const D3DXMATRIX* pM2);

extern "C" D3DXMATRIX* __stdcall FUN_10d681e3(D3DXMATRIX* pOut, const D3DXMATRIX* pM);

extern IDirect3DDevice8* GDirect3DDevice8;

// A three-float vector (D3DXVECTOR3).
struct D3DXVECTOR3
{
    float x;
    float y;
    float z;
};

// D3DX's look-at, perspective, translation, product and transpose.
extern "C" D3DXMATRIX* __stdcall FUN_10d68e81(D3DXMATRIX* pOut, const D3DXVECTOR3* pEye, const D3DXVECTOR3* pAt, const D3DXVECTOR3* pUp);

void __stdcall FUN_10d690fe(char* pOut, float w, float h, float zn, float zf);

extern "C" D3DXMATRIX* __stdcall FUN_10d68867(D3DXMATRIX* pOut, float x, float y, float z);

struct Struct_10938DA0
{
    char Unknown00[8];
    float Unknown08;
    float Unknown0C;
};

// FUNCTION: 0x10937430 ?SetTransforms@Class_10937790@@QAEXPAX00@Z
void Class_10937790::SetTransforms(void* A, void* B, void* C)
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

// FUNCTION: 0x10938DA0 ?FUN_10938da0@Class_10937790@@QAEXPAXPAUStruct_10938DA0@@0@Z
void Class_10937790::FUN_10938da0(void* A, Struct_10938DA0* B, void* C)
{
    D3DXMATRIX Translation;
    D3DXMATRIX ViewProj;
    D3DXMATRIX View;
    D3DXMATRIX Proj;
    D3DXMATRIX Combined;
    D3DXVECTOR3 Eye;
    D3DXVECTOR3 Up;
    D3DXVECTOR3 At;

    Eye.x = 0.0f;
    Eye.y = 0.0f;
    Eye.z = -5.0f;
    At.x = 0.0f;
    At.y = 0.0f;
    At.z = 0.0f;
    Up.x = 0.0f;
    Up.y = 1.0f;
    Up.z = 0.0f;
    FUN_10d68e81(&View, &Eye, &At, &Up);
    FUN_10d690fe((char*)&Proj, 4.0f, 4.0f, 0.2f, 20.0f);
    FUN_10d67f9a(&ViewProj, &View, &Proj);
    FUN_10d68867(&Translation, B->Unknown08 + 1.0f, B->Unknown0C + 1.0f, 1.0f);
    this->SetTransforms(&Proj, &Unknown6FC, &Unknown6FC);
    FUN_10d67f9a(&Combined, &Translation, &ViewProj);
    FUN_10d681e3(&Combined, &Combined);
    GDirect3DDevice8->SetVertexShaderConstant(1, &Combined, 4);
}

// FUNCTION: 0x10938EE0 ?FUN_10938ee0@Class_10937790@@QAEXPAVClass_1091E3F0@@@Z
void Class_10937790::FUN_10938ee0(Class_1091E3F0* Obj)
{
    SetTransforms(Obj->FUN_1091e3e0(), Obj->FUN_1091e3f0(), &Unknown6FC);
}
