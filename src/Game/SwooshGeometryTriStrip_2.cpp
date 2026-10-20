// Game/SwooshGeometryTriStrip_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DStateCache.h"
#include "Game/Class_10952390.h"

class Class_10AA4D50_Unknown14
{
public:
    char Unknown00[0x10];
    Class_10952390 Unknown10;
};

class Class_10AA4D50_Unknown18
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

struct IDirect3DBaseTexture8;

struct IDirect3DIndexBuffer8;

struct IDirect3DSurface8;

struct IDirect3DTexture8;

struct IDirect3DVertexBuffer8;

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

enum D3DRENDERSTATETYPE
{
    D3DRS_FOGENABLE = 14,
    D3DRS_LIGHTING = 15,
    D3DRS_BLENDOP = 22,
    D3DRS_SCISSORTESTENABLE = 24,
    D3DRS_SCISSORLEFT = 25
};

// include/Game/IDirect3DDevice8.h copied here with the slots this function
// calls given their real signatures.
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
    virtual long __stdcall SetTransform(int State, const Struct_10924210* pMatrix);
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
    virtual long __stdcall GetRenderState(unsigned long State, unsigned long* Value);
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
    virtual long __stdcall SetTextureStageState(unsigned long Stage, unsigned long Type, unsigned long Value);
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

class SwooshGeometryTriStrip
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_10aa4d50();

    bool Unknown04;
    char Unknown05[3];
    int Unknown08;
    char Unknown0C[8];
    Class_10AA4D50_Unknown14* Unknown14;
    Class_10AA4D50_Unknown18* Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10AA4D50 ?FUN_10aa4d50@SwooshGeometryTriStrip@@UAEXXZ
void SwooshGeometryTriStrip::FUN_10aa4d50()
{
    if (!Unknown04)
        return;
    if (Unknown08 < 2)
        return;

    unsigned long FogEnable;
    unsigned long BlendOp;
    int NumVertices = Unknown08 * 2;
    int PrimitiveCount = NumVertices - 2;

    GDirect3DDevice8->GetRenderState(D3DRS_FOGENABLE, &FogEnable);
    GDirect3DDevice8->GetRenderState(D3DRS_BLENDOP, &BlendOp);
    GDirect3DDevice8->SetRenderState(D3DRS_BLENDOP, 1);

    if (Unknown14->Unknown10.Unknown00->Unknown28C)
    {
        GDirect3DDevice8->SetRenderState(D3DRS_LIGHTING, 1);
        GDirect3DDevice8->SetRenderState(D3DRS_SCISSORTESTENABLE, Unknown14->Unknown10.Unknown00->Unknown290);
        GDirect3DDevice8->SetRenderState(D3DRS_SCISSORLEFT, 5);
    }
    else
    {
        GDirect3DDevice8->SetRenderState(D3DRS_LIGHTING, 0);
    }

    if (Unknown14->Unknown10.FUN_10952390())
        GDirect3DDevice8->SetRenderState(D3DRS_FOGENABLE, 0);

    Unknown18->Virtual8(0);
    int BaseVertex = Unknown18->Virtual9();
    DAT_10f31be0->SetIndices(Unknown1C, BaseVertex);
    GDirect3DDevice8->DrawIndexedPrimitive(D3DPT_TRIANGLESTRIP, 0, NumVertices, 0, PrimitiveCount);

    GDirect3DDevice8->SetRenderState(D3DRS_BLENDOP, BlendOp);
    GDirect3DDevice8->SetRenderState(D3DRS_FOGENABLE, FogEnable);
}
