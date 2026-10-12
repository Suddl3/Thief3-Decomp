// Game/Unsorted_10941480.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10941480.h"

struct D3DXMATRIX;

class IDirect3DBaseTexture8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

class IDirect3DVertexBuffer8;

struct Struct_10924210;

// The global's class as this function sees it: its texture slots sit at 0x1C.
class cD3DStateCache
{
public:
    void SetVertexShader(unsigned long Value);
    void FUN_10937400(unsigned long Value);
    void FUN_109241e0(unsigned long Stage, IDirect3DBaseTexture8* Texture);

    char Unknown00[0x1C];
    IDirect3DBaseTexture8* m_Textures[4];
};

enum D3DPRIMITIVETYPE
{
    D3DPT_POINTLIST = 1,
    D3DPT_LINELIST = 2,
    D3DPT_LINESTRIP = 3,
    D3DPT_TRIANGLELIST = 4,
    D3DPT_TRIANGLESTRIP = 5,
    D3DPT_TRIANGLEFAN = 6
};

// Game/IDirect3DDevice8.h copied whole, slot 71 given its real method.
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
    virtual int __stdcall SetViewport(const Struct_10924210* Viewport);
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
    virtual long __stdcall DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, unsigned int StartVertex, unsigned int PrimitiveCount);
    virtual long __stdcall DrawIndexedPrimitive(D3DPRIMITIVETYPE PrimitiveType, unsigned int MinIndex, unsigned int NumVertices, unsigned int StartIndex, unsigned int PrimitiveCount);
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

// Class_10941480_Unknown00: the object Unknown00 points to; its texture is at 0x30.
class Class_10941480_Unknown00
{
public:
    char Unknown00[0x30];
    IDirect3DBaseTexture8* Unknown30;
};

extern cD3DStateCache* DAT_10f31be0;

extern IDirect3DDevice8* GDirect3DDevice8;

void FUN_109192e0(int A, int B, int C);

// FUNCTION: 0x10941480 ?FUN_10941480@Class_10941480@@QAEXXZ
void Class_10941480::FUN_10941480()
{
    if (Unknown2C > 0 && Unknown08)
    {
        if (Unknown00)
            DAT_10f31be0->FUN_109241e0(0, Unknown00->Unknown30);
        else
        {
            IDirect3DBaseTexture8** Slot = &DAT_10f31be0->m_Textures[0];
            if (*Slot)
            {
                GDirect3DDevice8->SetTexture(0, 0);
                *Slot = 0;
            }
        }
        DAT_10f31be0->SetVertexShader(0x144);
        DAT_10f31be0->FUN_10937400(0);
        if (Unknown06)
        {
            int Texture = Unknown08[Unknown05];
            if (Texture)
            {
                if (Unknown14)
                {
                    FUN_109192e0(Texture, 0x1c, Unknown14);
                    GDirect3DDevice8->DrawIndexedPrimitive((D3DPRIMITIVETYPE)Unknown3C, 0, Unknown20, 0, Unknown2C);
                    return;
                }
                FUN_109192e0(Texture, 0x1c, 0);
                if (Unknown3C == 4)
                    GDirect3DDevice8->DrawPrimitive(D3DPT_TRIANGLELIST, 0, Unknown2C);
            }
        }
    }
}
