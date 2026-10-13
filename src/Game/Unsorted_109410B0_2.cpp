// Game/Unsorted_109410B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10941310.h"
#include "Game/IDirect3DIndexBuffer8.h"

// Declarations first.
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
    virtual long __stdcall CreateIndexBuffer(unsigned int Length, unsigned long Usage, int Format, int Pool, IDirect3DIndexBuffer8** ppIndexBuffer);
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

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10efefbc;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10941310 ?EnsureIndexBuffer@Class_10941310@@QAE_NXZ
bool Class_10941310::EnsureIndexBuffer()
{
    if (Unknown14)
    {
        if (Unknown18 >= Unknown1C * 2)
        {
            return true;
        }
        Unknown14->Virtual2();
        Unknown14 = 0;
    }
    GetAllocator()->Virtual8(0, 0);
    long Result = GDirect3DDevice8->CreateIndexBuffer(Unknown1C * 2, 8, 0x65, DAT_10efefbc, &Unknown14);
    GetAllocator()->Virtual9();
    if (Result < 0)
    {
        Unknown14 = 0;
        Unknown18 = 0;
        return false;
    }
    Unknown18 = Unknown1C * 2;
    return true;
}
