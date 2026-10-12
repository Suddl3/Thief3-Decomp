// Game/Unsorted_1095A510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1095A660.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10919190.h"
#include "Game/Class_1095A760.h"
#include "Game/Class_10905A90_Member.h"

extern IDirect3DDevice8* GDirect3DDevice8;

void SetWorldTransform(Struct_10919190* Matrix);

void SetStreamAndIndices(int A, int B, int C);

Class_10905A90_Member* GetAllocator();

struct Struct_1095A760_Element
{
    char Unknown00[0x5C];
};

// FUNCTION: 0x1095A5A0 ?SetCount@Class_1095A760@@QAEXH@Z
void Class_1095A760::SetCount(int NewCount)
{
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(Struct_1095A760_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Struct_1095A760_Element), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Struct_1095A760_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Elements);
            m_Elements = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Elements = GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Struct_1095A760_Element), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Struct_1095A760_Element);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x1095A660 ?Draw@Class_1095A660@@QAEXXZ
void Class_1095A660::Draw()
{
    Struct_10919190 Identity =
    {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f
    };
    SetWorldTransform(&Identity);
    SetStreamAndIndices(Unknown04, Unknown00, 0);
    GDirect3DDevice8->DrawPrimitive(D3DPT_TRIANGLEFAN, 0, m_VertexCount - 2);
}
