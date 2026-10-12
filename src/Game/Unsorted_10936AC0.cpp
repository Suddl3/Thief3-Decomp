// Game/Unsorted_10936AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

class IDirect3DVertexBuffer8;

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache
{
public:
    void SetStreamSource(int VertexBuffer, int Stride);

    char Unknown00[0xC];
    int m_VertexBuffer;
    int m_VertexStride;
};

// FUNCTION: 0x10936AC0 ?SetStreamSource@cD3DStateCache@@QAEXHH@Z
void cD3DStateCache::SetStreamSource(int VertexBuffer, int Stride)
{
    if (VertexBuffer != 0)
    {
        if (Stride != 0)
        {
            if (VertexBuffer != m_VertexBuffer || Stride != m_VertexStride)
            {
                GDirect3DDevice8->SetStreamSource(0, (IDirect3DVertexBuffer8*)VertexBuffer, Stride);
                m_VertexBuffer = VertexBuffer;
                m_VertexStride = Stride;
            }
        }
        else
        {
            m_VertexBuffer = 0;
            m_VertexStride = 0;
        }
    }
    else
    {
        m_VertexBuffer = 0;
        m_VertexStride = 0;
    }
}
