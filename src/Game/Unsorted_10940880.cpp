// Game/Unsorted_10940880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109373D0.h"

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
    virtual long __stdcall SetTextureStageState(unsigned long Stage, unsigned long Type, unsigned long Value);
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

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10936AC0 : public Class_109373D0
{
public:
    void FUN_10937140(int Index, float* Value);
};

extern Class_10936AC0* DAT_10f31be0;

struct Struct_1093FFE0;

class Class_10940C50_Unknown300
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10940C50_Unknown304
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10940C50_Unknown308
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10940C50_Unknown30C
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

// Game/Class_10E4A538.h copied whole: the four pointers at 0x300 are added, and the fields this function types differ.
class Class_10E4A538
{
public:
    virtual void FUN_109412f0();
    virtual void Virtual1();
    virtual void Virtual2();

    ~Class_10E4A538();

    char FUN_10940970();
    void FUN_10940c50();
    void FUN_1093ffe0(int Width, int Height, Struct_1093FFE0* Out);

    bool Unknown04;
    Class_109081E0 Unknown08[47];
    void* UnknownC4[47];
    Class_109081E0 Unknown180[47];
    void* Unknown23C[47];
    char Pad2F8[4];
    int Unknown2FC;
    Class_10940C50_Unknown300* Unknown300;
    Class_10940C50_Unknown304* Unknown304;
    Class_10940C50_Unknown308* Unknown308;
    Class_10940C50_Unknown30C* Unknown30C;
};

// FUNCTION: 0x10940880 ?FUN_10940880@@YAXXZ
void FUN_10940880()
{
    for (int i = 0; i < 4; i++)
    {
        IDirect3DBaseTexture8** Slot = &DAT_10f31be0->Unknown1C[i];
        if (*Slot)
        {
            GDirect3DDevice8->SetTexture(i, 0);
            *Slot = 0;
        }
        GDirect3DDevice8->SetTextureStageState(i, 11, i);
        GDirect3DDevice8->SetTextureStageState(i, 24, 0);
        GDirect3DDevice8->SetTextureStageState(i, 2, 2);
        GDirect3DDevice8->SetTextureStageState(i, 1, 2);
        GDirect3DDevice8->SetTextureStageState(i, 5, 2);
        GDirect3DDevice8->SetTextureStageState(i, 4, 2);
    }
    float Value[4] = { 1.0f, 0.0f, 0.0f, 0.0f };
    DAT_10f31be0->FUN_10937140(0x21, Value);
}

// FUNCTION: 0x10940C50 ?FUN_10940c50@Class_10E4A538@@QAEXXZ
void Class_10E4A538::FUN_10940c50()
{
    Class_10940C50_Unknown300* Object = Unknown300;
    Unknown2FC = 0;
    if (Object)
    {
        Object->Virtual2();
        Unknown300 = 0;
    }
    if (Unknown304)
    {
        Unknown304->Virtual2();
        Unknown304 = 0;
    }
    if (Unknown308)
    {
        Unknown308->Virtual2();
        Unknown308 = 0;
    }
    if (Unknown30C)
    {
        Unknown30C->Virtual2();
        Unknown30C = 0;
    }
    for (int i = 0; i < 47; i++)
    {
        if (UnknownC4[i])
            UnknownC4[i] = 0;
        if (Unknown23C[i])
            Unknown23C[i] = 0;
        Unknown08[i].FUN_1090a590(DAT_10e47660);
        Unknown180[i].FUN_1090a590(DAT_10e47660);
    }
    Unknown04 = false;
}
