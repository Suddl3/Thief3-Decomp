// Game/Unsorted_10953AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10953730.h"
#include "Game/Class_10953AC0.h"
#include "Game/Class_10953C20.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10953B60.h"

Class_10905A90_Member* GetAllocator();

class Class_10953B60;

// FUNCTION: 0x10953BE0 ?Free@Class_10953AC0@@QAEXXZ
void Class_10953AC0::Free()
{
    Resize(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_Capacity = 0;
    }
}

// FUNCTION: 0x10953C20 ?Init@Class_10953C20@@QAEPAV1@H_N@Z
Class_10953C20* Class_10953C20::Init(int A, bool B)
{
    Unknown40 = 0.0f;
    Unknown44 = 0.0f;
    Unknown48 = 0.0f;
    Unknown54 = 0.0f;
    Unknown58 = 0.0f;
    Unknown5C = 0.0f;
    Unknown50 = A;
    m_Matrix[0][0] = m_Matrix[1][1] = m_Matrix[2][2] = m_Matrix[3][3] = 1.0f;
    m_Matrix[0][3] = m_Matrix[1][3] = m_Matrix[2][3] = 0.0f;
    m_Matrix[0][1] = m_Matrix[0][2] = m_Matrix[1][0] = 0.0f;
    m_Matrix[3][0] = m_Matrix[3][1] = m_Matrix[3][2] = 0.0f;
    m_Matrix[1][2] = m_Matrix[2][0] = m_Matrix[2][1] = 0.0f;
    Unknown60 = false;
    Unknown61 = true;
    Unknown62 = B;
    return this;
}
