// Game/Unsorted_10BE98C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"

float appFrand();

struct Struct_10BE99E0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10E970F0
{
public:
    void FUN_10be99e0();

    char Unknown00[4];
    Struct_10BE99E0* Unknown04;
    char Unknown08[0x60];
    float Unknown68;
};

// FUNCTION: 0x10BE99E0 ?FUN_10be99e0@Class_10E970F0@@QAEXXZ
void Class_10E970F0::FUN_10be99e0()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x1005e6)->FUN_10bbdb40();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x1005e7)->FUN_10bbdb40();
    Unknown68 = Min + (Max - Min) * appFrand();
}
