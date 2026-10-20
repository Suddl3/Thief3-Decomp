// Game/Unsorted_1094D740.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1094D740.h"
#include "Game/Info_10952690.h"
#include "Game/Struct_10924210.h"

// The game declares these two as classes; the state cache's header forward
// declares one of them as a struct, which mangles the call wrongly.
class Class_1091E3F0;

struct Struct_10938DA0;

// Game/Class_10937790.h copied whole, with the argument of FUN_10938ee0
// typed as the class the game uses.
class Class_10937790
{
public:
    void FUN_10937790();
    void SetTransforms(void* A, void* B, void* C);
    void FUN_10938ee0(Class_1091E3F0* Obj);
    void FUN_10938da0(void* A, Struct_10938DA0* B, void* C);

    char Unknown00[0x6FC];
    int Unknown6FC;
    char Pad700[0x3c];
    char m_Projection[0x40];
    char m_World[0x40];
    char m_View[0x40];
    char m_Viewport[0x18];
};

// Game/IDirect3DDevice8.h copied whole, with slot 72 given the signature the
// game uses (a viewport block) and the other slots untouched.
class IDirect3DBaseTexture8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

class IDirect3DVertexBuffer8;

struct D3DXMATRIX;

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
    virtual long __stdcall Virtual63();
    virtual long __stdcall Virtual64();
    virtual long __stdcall Virtual65();
    virtual long __stdcall Virtual66();
    virtual long __stdcall Virtual67();
    virtual long __stdcall Virtual68();
    virtual long __stdcall Virtual69();
    virtual long __stdcall DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, unsigned int StartVertex, unsigned int PrimitiveCount);
    virtual long __stdcall Virtual71();
    virtual long __stdcall Virtual72(int First, int Count, const void* Data, int Size);
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

// Game/cD3DStateCache.h copied whole, with SetStreamSource kept on the state
// cache and the two methods the game inherits from Class_10937790.
class cD3DStateCache : public Class_10937790
{
public:
    void SetStreamSource(int A, int B);
    void SetIndices(int A, int B);
    void ClearTextures();
    void FUN_10937280(int A, Info_10952690* Info);
    void SetVertexShaderConstantScalar(int p1, int p2);
    void SetPixelShaderConstantScalar(int Index, int Value);
    void FUN_10936bf0(int A);
    void FUN_10938000();
    void FUN_10938150(float A, float B, float C, float D);
    void FUN_10938430();
    void Reset();
    void ResetTextureStagesBiased();
    void SetStageBorder(int A, bool B);
    void SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture);
    void SetVertexShader(unsigned long Handle);

    char Pad01[0xb];
    char Pad81F[0x1];
    int m_VertexBuffer;
    int m_VertexStride;
    int m_IndexBuffer;
    int m_BaseVertexIndex;
    IDirect3DBaseTexture8* m_Textures[4];
    char Pad2C[0x7d0];
    Struct_10924210 Unknown7FC;
};

// The six sides the function fills in, each with the two bounds and three
// more floats.
struct Struct_1094D740_Side
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    char Unknown0C[4];
    float Unknown10;
    float Unknown14;
    char Unknown18[8];
};

struct Struct_1094D740_Sides
{
    Struct_1094D740_Side Side[6];
};

extern int DAT_10f2c788;

extern int DAT_10f2c78c;

extern float DAT_10eff638;

extern IDirect3DDevice8* GDirect3DDevice8;

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x1094D740 ?FUN_1094d740@Class_1094D740@@QAEXHHH@Z
void Class_1094D740::FUN_1094d740(int A, int B, int C)
{
    Struct_1094D740_Sides Sides;
    float ScaleX = 1.0f / (float)(unsigned int)DAT_10f2c788;
    float ScaleY = 1.0f / (float)(unsigned int)DAT_10f2c78c;

    Sides.Side[0].Unknown08 = 0.0f;
    Sides.Side[0].Unknown10 = 0.0f;
    Sides.Side[0].Unknown14 = 0.0f;
    Sides.Side[1].Unknown08 = 0.0f;
    Sides.Side[1].Unknown10 = 1.0f;
    Sides.Side[1].Unknown14 = 0.0f;
    Sides.Side[2].Unknown08 = 0.0f;
    Sides.Side[2].Unknown10 = 1.0f;
    Sides.Side[2].Unknown14 = 1.0f;
    Sides.Side[3].Unknown08 = 0.0f;
    Sides.Side[3].Unknown10 = 0.0f;
    Sides.Side[3].Unknown14 = 0.0f;
    Sides.Side[4].Unknown08 = 0.0f;
    Sides.Side[4].Unknown10 = 1.0f;
    Sides.Side[4].Unknown14 = 1.0f;
    Sides.Side[5].Unknown08 = 0.0f;
    Sides.Side[5].Unknown10 = 0.0f;
    Sides.Side[5].Unknown14 = 1.0f;

    float MinX = -1.0f - ScaleX - DAT_10eff638;
    float MaxX = 1.0f - ScaleX + DAT_10eff638;
    float MaxY = DAT_10eff638 + ScaleY + 1.0f;
    float MinY = ScaleY - 1.0f - DAT_10eff638;

    Sides.Side[0].Unknown00 = MinX;
    Sides.Side[0].Unknown04 = MaxY;
    Sides.Side[1].Unknown00 = MaxX;
    Sides.Side[1].Unknown04 = MaxY;
    Sides.Side[2].Unknown00 = MaxX;
    Sides.Side[2].Unknown04 = MinY;
    Sides.Side[3].Unknown00 = MinX;
    Sides.Side[3].Unknown04 = MaxY;
    Sides.Side[4].Unknown00 = MaxX;
    Sides.Side[4].Unknown04 = MinY;
    Sides.Side[5].Unknown00 = MinX;
    Sides.Side[5].Unknown04 = MinY;

    GDirect3DDevice8->SetRenderState(7, 0);
    DAT_10f31be0->FUN_10938da0((void*)A, (Struct_10938DA0*)B, (void*)C);
    GDirect3DDevice8->Virtual72(4, 2, &Sides, 0x20);
    DAT_10f31be0->SetStreamSource(0, 0);
    DAT_10f31be0->FUN_10938ee0((Class_1091E3F0*)A);
    GDirect3DDevice8->SetRenderState(7, 1);
}
