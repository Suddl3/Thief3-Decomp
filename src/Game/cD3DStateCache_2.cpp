// Game/cD3DStateCache_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

class IDirect3DIndexBuffer8;

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache
{
public:
    void SetIndices(int Indices, int BaseVertexIndex);

    char Unknown00[0x14];
    int m_IndexBuffer;
    int m_BaseVertexIndex;
};

// FUNCTION: 0x10936B20 ?SetIndices@cD3DStateCache@@QAEXHH@Z
void cD3DStateCache::SetIndices(int Indices, int BaseVertexIndex)
{
    if (Indices)
    {
        if (Indices != m_IndexBuffer || BaseVertexIndex != m_BaseVertexIndex)
        {
            GDirect3DDevice8->SetIndices((IDirect3DIndexBuffer8*)Indices, BaseVertexIndex);
            m_IndexBuffer = Indices;
            m_BaseVertexIndex = BaseVertexIndex;
        }
    }
    else
    {
        m_IndexBuffer = 0;
    }
}
