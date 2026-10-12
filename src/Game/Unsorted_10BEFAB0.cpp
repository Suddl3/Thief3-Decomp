// Game/Unsorted_10BEFAB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BEFAB0.h"
#include "Game/Class_10BF02A0.h"
#include "Game/Class_10DBD510.h"

float appFrand();

struct Struct_10BEFAB0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BEFAB0 ?GetRandomInRange@Class_10BEFAB0@@QAEMXZ
float Class_10BEFAB0::GetRandomInRange()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x1007e9)->FUN_10bbdc80();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x1007ea)->FUN_10bbdc80();
    return Min + (Max - Min) * appFrand();
}

// FUNCTION: 0x10BF02A0 ?GetTotal@Class_10BF02A0@@QAEMXZ
float Class_10BF02A0::GetTotal()
{
    float Sum = 0.0f;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
            Sum += Unknown154[i * 10 + j];
    }
    return Sum;
}
