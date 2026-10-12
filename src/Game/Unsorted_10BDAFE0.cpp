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
    int GetLinkedObject();
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

double GetTimeSeconds();

struct Struct_10BDAFE0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BDAFE0 ?StartRandomTimer@Class_10BDAFE0@@QAEXXZ
void Class_10BDAFE0::StartRandomTimer()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x10056e)->FUN_10bbdc80();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x10056f)->FUN_10bbdc80();
    Unknown70 = GetTimeSeconds() + (Max - Min) * appFrand() + Min;
}

// FUNCTION: 0x10BDB050 ?FUN_10bdb050@Class_10BDB050@@QAE_NXZ
bool Class_10BDB050::FUN_10bdb050()
{
    if (FUN_10bc4160() && FUN_10bc4160()->GetLinkedObject())
        return ((Class_10AAF570_Result*)FUN_10bc4160()->GetLinkType())->Virtual46();
    return false;
}
