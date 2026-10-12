// Game/Unsorted_10936A60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109373D0.h"
#include "Game/IDirect3DDevice8.h"

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x109373D0 ?SetVertexShader@Class_109373D0@@QAEXK@Z
void Class_109373D0::SetVertexShader(unsigned long Shader)
{
    if (Shader && m_VertexShader != Shader)
    {
        GDirect3DDevice8->SetVertexShader(Shader);
        m_VertexShader = Shader;
    }
}
