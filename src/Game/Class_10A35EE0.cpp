// Game/Class_10A35EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1091DEE0.h"
#include "Game/Struct_10A35940.h"
#include "Game/Class_10A359D0.h"

class Class_1091CA00;

extern Class_1091DEE0* DAT_10f2c928;

class Class_10A35EE0 : public Class_10A359D0
{
public:
    void Reset();
};

// FUNCTION: 0x10A35940 ?Reset@Class_10A35EE0@@QAEXXZ
void Class_10A35EE0::Reset()
{
    Struct_10A35940 Value;
    Value.Unknown00 = 0;
    Value.Unknown01 = 0;
    Value.Unknown02 = 0;
    Value.Unknown03 = 255;
    *(Struct_10A35940*)&Unknown00 = Value;
    Value.Unknown00 = 0;
    Value.Unknown01 = 0;
    Value.Unknown02 = 0;
    Value.Unknown03 = 0;
    *(Struct_10A35940*)&Unknown00[4] = Value;
    *(int*)&Pad14[0] = 0;
    *(int*)&Pad14[4] = 0;
    Unknown00[8] = 0;
    Unknown00[9] = 0;
    Unknown00[0xB] = 0;
    Unknown00[0xA] = 0;
    if (DAT_10f2c928)
    {
        Class_1091CA00* Ptr = DAT_10f2c928->GetFont(2);
        Unknown84 = (Class_10919CA0*)Ptr;
        Unknown88 = (Class_10919CA0*)Ptr;
        int Result = FUN_10a358b0();
        Unknown3C = Result;
        Unknown38 = Result;
    }
    else
    {
        Unknown84 = 0;
        Unknown88 = 0;
        Unknown3C = 1;
        Unknown38 = 1;
    }
}
