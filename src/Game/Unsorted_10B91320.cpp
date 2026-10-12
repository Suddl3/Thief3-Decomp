// Game/Unsorted_10B91320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B912E0.h"
#include "Game/Class_10B91800.h"

class Class_10DAAF90
{
public:
    void FUN_10daaf90(const Class_10DAAF90* Other);

    char Unknown00[0x10];
};

// FUNCTION: 0x10B91320 ?CopyFrom@Class_10B91800@@QAEXH@Z
void Class_10B91800::CopyFrom(int A)
{
    Class_10B91800* Other = (Class_10B91800*)A;
    FUN_10b90980(Other->Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i].FUN_10daaf90(&Other->Unknown08[i]);
}
