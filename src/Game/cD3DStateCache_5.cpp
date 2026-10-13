// Game/cD3DStateCache_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10924210.h"
#include "Game/Struct_109371D0.h"

class IDirect3DBaseTexture8;

struct Info_10952690;

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache
{
public:
    void SetStreamSource(int A, int B);
    void SetIndices(int A, int B);
    void ClearTextures();
    void FUN_10937280(int A, Info_10952690* Info);
    void SetVertexShaderConstantScalar(int p1, int p2);
    void SetPixelShaderConstantScalar(int Index, int Value);
    void FUN_10936bf0(int A);
    void FUN_10937140(int Index, float* Value);

    char Pad01[0xb];
    char Pad81F[0x1];
    int m_VertexBuffer;
    int m_VertexStride;
    int m_IndexBuffer;
    int m_BaseVertexIndex;
    IDirect3DBaseTexture8* m_Textures[4];
    Struct_109371D0 Unknown2C[104];
    char Pad6AC[0x4];
    int Unknown6B0;
    char Pad6B4[0x148];
    Struct_10924210 Unknown7FC;
};

// FUNCTION: 0x10937140 ?FUN_10937140@cD3DStateCache@@QAEXHPAM@Z
void cD3DStateCache::FUN_10937140(int Index, float* Value)
{
    if (Unknown6B0)
    {
        Struct_109371D0* Entry = &Unknown2C[Index];
        if (Entry->Unknown00 != Value[0] || Entry->Unknown04 != Value[1]
            || Entry->Unknown08 != Value[2] || Entry->Unknown0C != Value[3])
        {
            GDirect3DDevice8->SetVertexShaderConstant(Index, Value, 1);
            Entry->Unknown00 = Value[0];
            Entry->Unknown04 = Value[1];
            Entry->Unknown08 = Value[2];
            Entry->Unknown0C = Value[3];
        }
    }
}
