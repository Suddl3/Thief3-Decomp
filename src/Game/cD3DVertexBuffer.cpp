// Game/cD3DVertexBuffer.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DVertexBuffer.h"
#include "Game/IDirect3DVertexBuffer8.h"

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
