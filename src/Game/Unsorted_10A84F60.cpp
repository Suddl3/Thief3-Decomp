// Game/Unsorted_10A84F60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3F110.h"
#include "Game/Class_10A84FD0.h"

Class_10C3F110* FUN_10c3fb10();

// FUNCTION: 0x10A84FD0 ?FUN_10a84fd0@Class_10A84FD0@@QAEXXZ
void Class_10A84FD0::FUN_10a84fd0()
{
    int A = FUN_10c3fb10()->FUN_10c3f110(0);
    Unknown3C = A * 0.01f;
    int B = FUN_10c3fb10()->FUN_10c3f110(1);
    Unknown40 = B * 0.01f;
    int C = FUN_10c3fb10()->FUN_10c3f110(2);
    Unknown44 = C * 0.01f;
    int D = FUN_10c3fb10()->FUN_10c3f110(3);
    Unknown48 = D * 0.01f;
    FUN_10c3fb10()->FUN_10c3f120(0, Unknown3C - m_Offset);
    FUN_10c3fb10()->FUN_10c3f120(1, Unknown40 - m_Offset);
    FUN_10c3fb10()->FUN_10c3f120(2, Unknown44 - m_Offset);
    FUN_10c3fb10()->FUN_10c3f120(3, Unknown48 - m_Offset);
}
