// Game/Unsorted_1094EAF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DStateCache.h"

struct D3DXMATRIX;

class IDirect3DBaseTexture8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

class IDirect3DVertexBuffer8;

struct Struct_10924210;

enum D3DPRIMITIVETYPE
{
    D3DPT_POINTLIST = 1,
    D3DPT_LINELIST = 2,
    D3DPT_LINESTRIP = 3,
    D3DPT_TRIANGLELIST = 4,
    D3DPT_TRIANGLESTRIP = 5,
    D3DPT_TRIANGLEFAN = 6
};

// include/Game/IDirect3DDevice8.h copied here: that header gives slot 71 no
// parameters, and this function calls it with five.
class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall ShowCursor(int Show);
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual long __stdcall CreateTexture(unsigned int Width, unsigned int Height, unsigned int Levels, unsigned long Usage, int Format, int Pool, IDirect3DTexture8** ppTexture);
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual long __stdcall CreateVertexBuffer(unsigned int Length, unsigned long Usage, unsigned long FVF, int Pool, IDirect3DVertexBuffer8** ppVertexBuffer);
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual long __stdcall CreateImageSurface(unsigned int Width, unsigned int Height, int Format, IDirect3DSurface8** ppSurface);
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual long __stdcall SetRenderTarget(IDirect3DSurface8* RenderTarget, IDirect3DSurface8* ZStencil);
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual long __stdcall SetTransform(int State, const D3DXMATRIX* pMatrix);
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual long __stdcall SetViewport(const Struct_10924210* Viewport);
    virtual long __stdcall Virtual41();
    virtual long __stdcall Virtual42();
    virtual long __stdcall Virtual43();
    virtual long __stdcall Virtual44();
    virtual long __stdcall Virtual45();
    virtual long __stdcall Virtual46();
    virtual long __stdcall Virtual47();
    virtual long __stdcall Virtual48();
    virtual long __stdcall Virtual49();
    virtual long __stdcall SetRenderState(unsigned long State, unsigned long Value);
    virtual long __stdcall Virtual51();
    virtual long __stdcall Virtual52();
    virtual long __stdcall Virtual53();
    virtual long __stdcall Virtual54();
    virtual long __stdcall Virtual55();
    virtual long __stdcall Virtual56();
    virtual long __stdcall Virtual57();
    virtual long __stdcall Virtual58();
    virtual long __stdcall Virtual59();
    virtual long __stdcall Virtual60();
    virtual long __stdcall SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture);
    virtual long __stdcall Virtual62();
    virtual long __stdcall Virtual63();
    virtual long __stdcall Virtual64();
    virtual long __stdcall Virtual65();
    virtual long __stdcall Virtual66();
    virtual long __stdcall Virtual67();
    virtual long __stdcall Virtual68();
    virtual long __stdcall Virtual69();
    virtual long __stdcall Virtual70();
    virtual long __stdcall DrawIndexedPrimitive(D3DPRIMITIVETYPE PrimitiveType, int BaseVertexIndex, int NumVertices, int MinVertexIndex, int PrimitiveCount);
    virtual long __stdcall Virtual72();
    virtual long __stdcall Virtual73();
    virtual long __stdcall Virtual74();
    virtual long __stdcall Virtual75();
    virtual long __stdcall SetVertexShader(unsigned long Handle);
    virtual long __stdcall Virtual77();
    virtual int __stdcall Virtual78(int Handle);
    virtual long __stdcall SetVertexShaderConstant(unsigned long Register, const void* pConstantData, unsigned long ConstantCount);
    virtual long __stdcall Virtual80();
    virtual long __stdcall Virtual81();
    virtual long __stdcall Virtual82();
    virtual long __stdcall SetStreamSource(unsigned int StreamNumber, IDirect3DVertexBuffer8* StreamData, unsigned int Stride);
    virtual long __stdcall Virtual84();
    virtual long __stdcall SetIndices(IDirect3DIndexBuffer8* IndexData, unsigned int BaseVertexIndex);
    virtual long __stdcall Virtual86();
    virtual long __stdcall Virtual87();
    virtual long __stdcall SetPixelShader(unsigned long Handle);
    virtual int __stdcall Virtual89();
    virtual int __stdcall Virtual90(int Handle);
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern cD3DStateCache* DAT_10f31be0;

extern int DAT_10f2c720;

extern int DAT_10eff6c0;

extern int DAT_10eff6c4;

class Class_10942A30_Result
{
public:
    void FUN_10d3a1f0(int A, int B, int C);
};

Class_10942A30_Result* FUN_10d3a810();

// The object the renderer draws with: it prepares the geometry and gives
// the base vertex of the draw.
class Class_1094EC90_Unknown114
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A);
    virtual int Virtual9();
};

// One entry of the draw list.
struct Struct_1094EC90_Unknown108
{
    char Unknown00[0x18];
    int Unknown18;
    char Unknown1C[4];
    int Unknown20;
    int Unknown24;
};

class Class_10E4AB88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void FUN_1094ec90(int A);

    char Unknown04[0x104];
    Struct_1094EC90_Unknown108* Unknown108;
    int Unknown10C;
    int Unknown110;
    Class_1094EC90_Unknown114* Unknown114[18];
    int Unknown15C;
};

// FUNCTION: 0x1094EC90 ?FUN_1094ec90@Class_10E4AB88@@UAEXH@Z
void Class_10E4AB88::FUN_1094ec90(int A)
{
    if (!Unknown108[Unknown110].Unknown18 || !Unknown114[DAT_10f2c720])
        return;

    Unknown114[DAT_10f2c720]->Virtual8(0);
    Struct_1094EC90_Unknown108* e = &Unknown108[Unknown110];
    DAT_10f31be0->SetIndices(e->Unknown18, Unknown114[DAT_10f2c720]->Virtual9());

    GDirect3DDevice8->SetRenderState(0x16, 3);
    GDirect3DDevice8->SetRenderState(0x36, 4);

    if (Unknown15C)
        GDirect3DDevice8->DrawIndexedPrimitive(D3DPT_TRIANGLESTRIP, 0, Unknown108[Unknown110].Unknown20, 0, Unknown108[Unknown110].Unknown24);
    else
        GDirect3DDevice8->DrawIndexedPrimitive(D3DPT_TRIANGLELIST, 0, Unknown108[Unknown110].Unknown20, 0, Unknown108[Unknown110].Unknown24);

    FUN_10d3a810()->FUN_10d3a1f0(3, DAT_10eff6c0, Unknown108[Unknown110].Unknown24);
    FUN_10d3a810()->FUN_10d3a1f0(3, DAT_10eff6c4, Unknown108[Unknown110].Unknown24);

    GDirect3DDevice8->SetRenderState(0x16, 2);
    GDirect3DDevice8->SetRenderState(0x36, 5);

    if (Unknown15C)
        GDirect3DDevice8->DrawIndexedPrimitive(D3DPT_TRIANGLESTRIP, 0, Unknown108[Unknown110].Unknown20, 0, Unknown108[Unknown110].Unknown24);
    else
        GDirect3DDevice8->DrawIndexedPrimitive(D3DPT_TRIANGLELIST, 0, Unknown108[Unknown110].Unknown20, 0, Unknown108[Unknown110].Unknown24);

    FUN_10d3a810()->FUN_10d3a1f0(3, DAT_10eff6c0, Unknown108[Unknown110].Unknown24);
    FUN_10d3a810()->FUN_10d3a1f0(3, DAT_10eff6c4, Unknown108[Unknown110].Unknown24);
}
