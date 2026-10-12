// Game/Unsorted_10934A80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109343B0.h"
#include "Game/Class_10934D10.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DVertexBuffer8;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10934D10 ?CreateDynamicVertexBuffer@Class_10934D10@@QAEJXZ
long Class_10934D10::CreateDynamicVertexBuffer()
{
    GetAllocator()->Virtual8(0, 0);
    long Result = m_Device->CreateVertexBuffer(m_Length, 0x208, 0, 0, &m_VertexBuffer);
    GetAllocator()->Virtual9();
    Unknown20.FUN_109343b0(&m_VertexBuffer);
    return Result;
}
