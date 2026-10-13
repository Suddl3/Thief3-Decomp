// Game/Unsorted_10B19140_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10C05A80.h"

int WrapAngle(int Value);

// Game/Struct_10B193E0.h copied whole: Unknown400 and Unknown404 are ints here, and Unknown40C a float.
struct Struct_10B193E0
{
public:
    char Pad00[0x38];
    Struct_10C05A80 Unknown38;
    char Pad44[0x3BC];
    int Unknown400;
    int Unknown404;
    char Pad408[0x4];
    float Unknown40C;
    float Unknown410;
    char Pad414[0x40];
    float Unknown454;
};

// Game/Class_10B193E0.h copied whole: Unknown18 is a bool, and FUN_10b18e90 is a method.
class Class_10B193E0
{
public:
    void FUN_10b19260(Struct_10B193E0* Object, float Value);
    void FUN_10b19140(int* Out, Struct_10B193E0* Object);
    void FUN_10b193e0(Struct_10B193E0* Object);
    void FUN_10b18e90(Struct_10B193E0* Object, float Value);

    char Unknown00[0x18];
    bool Unknown18;
    char Unknown19[0x17];
    int Unknown30;
};

// FUNCTION: 0x10B19260 ?FUN_10b19260@Class_10B193E0@@QAEXPAUStruct_10B193E0@@M@Z
void Class_10B193E0::FUN_10b19260(Struct_10B193E0* Object, float Value)
{
    Object->Unknown404 = WrapAngle(Object->Unknown404 = (int)(Object->Unknown404 + Object->Unknown410));
    if (Unknown18)
        FUN_10b18e90(Object, Value);
    else
        Object->Unknown400 = (int)(Object->Unknown400 + Object->Unknown40C);
    int Key[3];
    FUN_10b19140(Key, Object);
    if (Object->Unknown400 > 0x2cec)
        Object->Unknown400 = 0x2cec;
    if (Object->Unknown400 < -Key[0])
        Object->Unknown400 = -Key[0];
}
