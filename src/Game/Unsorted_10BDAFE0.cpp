// Game/Unsorted_10BDAFE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AAF570_Result.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BDAFE0.h"
#include "Game/Class_10DBD510.h"

class Class_10AA82D0 : public Class_10AAF570
{
public:
    int FUN_10aa82d0();
};

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BDB050 : public Class_10BC4160
{
public:
    bool FUN_10bdb050();
};

float appFrand();

double FUN_10c00480();

struct Struct_10BDAFE0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BDAFE0 ?FUN_10bdafe0@Class_10BDAFE0@@QAEXXZ
void Class_10BDAFE0::FUN_10bdafe0()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x10056e)->FUN_10bbdc80();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x10056f)->FUN_10bbdc80();
    Unknown70 = FUN_10c00480() + (Max - Min) * appFrand() + Min;
}

// FUNCTION: 0x10BDB050 ?FUN_10bdb050@Class_10BDB050@@QAE_NXZ
bool Class_10BDB050::FUN_10bdb050()
{
    if (FUN_10bc4160() && FUN_10bc4160()->FUN_10aa82d0())
        return ((Class_10AAF570_Result*)FUN_10bc4160()->FUN_10aaf570())->Virtual46();
    return false;
}
