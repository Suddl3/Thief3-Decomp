// Game/Unsorted_1094E3E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1094E3A0.h"
#include "Game/Class_10F2C744.h"
#include "Game/Elem_1094E3A0.h"

Class_10905A90_Member* GetAllocator();

extern Class_10F2C744* DAT_10f2c744;

// One vertex-buffer object: its Virtual1 releases it.
class Class_1094E3E0_Unknown0E8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// FUNCTION: 0x1094E3E0 ?CreateVertex@Class_1094E3A0@@QAE_NHH@Z
bool Class_1094E3A0::CreateVertex(int Index, int Value)
{
    m_Elements[Index].Unknown00 = Value;
    if (Index == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        if (m_VertexBuffer0)
        {
            m_VertexBuffer0->Virtual1();
            m_VertexBuffer0 = 0;
        }
        if (m_VertexBuffer1)
        {
            m_VertexBuffer1->Virtual1();
            m_VertexBuffer1 = 0;
        }
        int Result0 = DAT_10f2c744->Virtual3(0, 0x20, 0, "BlendMesh::m_Vertex", &m_VertexBuffer0);
        int Result1 = DAT_10f2c744->Virtual3(1, 0x20, 0, "BlendMesh::m_Vertex", &m_VertexBuffer1);
        GetAllocator()->Virtual9();
        if (Result0 < 0 || Result1 < 0)
        {
            if (m_VertexBuffer0)
            {
                m_VertexBuffer0->Virtual1();
                m_VertexBuffer0 = 0;
            }
            if (m_VertexBuffer1)
            {
                m_VertexBuffer1->Virtual1();
                m_VertexBuffer1 = 0;
            }
            return false;
        }
    }
    return true;
}
