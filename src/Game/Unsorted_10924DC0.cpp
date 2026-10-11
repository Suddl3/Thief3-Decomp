// Game/Unsorted_10924DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10936A40.h"
#include "Game/Struct_10924210.h"

class IDirect3DBaseTexture8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

class IDirect3DVertexBuffer8;

struct D3DXMATRIX;

struct Info_10952690;

class Class_1092D990;

struct Entry_10925410;

enum D3DPRIMITIVETYPE
{
    D3DPT_POINTLIST = 1,
    D3DPT_LINELIST = 2,
    D3DPT_LINESTRIP = 3,
    D3DPT_TRIANGLELIST = 4,
    D3DPT_TRIANGLESTRIP = 5,
    D3DPT_TRIANGLEFAN = 6
};

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
    virtual long __stdcall Present(const void* SourceRect, const void* DestRect, void* DestWindowOverride, const void* DirtyRegion);
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
    virtual long __stdcall Virtual71();
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

class Class_10925410
{
public:
    int FUN_10925410(int Index);

    char Unknown00[0x40];
    unsigned char Unknown40;
    char Pad41[0x3];
    int Unknown44;
    char Pad48[0x94];
    int UnknownDC;
    char UnknownE0[4];
    Entry_10925410* UnknownE4;
};

class Class_10924E80 : public Class_10925410
{
public:
    void FUN_10925db0(int Item);
    void FUN_10924e80(int A);
    void FUN_10925060();
    void FUN_10925230();
    void FUN_10926f20(int A, int B);
    void FUN_10925290(int A, int B);
    void FUN_10925cf0(void* Item);
    void FUN_10925c60(void* A, int B);

    char Pad01[0xbb];
    char Pad1A3[0x1];
    Class_10BFBD70 UnknownBC;
    char PadC8[0x10];
    Class_1092D990* Unknown0D8;
};

class Class_10936AC0 : public Class_10936A40
{
public:
    void FUN_10936ac0(int A, int B);
    void FUN_10936b20(int A, int B);
    void FUN_1091ef90();
    void FUN_10937280(int A, Info_10952690* Info);
    void FUN_109371d0(int p1, int p2);
    void FUN_10937310(int Index, int Value);
    void FUN_10936bf0(int A);
    void FUN_10937010();

    char Pad01[0xb];
    char Pad81F[0x1];
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    IDirect3DBaseTexture8* Unknown1C[4];
    char Pad2C[0x7d0];
    Struct_10924210 Unknown7FC;
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern Class_10936AC0* DAT_10f31be0;

// FUNCTION: 0x10924E80 ?FUN_10924e80@Class_10924E80@@QAEXH@Z
void Class_10924E80::FUN_10924e80(int A)
{
    Unknown44++;
    DAT_10f31be0->FUN_10937010();
    GDirect3DDevice8->SetRenderState(0x34, 0);
    GDirect3DDevice8->SetRenderState(0x1b, 0);
    GDirect3DDevice8->SetRenderState(0xf, 0);
    GDirect3DDevice8->SetRenderState(0x18, 0);
    GDirect3DDevice8->SetRenderState(0x13, 2);
    GDirect3DDevice8->SetRenderState(0x14, 1);
    GDirect3DDevice8->SetRenderState(0x7, 1);
    GDirect3DDevice8->SetRenderState(0xe, 0);
    GDirect3DDevice8->SetRenderState(0x17, 4);
    GDirect3DDevice8->SetRenderState(0x16, 3);
    GDirect3DDevice8->SetRenderState(0x8, 3);
    GDirect3DDevice8->SetRenderState(0x8d, 1);
    GDirect3DDevice8->SetRenderState(0x3c, 0);
    GDirect3DDevice8->SetRenderState(0xa8, 0xf);
    if (!(Unknown40 & 0x20))
    {
        GDirect3DDevice8->Virtual35();
        GDirect3DDevice8->Present(0, 0, 0, 0);
    }
}
