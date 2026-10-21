// Game/Unsorted_10938A50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10924210.h"

struct D3DXMATRIX;

class IDirect3DBaseTexture8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

class IDirect3DVertexBuffer8;

// Game/IDirect3DDevice8.h copied whole, with the signatures of the two slots this unit
// calls added: the one at slot 42 takes the viewport, the one at slot 63 takes three DWORDs.
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
    virtual long __stdcall Virtual42(const Struct_10924210* Viewport);
    virtual long __stdcall Virtual43();
    virtual long __stdcall Virtual44();
    virtual long __stdcall Virtual45();
    virtual long __stdcall Virtual46();
    virtual long __stdcall Virtual47();
    virtual long __stdcall Virtual48();
    virtual long __stdcall Virtual49();
    virtual long __stdcall SetRenderState(unsigned long State, unsigned long Value);
    virtual int __stdcall Virtual51();
    virtual int __stdcall Virtual52();
    virtual int __stdcall Virtual53();
    virtual int __stdcall Virtual54();
    virtual int __stdcall Virtual55();
    virtual int __stdcall Virtual56();
    virtual int __stdcall Virtual57();
    virtual int __stdcall Virtual58();
    virtual int __stdcall Virtual59();
    virtual int __stdcall Virtual60();
    virtual long __stdcall SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture);
    virtual int __stdcall Virtual62();
    virtual int __stdcall Virtual63(unsigned long Stage, unsigned long Type, unsigned long Value);
    virtual int __stdcall Virtual64();
    virtual int __stdcall Virtual65();
    virtual int __stdcall Virtual66();
    virtual int __stdcall Virtual67();
    virtual int __stdcall Virtual68();
    virtual int __stdcall Virtual69();
    virtual long __stdcall DrawPrimitive(int PrimitiveType, unsigned int StartVertex, unsigned int PrimitiveCount);
    virtual int __stdcall Virtual71();
    virtual int __stdcall Virtual72();
    virtual int __stdcall Virtual73();
    virtual int __stdcall Virtual74();
    virtual int __stdcall Virtual75();
    virtual long __stdcall SetVertexShader(unsigned long Handle);
    virtual int __stdcall Virtual77();
    virtual int __stdcall Virtual78(int Handle);
    virtual long __stdcall SetVertexShaderConstant(unsigned long Register, const void* pConstantData, unsigned long ConstantCount);
    virtual int __stdcall Virtual80();
    virtual int __stdcall Virtual81();
    virtual int __stdcall Virtual82();
    virtual long __stdcall SetStreamSource(unsigned int StreamNumber, IDirect3DVertexBuffer8* StreamData, unsigned int Stride);
    virtual int __stdcall Virtual84();
    virtual long __stdcall SetIndices(IDirect3DIndexBuffer8* IndexData, unsigned int BaseVertexIndex);
    virtual int __stdcall Virtual86();
    virtual int __stdcall Virtual87();
    virtual long __stdcall SetPixelShader(unsigned long Handle);
    virtual int __stdcall Virtual89();
    virtual int __stdcall Virtual90(int Handle);
};

extern IDirect3DDevice8* GDirect3DDevice8;

// Game/Class_109373D0.h copied whole, with the viewport the code hands to the device added.
class Class_109373D0
{
public:
    void SetVertexShader(unsigned long Value);
    void ResetTextureStages();
    void ResetTextureStagesBiased();
    void FUN_109389b0();
    void FUN_10938b30(bool Param);

    char Unknown00[0x1C];
    IDirect3DBaseTexture8* m_StageTextures[4];
    char Unknown2C[0x684];
    unsigned long m_VertexShader;
    char Unknown6B4[0x4];
    Struct_10924210 Unknown6B8;
};

// FUNCTION: 0x10938B30 ?FUN_10938b30@Class_109373D0@@QAEX_N@Z
void Class_109373D0::FUN_10938b30(bool Param)
{
    ResetTextureStages();
    GDirect3DDevice8->SetRenderState(0x34, 0);
    GDirect3DDevice8->SetRenderState(0x7, 0);
    GDirect3DDevice8->SetRenderState(0x16, 1);
    GDirect3DDevice8->SetRenderState(0x89, 0);
    GDirect3DDevice8->SetRenderState(0x8d, 1);
    GDirect3DDevice8->Virtual63(0, 0xb, 0);
    GDirect3DDevice8->Virtual63(0, 0x18, 0);
    GDirect3DDevice8->Virtual63(0, 0xd, 3);
    GDirect3DDevice8->Virtual63(0, 0xe, 3);
    GDirect3DDevice8->Virtual63(0, 2, 2);
    GDirect3DDevice8->Virtual63(0, 3, 0);
    GDirect3DDevice8->Virtual63(0, 1, 4);
    GDirect3DDevice8->Virtual63(0, 0x11, 2);
    GDirect3DDevice8->Virtual63(0, 0x10, 2);
    GDirect3DDevice8->Virtual63(0, 0x12, 2);
    GDirect3DDevice8->Virtual63(1, 1, 1);
    GDirect3DDevice8->Virtual63(1, 4, 1);
    GDirect3DDevice8->Virtual63(0, 5, 2);
    GDirect3DDevice8->Virtual63(0, 6, 0);
    if (Param)
    {
        GDirect3DDevice8->SetRenderState(0x1b, 1);
        GDirect3DDevice8->SetRenderState(0x13, 5);
        GDirect3DDevice8->SetRenderState(0x14, 6);
        GDirect3DDevice8->SetRenderState(0xf, 1);
        GDirect3DDevice8->SetRenderState(0x18, 1);
        GDirect3DDevice8->SetRenderState(0x19, 5);
        GDirect3DDevice8->Virtual63(0, 4, 4);
        GDirect3DDevice8->SetRenderState(0xa8, 0xf);
    }
    else
    {
        GDirect3DDevice8->SetRenderState(0xf, 0);
        GDirect3DDevice8->Virtual63(0, 4, 3);
        GDirect3DDevice8->SetRenderState(0xa8, 7);
    }
    GDirect3DDevice8->Virtual42(&Unknown6B8);
}
