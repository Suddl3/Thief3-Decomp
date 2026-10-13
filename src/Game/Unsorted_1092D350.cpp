// Game/Unsorted_1092D350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1092D420.h"

// Win32 imports used by the cursor code.
extern "C" __declspec(dllimport) void* __stdcall SetCursor(void* Cursor);

extern "C" __declspec(dllimport) int __stdcall ShowCursor(int Show);

extern "C" __declspec(dllimport) void* __stdcall LoadCursorA(void* Instance, const char* CursorName);

// Game/IDirect3DDevice8.h's class, copied whole: its slot 11 takes the arguments of
// SetCursorPosition here (the header's Virtual11() takes none).
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
    virtual void __stdcall SetCursorPosition(int XScreenSpace, int YScreenSpace, unsigned long Flags);
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

// FUNCTION: 0x1092D350 ?FUN_1092d350@Class_1092D420@@QAEXHH@Z
void Class_1092D420::FUN_1092d350(int A, int B)
{
    if (!GDirect3DDevice8 || !Unknown08)
    {
        SetCursor(LoadCursorA(0, (const char*)32512));
    }
    else
    {
        SetCursor(0);
        GDirect3DDevice8->ShowCursor(1);
        if (A >= 0 && B >= 0)
        {
            GDirect3DDevice8->SetCursorPosition(A, B, 1);
        }
    }
    ShowCursor(1);
    Unknown0C = true;
}
