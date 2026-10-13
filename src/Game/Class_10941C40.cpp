// Game/Class_10941C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1091A4F0.h"
#include "Game/Class_109401B0.h"
#include "Game/Class_10941570.h"
#include "Game/Class_109418E0.h"
#include "Game/Class_10941C40.h"
#include "Game/D3DXMATRIX.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_10941480.h"
#include "Game/Struct_10941980.h"
#include "Game/Class_10941E90.h"
#include "Game/Class_10941F40.h"

// FUNCTION: 0x10941980 ?AddEntry@Class_10941C40@@QAEXFFF@Z
void Class_10941C40::AddEntry(short A, short B, short C)
{
    Class_109418E0* Item = m_Item;
    Struct_10941980 Value;
    Value.Unknown00 = A;
    Value.Unknown02 = B;
    Value.Unknown04 = C;
    Class_1091A4F0* Array = &Item->Unknown2C;
    Item->Unknown06 = 0;
    int Index = Array->Unknown00;
    Array->FUN_1091a4f0(Index + 1);
    Array->Unknown08[Index] = Value;
}

// FUNCTION: 0x10941C70 ?FUN_10941c70@Class_10941C40@@QAEXPAXHHH@Z
void Class_10941C40::FUN_10941c70(void* A, int B, int C, int D)
{
    m_Value = B;
    if (m_Item == 0)
        FUN_10941b10(0);
    int Value = m_Value;
    Class_109418E0* Item = m_Item;
    Item->Unknown06 = 0;
    Item->Unknown38 = Value;
    Item->FUN_109418e0(A, C, D);
}

// FUNCTION: 0x10941DB0 ?FUN_10941db0@Class_10941C40@@QAEXHHHHHHHHHHHHH@Z
void Class_10941C40::FUN_10941db0(int A, int B, int C, int D, int E, int F, int G, int H, int I, int J, int K,
                                  int L, int M)
{
    FUN_10941b10(A);
    FUN_10941cb0(B, C, D, E, F, G, H, I, J, K, H, I);
}
