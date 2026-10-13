// Game/Unsorted_10957D30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10958A10.h"
#include "Game/Class_1095A1A0.h"
#include "Game/Class_1095A490.h"
#include "Game/Class_1095A760.h"
#include "Game/Class_1095A7A0.h"

void* operator new(unsigned int A, const int& B, int C, int D, int E, int F);

// FUNCTION: 0x10958A10 ?Init@Class_10958A10@@QAEPAV1@H@Z
Class_10958A10* Class_10958A10::Init(int A)
{
    m_Count = A;
    Unknown0C = A * 3;
    Unknown14 = 0;
    Unknown18 = 0;
    int Tag = 0;
    Unknown00 = operator new(Unknown0C * 12, Tag, 0, 0, 0, 0);
    Tag = 0;
    Unknown08 = operator new((A + 1) * 16, Tag, 0, 0, 0, 0);
    Unknown04 = (void*)(((unsigned int)Unknown08 + 15) & 0xfffffff0);
    return this;
}

// FUNCTION: 0x1095A1A0 ?Free@Class_1095A1A0@@QAEXXZ
void Class_1095A1A0::Free()
{
    if (Unknown08)
        ::operator delete(Unknown08);
    Unknown08 = 0;
}

// FUNCTION: 0x1095A490 ?SetMatrix@Class_1095A490@@QAEPAV1@MMMMMMMMMMMMMMMM@Z
Class_1095A490* Class_1095A490::SetMatrix(float A, float B, float C, float D,
                                             float E, float F, float G, float H,
                                             float I, float J, float K, float L,
                                             float M, float N, float O, float P)
{
    m_Matrix[0][0] = A;
    m_Matrix[0][1] = B;
    m_Matrix[0][2] = C;
    m_Matrix[0][3] = D;
    m_Matrix[1][0] = E;
    m_Matrix[1][1] = F;
    m_Matrix[1][2] = G;
    m_Matrix[1][3] = H;
    m_Matrix[2][0] = I;
    m_Matrix[2][1] = J;
    m_Matrix[2][2] = K;
    m_Matrix[2][3] = L;
    m_Matrix[3][0] = M;
    m_Matrix[3][1] = N;
    m_Matrix[3][2] = O;
    m_Matrix[3][3] = P;
    return this;
}

// FUNCTION: 0x1095A7A0 ??0Class_1095A7A0@@QAE@XZ
Class_1095A7A0::Class_1095A7A0()
{
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown02 = 0;
}
