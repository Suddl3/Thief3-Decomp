// Game/Unsorted_109410B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109413A0.h"
#include "Game/IDirect3DVertexBuffer8.h"

Class_10905A90_Member* GetAllocator();

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10efefbc;

// FUNCTION: 0x109413A0 ?EnsureVertexBuffers@Class_109413A0@@QAE_NXZ
bool Class_109413A0::EnsureVertexBuffers()
{
    if (!(m_VertexBuffers[0] && m_VertexBuffers[1] && m_BufferSize >= m_VertexCount * 28))
    {
        Unknown04 = 0;
        Unknown05 = 0;
        Unknown06 = 0;
        for (int i = 0; i < 2; i++)
        {
            if (m_VertexBuffers[i])
            {
                m_VertexBuffers[i]->Virtual2();
                m_VertexBuffers[i] = 0;
            }
        }
        if (m_VertexCount > 0)
        {
            for (int i = 0; i < 2; i++)
            {
                GetAllocator()->Virtual8(0, 0);
                int Size = m_VertexCount * 28;
                long Result = GDirect3DDevice8->CreateVertexBuffer(Size, 8, 0x144, DAT_10efefbc, &m_VertexBuffers[i]);
                GetAllocator()->Virtual9();
                if (Result < 0)
                {
                    m_VertexBuffers[i] = 0;
                    m_BufferSize = 0;
                    return false;
                }
            }
        }
        m_BufferSize = m_VertexCount * 28;
    }
    return true;
}
