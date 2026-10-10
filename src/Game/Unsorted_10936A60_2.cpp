// Game/Unsorted_10936A60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109373D0.h"
#include "Game/IDirect3DDevice8.h"

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x109373D0 ?FUN_109373d0@Class_109373D0@@QAEXK@Z
void Class_109373D0::FUN_109373d0(unsigned long Shader)
{
    if (Shader && Unknown6B0 != Shader)
    {
        GDirect3DDevice8->SetVertexShader(Shader);
        Unknown6B0 = Shader;
    }
}
