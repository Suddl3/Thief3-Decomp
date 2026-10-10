// Game/Class_10E6D8CC_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10E6D8CC.h"

// FUNCTION: 0x10AA67D0 ?FUN_10aa67d0@Class_10E6D8CC@@UAE_NXZ
bool Class_10E6D8CC::FUN_10aa67d0()
{
    Class_10BFBD70* Array = &Unknown04;
    int Last = Array->Unknown00 - 1;
    int First = Array->Unknown08[0];
    Array->Unknown08[0] = Array->Unknown08[Last];
    Array->Unknown08[Last] = First;
    Array->FUN_10bfbd70(Array->Unknown00 - 1);
    return Array->Unknown00 == 0;
}
