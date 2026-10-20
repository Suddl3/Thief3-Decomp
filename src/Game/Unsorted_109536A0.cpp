// Game/Unsorted_109536A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10953AC0.h"
#include "Game/Struct_10924210.h"

class IDirect3DBaseTexture8;

class Class_10953E40_Member;

class Info_10952690;

// Game/Class_10937400.h copied whole, with the texture array the class holds.
class Class_10937400
{
public:
    void FUN_10937400(unsigned long Value);

    char Unknown00[0x1C];
    IDirect3DBaseTexture8* m_StageTextures[4];
    char Unknown2C[0x680];
    unsigned long m_PixelShader;
};

// Game/Class_109373D0.h copied whole, with the base the class derives from.
class Class_109373D0 : public Class_10937400
{
public:
    void SetVertexShader(unsigned long Value);
    void ResetTextureStages();
    void ResetTextureStagesBiased();

    unsigned long m_VertexShader;
};

// Game/cD3DStateCache.h copied whole, with the base the class derives from.
class cD3DStateCache : public Class_109373D0
{
public:
    void SetStreamSource(int A, int B);
    void SetIndices(int A, int B);
    void ClearTextures();
    void FUN_10937280(int A, Info_10952690* Info);
    void SetVertexShaderConstantScalar(int p1, int p2);
    void SetPixelShaderConstantScalar(int Index, int Value);
    void FUN_10936bf0(int A);
    void FUN_10937140(int A, float* B);
    void FUN_10937c70();
    void FUN_10938000();
    void FUN_10938150(float A, float B, float C, float D);
    void FUN_10938430();
    void Reset();
    void ResetTextureStagesBiased();
    void SetStageBorder(int A, bool B);
    void SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture);

    int m_VertexBuffer;
    int m_VertexStride;
    int m_IndexBuffer;
    int m_BaseVertexIndex;
    char Pad2C[0x7d0];
    Struct_10924210 Unknown7FC;
};

// Game/Class_10953B60.h copied whole, with the fields the function reads.
class Class_10953B60
{
public:
    void ApplyWorldMatrix();
    void FUN_10953c90(int Arg);
    void Reset();
    void FUN_109538b0();
    void AddItem(const FVector& P);

    float Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    float Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    float Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    float Unknown3C;
    Class_10953AC0 m_Items;
    int Unknown4C;
    int Unknown50;
    int Unknown54;
    int Unknown58;
    Class_10953E40_Member* Unknown5C;
    char Unknown60;
    bool Unknown61;
    char Unknown62;
    char Pad63;
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x109538B0 ?FUN_109538b0@Class_10953B60@@QAEXXZ
void Class_10953B60::FUN_109538b0()
{
    if (Unknown5C)
    {
        DAT_10f31be0->FUN_10937400(0);
        DAT_10f31be0->SetVertexShader(Unknown62 ? 0x44 : 0x42);
        GDirect3DDevice8->SetRenderState(7, Unknown60 ? 0 : 1);
        GDirect3DDevice8->SetRenderState(0x89, 0);
        GDirect3DDevice8->SetRenderState(0x8d, 1);
        GDirect3DDevice8->SetRenderState(8, 3);
        GDirect3DDevice8->SetRenderState(0xe, 1);
        if (Unknown50 != 3)
        {
            GDirect3DDevice8->SetRenderState(0x1b, 0);
            GDirect3DDevice8->SetRenderState(0x13, 2);
            GDirect3DDevice8->SetRenderState(0x14, 1);
            GDirect3DDevice8->SetRenderState(0x16, 1);
        }
        IDirect3DBaseTexture8*& Texture = DAT_10f31be0->m_StageTextures[0];
        if (Texture)
        {
            GDirect3DDevice8->SetTexture(0, 0);
            Texture = 0;
        }
        DAT_10f31be0->SetStreamSource((int)Unknown5C, Unknown62 ? 0x14 : 0x10);
        if (Unknown50 == 0)
        {
            GDirect3DDevice8->DrawPrimitive(D3DPT_LINELIST, 0, Unknown4C);
        }
        else if (Unknown50 == 1)
        {
            GDirect3DDevice8->DrawPrimitive(D3DPT_LINESTRIP, 0, Unknown4C);
        }
        else if (Unknown50 == 2)
        {
            GDirect3DDevice8->DrawPrimitive(D3DPT_POINTLIST, 0, Unknown4C);
        }
        else if (Unknown50 == 3)
        {
            GDirect3DDevice8->SetRenderState(0x8d, 1);
            GDirect3DDevice8->SetRenderState(9, 2);
            GDirect3DDevice8->DrawPrimitive(D3DPT_TRIANGLELIST, 0, Unknown4C);
        }
    }
}
