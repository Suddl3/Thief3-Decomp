// Game/Unsorted_10A35940_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091DEE0.h"
#include "Game/Struct_10A35940.h"

class Class_1091CA00;

extern Class_1091DEE0* DAT_10f2c928;

class Class_10A359D0
{
public:
    int FUN_10a358b0();
};

class Class_10A35EE0 : public Class_10A359D0
{
public:
    void FUN_10a35940();

    Struct_10A35940 Unknown00;
    Struct_10A35940 Unknown04;
    unsigned char Unknown08;
    unsigned char Unknown09;
    unsigned char Unknown0A;
    unsigned char Unknown0B;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C[7];
    int Unknown38;
    int Unknown3C;
    int Unknown40[17];
    Class_1091CA00* Unknown84;
    Class_1091CA00* Unknown88;
};

// FUNCTION: 0x10A35940 ?FUN_10a35940@Class_10A35EE0@@QAEXXZ
void Class_10A35EE0::FUN_10a35940()
{
    Struct_10A35940 Value;
    Value.Unknown00 = 0;
    Value.Unknown01 = 0;
    Value.Unknown02 = 0;
    Value.Unknown03 = 255;
    Unknown00 = Value;
    Value.Unknown00 = 0;
    Value.Unknown01 = 0;
    Value.Unknown02 = 0;
    Value.Unknown03 = 0;
    Unknown04 = Value;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown08 = 0;
    Unknown09 = 0;
    Unknown0B = 0;
    Unknown0A = 0;
    if (DAT_10f2c928)
    {
        Class_1091CA00* Ptr = DAT_10f2c928->FUN_1091dee0(2);
        Unknown84 = Ptr;
        Unknown88 = Ptr;
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
