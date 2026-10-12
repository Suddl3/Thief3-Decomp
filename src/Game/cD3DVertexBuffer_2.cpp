// Game/cD3DVertexBuffer_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/cD3DVertexBuffer.h"

extern cD3DStateCache* DAT_10f31be0;

// FUNCTION: 0x10934860 ?BindStreamSource@cD3DVertexBuffer@@UAEHH@Z
int cD3DVertexBuffer::BindStreamSource(int A)
{
    if (m_VertexBuffer == 0)
        return 0x80040721;
    DAT_10f31be0->SetStreamSource(m_VertexBuffer, m_Stride);
    return 0;
}
