// Game/Unsorted_1091CD10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1091AA10.h"
#include "Game/Class_1091E1A0.h"
#include "Game/Class_1091E1F0.h"
#include "Game/Class_1091E2E0.h"
#include "Game/Class_1091DEE0.h"
#include "Game/cString.h"
#include "Game/Class_1091D390.h"

extern float DAT_10e49684;

class Class_1091CA00;

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_1091D390_Unknown24
{
public:
    Class_1091D390_Unknown24()
    {
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown18 = -1;
        Unknown14 = 0;
        Unknown1C = 0;
        Unknown00 = 0;
    }

    char Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x1091D390 ?Draw@Class_1091D390@@QAE_NHHHIHHH@Z
bool Class_1091D390::Draw(int A, int B, int C, unsigned int D, int E, int F, int G)
{
    if (Unknown2C == 0)
        return false;
    if ((D & 0xff000000) == 0)
        return true;
    if (Unknown24 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Unknown24 = new(0, 0, 0, 0, 0) Class_1091D390_Unknown24;
        GetAllocator()->Virtual9();
    }
    return FUN_1091a690(Unknown24, C, A, B, D, E, F, G);
}

// FUNCTION: 0x1091DEE0 ?GetFont@Class_1091DEE0@@QAEPAVClass_1091CA00@@H@Z
Class_1091CA00* Class_1091DEE0::GetFont(int A)
{
    Class_1091CA00* Result = FUN_1091dc40(GetFontName(A));
    return Result;
}

// FUNCTION: 0x1091E1A0 ?Normalize@Class_1091E1A0@@QAEXXZ
void Class_1091E1A0::Normalize()
{
    float Length = sqrtf(m_x * m_x + m_y * m_y + m_z * m_z);
    if (Length < 0.0001f)
        return;
    float Scale = DAT_10e49684 / Length;
    m_x *= Scale;
    m_y *= Scale;
    m_z *= Scale;
}

// FUNCTION: 0x1091E1F0 ?Set@Class_1091E1F0@@QAEPAV1@HHHHHHHHH@Z
Class_1091E1F0* Class_1091E1F0::Set(int A, int B, int C, int D, int E, int F, int G, int H, int I)
{
    Unknown00 = A;
    Unknown04 = B;
    Unknown08 = C;
    Unknown0C = D;
    Unknown10 = E;
    Unknown14 = F;
    Unknown18 = G;
    Unknown1C = H;
    Unknown20 = I;
    return this;
}

// FUNCTION: 0x1091E2E0 ?Reset@Class_1091E2E0@@QAEXXZ
void Class_1091E2E0::Reset()
{
    m_Matrix[0][0] = m_Matrix[1][1] = m_Matrix[2][2] = m_Matrix[3][3] = 1.0f;
    m_Matrix[0][3] = m_Matrix[1][3] = m_Matrix[2][3] = 0.0f;
    m_Matrix[0][1] = m_Matrix[0][2] = m_Matrix[1][0] = 0.0f;
    m_Matrix[3][0] = m_Matrix[3][1] = m_Matrix[3][2] = 0.0f;
    m_Matrix[1][2] = m_Matrix[2][0] = m_Matrix[2][1] = 0.0f;
    Unknown44 = 0;
    Unknown48 = true;
    Unknown49 = false;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown5C = -1;
    Unknown60 = 0;
    Unknown58 = 0;
}
