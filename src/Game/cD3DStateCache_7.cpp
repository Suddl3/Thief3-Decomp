// Game/cD3DStateCache_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10936A40.h"
#include "Game/D3DXMATRIX.h"
#include "Game/D3DVIEWPORT8.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10924210.h"

extern IDirect3DDevice8* GDirect3DDevice8;

struct Info_10952690;

// Game/cD3DStateCache.h copied whole, with the method this function defines added.
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
    void FUN_10937140(int A, float* B);
    void FUN_10937400(unsigned long Value);
    void FUN_10937c70();
    void FUN_10938000();
    void FUN_10938150(float A, float B, float C, float D);
    void FUN_10938430();
    void Reset();
    void ResetTextureStagesBiased();
    void SetStageBorder(int A, bool B);
    void SetTexture(unsigned long Stage, IDirect3DBaseTexture8* Texture);
    void SetVertexShader(unsigned long Value);

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

// FUNCTION: 0x10938000 ?FUN_10938000@cD3DStateCache@@QAEXXZ
void cD3DStateCache::FUN_10938000()
{
    GDirect3DDevice8->SetTransform(0x100, &m_WorldMatrix);
    if (m_VertexShader != 2)
    {
        GDirect3DDevice8->SetVertexShader(2);
        m_VertexShader = 2;
    }
    if (m_PixelShader)
    {
        GDirect3DDevice8->SetPixelShader(0);
        m_PixelShader = 0;
    }
    GDirect3DDevice8->SetRenderState(0x34, 0);
    GDirect3DDevice8->SetRenderState(0x1b, 1);
    GDirect3DDevice8->SetRenderState(0x13, 5);
    GDirect3DDevice8->SetRenderState(0x14, 6);
    GDirect3DDevice8->SetRenderState(0xf, 0);
    GDirect3DDevice8->SetRenderState(0x7, 1);
    GDirect3DDevice8->SetRenderState(0xe, 1);
    GDirect3DDevice8->SetRenderState(0x17, 4);
    GDirect3DDevice8->SetRenderState(0x16, 3);
    GDirect3DDevice8->SetRenderState(0x9, 2);
    GDirect3DDevice8->SetRenderState(0x1a, 1);
    GDirect3DDevice8->SetRenderState(0x89, 0);
}
