// Game/Unsorted_10953AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10953730.h"
#include "Game/Class_10953AC0.h"
#include "Game/Class_10953C20.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10953B60.h"

struct Item_10953AC0;

Class_10905A90_Member* GetAllocator();

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10953B60;

class Class_1091E400
{
public:
    char Unknown00[4];
    Class_10953730 Unknown04;
};

extern Class_1091E400* DAT_10f2c8c0;

class Class_10953E40_Member;

extern D3DXMATRIX DAT_10f341b0;

extern unsigned int DAT_10f341f0;

// FUNCTION: 0x10953B60 ?ApplyWorldMatrix@Class_10953B60@@QAEXXZ
void Class_10953B60::ApplyWorldMatrix()
{
    if (Unknown5C)
    {
        if (Unknown61)
        {
            if (!(DAT_10f341f0 & 1))
                DAT_10f341f0 |= 1;
            D3DXMATRIX Matrix;
            D3DXMATRIX* Src = DAT_10f2c8c0->Unknown04.FUN_10953730(&Matrix, this);
            DAT_10f341b0 = *Src;
            GDirect3DDevice8->SetTransform(0x100, &DAT_10f341b0);
        }
        FUN_109538b0();
    }
}

// FUNCTION: 0x10953BE0 ?Free@Class_10953AC0@@QAEXXZ
void Class_10953AC0::Free()
{
    FUN_10953ac0(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_Capacity = 0;
    }
}

// FUNCTION: 0x10953C20 ?FUN_10953c20@Class_10953C20@@QAEPAV1@H_N@Z
Class_10953C20* Class_10953C20::FUN_10953c20(int A, bool B)
{
    Unknown40 = 0.0f;
    Unknown44 = 0.0f;
    Unknown48 = 0.0f;
    Unknown54 = 0.0f;
    Unknown58 = 0.0f;
    Unknown5C = 0.0f;
    Unknown50 = A;
    Unknown00[0][0] = Unknown00[1][1] = Unknown00[2][2] = Unknown00[3][3] = 1.0f;
    Unknown00[0][3] = Unknown00[1][3] = Unknown00[2][3] = 0.0f;
    Unknown00[0][1] = Unknown00[0][2] = Unknown00[1][0] = 0.0f;
    Unknown00[3][0] = Unknown00[3][1] = Unknown00[3][2] = 0.0f;
    Unknown00[1][2] = Unknown00[2][0] = Unknown00[2][1] = 0.0f;
    Unknown60 = false;
    Unknown61 = true;
    Unknown62 = B;
    return this;
}
