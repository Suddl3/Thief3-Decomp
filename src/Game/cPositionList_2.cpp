// Game/cPositionList_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10C37D30.h"
#include "Game/Struct_10C39220.h"
#include "Game/cPositionList.h"

class Class_10C39D90_Unknown48;

void FUN_10c37cb0(void* A, Struct_10C05A80* B, int C, int D, int E, bool F);

bool FUN_10c37d30(void* A, int B, int C, float D, float E, int F, int G, Struct_10C37D30 H);

// FUNCTION: 0x10C39920 ?FUN_10c39920@cPositionList@@QAEX_N0@Z
void cPositionList::FUN_10c39920(bool A, bool B)
{
    Struct_10C05A80 Pos;
    if (!GetCurrent((int)&Pos))
    {
        FUN_10c37d30(m_Mover, Unknown84, 1, -1.0f, 1.0f, 1, 1, Struct_10C37D30());
        return;
    }
    if (B)
        B = true;
    else if (A && (Unknown68 || FUN_10c38810()))
        B = true;
    else
        B = false;
    FUN_10c37cb0(m_Mover, &Pos, 0x15, Unknown80, 1, B);
}
