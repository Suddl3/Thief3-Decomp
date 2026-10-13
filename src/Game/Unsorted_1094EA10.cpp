// Game/Unsorted_1094EA10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10936A40.h"
#include "Game/Info_10952690.h"
#include "Game/Struct_10924210.h"
#include "Game/Struct_10919190.h"
#include "Game/Struct_1094E0F0.h"
#include "Game/Struct_1094E120.h"

extern IDirect3DDevice8* GDirect3DDevice8;

// Game/cD3DStateCache.h copied whole, with the two methods this function calls added.
class cD3DStateCache : public Class_10936A40
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

extern cD3DStateCache* DAT_10f31be0;

class Class_1094E050;

class Class_10951730;

class cIntArray;

struct Struct_1094E820B;

struct Struct_1094E9D0;

// Game/Class_10E4AB88.h copied whole, with slot 13 named for this function. The header's
// Pad08 assumed Unknown04 was 4 bytes; the D3DXMATRIX there is 0x40, so the pad after it is 0x10.
class Class_10E4AB88
{
public:
    virtual void Virtual0();
    virtual void FUN_1094dff0(int A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int GetCount();
    virtual int GetItem(int Index);
    virtual void FUN_1094e050();
    virtual void Virtual9(int A, int B);
    virtual void FUN_1094e9d0(int p1, int p2);
    virtual void FUN_1094e9f0(int p1, int p2);
    virtual void FUN_1094eab0();
    virtual void FUN_1094ea10(float A, float B, float C, int D, bool Flag);
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void CollectValues(cIntArray* Out, int Param);
    virtual void FUN_1094eea0(int Param);

    Struct_1094E0F0 FUN_1094e0f0();
    Struct_1094E120 FUN_1094e120();
    float FUN_1094f9b0();
    void* FUN_10baa3a0();

    Struct_10919190 Unknown04;
    char Pad44[0x10];
    int Unknown54;
    char Unknown58[8];
    int Unknown60;
    char Unknown64[0x4C];
    Class_10951730* UnknownB0;
    char PadB4[0x34];
    Class_1094E050* Unknown0E8[1];
    char PadEC[0x8];
    union
    {
        int m_NumEntries;
        int UnknownF4;
    };
    union
    {
        int Unknown0F8;
        char UnknownF8[4];
    };
    union
    {
        int* UnknownFC;
        Struct_1094E9D0** Unknown0FC;
    };
    char Unknown100[8];
    Struct_1094E820B* Unknown108;
    int Unknown10C;
    int Unknown110;
    char Pad114[0x20];
    Struct_1094E0F0 Unknown134;
    Struct_1094E120 Unknown140;
    char Pad14C[0xc];
    float Field158;
    char Pad15C[0x4];
    void* Unknown160;
    int Unknown164;
};

struct Struct_1094E820B
{
    char Unknown00[0x14];
    int Unknown14;
    char Unknown18[0x10];
};

// FUNCTION: 0x1094EA10 ?FUN_1094ea10@Class_10E4AB88@@UAEXMMMH_N@Z
void Class_10E4AB88::FUN_1094ea10(float A, float B, float C, int D, bool Flag)
{
    DAT_10f31be0->FUN_10938000();
    DAT_10f31be0->FUN_10938150(A, B, C, 1.0f);
    if (Flag)
        GDirect3DDevice8->SetRenderState(8, 2);
    FUN_1094e050();
    int Count = Unknown108[Unknown110].Unknown14;
    for (int i = 0; i < Count; i++)
        Virtual9(0, i);
    GDirect3DDevice8->SetRenderState(8, 3);
}
