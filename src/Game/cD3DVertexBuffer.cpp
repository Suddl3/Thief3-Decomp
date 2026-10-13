// Game/cD3DVertexBuffer.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DVertexBuffer.h"
#include "Game/IDirect3DVertexBuffer8.h"
#include "Game/Struct_10932ED0.h"
#include "Game/Class_10E49D1C.h"
#include "Game/cD3DStateCache.h"

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x10934800 ?GetVertexCount@cD3DVertexBuffer@@UAEIXZ
unsigned int cD3DVertexBuffer::GetVertexCount()
{
    return m_Length / Unknown1c;
}

// FUNCTION: 0x10934810 ?LockVertices@cD3DVertexBuffer@@UAEHHHPAPAE@Z
int cD3DVertexBuffer::LockVertices(int A, int B, unsigned char** Out)
{
    if (!Out)
        return 0x80070057;
    *Out = 0;
    if (m_VertexBuffer == 0)
        return 0x80040721;
    return ((IDirect3DVertexBuffer8*)m_VertexBuffer)->Lock(m_Stride * A, m_Stride * B, Out, 0);
}

// FUNCTION: 0x10934860 ?BindStreamSource@cD3DVertexBuffer@@UAEHH@Z
int cD3DVertexBuffer::BindStreamSource(int A)
{
    if (m_VertexBuffer == 0)
        return 0x80040721;
    DAT_10f31be0->SetStreamSource(m_VertexBuffer, m_Stride);
    return 0;
}
