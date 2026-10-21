// Game/Unsorted_10951BD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

struct D3DXMATRIX;

class IDirect3DBaseTexture8;

class IDirect3DIndexBuffer8;

class IDirect3DSurface8;

class IDirect3DTexture8;

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

class IDirect3DVertexBuffer8
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
    virtual int __stdcall Virtual11(int Offset, int Size, void** Data, int Flags);
    virtual int __stdcall Virtual12();
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
    virtual int __stdcall Virtual12();
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

extern const char DAT_10e4ad14[];

extern const char DAT_10e4acec[];

Class_10905A90_Member* GetAllocator();

// The buffers the render resource manager hands out.
class Class_10951BD0_Buffer
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Class_10F2C744
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int Index, int Flags, int A, const char* Name, Class_10951BD0_Buffer** Out);
};

extern Class_10F2C744* DAT_10f2c744;

class Class_10951BD0
{
public:
    void FUN_10951bd0();

    char Unknown00[0xF0];
    int UnknownF0;
    char UnknownF4[0x60];
    unsigned char Unknown154;
    char Unknown155[7];
    int Unknown15C;
    int Unknown160;
    char Unknown164[0xC];
    int Unknown170;
    int Unknown174;
    IDirect3DVertexBuffer8* Unknown178;
    Class_10951BD0_Buffer* Unknown17C;
    Class_10951BD0_Buffer* Unknown180;
};

// FUNCTION: 0x10951BD0 ?FUN_10951bd0@Class_10951BD0@@QAEXXZ
void Class_10951BD0::FUN_10951bd0()
{
    int VertexCount;
    int IndexCount;
    if (Unknown154 & 1)
    {
        VertexCount = UnknownF0 * Unknown15C;
        IndexCount = UnknownF0 * Unknown160;
    }
    else
    {
        VertexCount = UnknownF0 * 6;
        IndexCount = UnknownF0 * 4;
    }
    Unknown170 = IndexCount;
    Unknown174 = VertexCount;
    if (Unknown178)
    {
        Unknown178->Virtual2();
        Unknown178 = 0;
    }
    if (Unknown17C)
    {
        Unknown17C->Virtual1();
        Unknown17C = 0;
    }
    if (Unknown180)
    {
        Unknown180->Virtual1();
        Unknown180 = 0;
    }
    if (VertexCount)
    {
        GetAllocator()->Virtual8(0, 0);
        int Result = GDirect3DDevice8->CreateVertexBuffer(VertexCount * 2, 8, 0x65, DAT_10efefbc, &Unknown178);
        GetAllocator()->Virtual9();
        if (Result < 0)
        {
            Unknown178 = 0;
            return;
        }
        DAT_10f2c744->Virtual3(0, 0x20, 0, DAT_10e4ad14, &Unknown17C);
        Result = DAT_10f2c744->Virtual3(1, 0x20, 0, DAT_10e4acec, &Unknown180);
        if (Result < 0)
        {
            if (Unknown178)
            {
                Unknown178->Virtual2();
                Unknown178 = 0;
            }
            Unknown178 = 0;
            if (Unknown17C)
            {
                Unknown17C->Virtual1();
                Unknown17C = 0;
            }
            if (Unknown180)
            {
                Unknown180->Virtual1();
                Unknown180 = 0;
            }
            return;
        }
        void* Data;
        if (Unknown178->Virtual11(0, VertexCount * 2, &Data, 0) < 0)
            return;
        int i = 0;
        if (UnknownF0 > 0)
        {
            for (; i < UnknownF0; i++)
            {
                int j = 2 + i * 4;
                ((short*)Data)[i * 6 + 0] = i * 4;
                ((short*)Data)[i * 6 + 1] = j - 1;
                ((short*)Data)[i * 6 + 2] = j;
                ((short*)Data)[i * 6 + 3] = j;
                ((short*)Data)[i * 6 + 4] = j - 1;
                ((short*)Data)[i * 6 + 5] = i * 4 + 3;
            }
        }
        Unknown178->Virtual12();
    }
}
