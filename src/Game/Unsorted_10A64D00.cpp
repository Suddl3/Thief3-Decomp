// Game/Unsorted_10A64D00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A64D00.h"
#include "Game/Class_10A64D50.h"

// FUNCTION: 0x10A64D00 ?Init@Class_10A64D00@@QAEXHHHH_NH@Z
void Class_10A64D00::Init(int A, int B, int C, int D, bool E, int F)
{
    Unknown10 = C;
    Unknown14 = D;
    Unknown00 = A;
    Unknown04 = B;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown1C = F;
    Unknown20 = E;
    Unknown18 = C;
    Unknown22 = false;
    Unknown21 = false;
}

// FUNCTION: 0x10A64D50 ?Reset@Class_10A64D50@@QAEXXZ
void Class_10A64D50::Reset()
{
    Unknown08 = 0;
    Unknown18 = Unknown10;
    Unknown0C = 0;
    Unknown21 = false;
    Unknown22 = false;
}
