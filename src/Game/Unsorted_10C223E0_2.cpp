// Game/Unsorted_10C223E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAEC80.h"
#include "Game/Struct_10C22BA0.h"

struct Struct_10C22AD0
{
    char Unknown00[0x24];
};

class Class_10C22A70
{
public:
    void CopyFrom(const Class_10C22A70& Other);

    char Unknown00[0xC];
};

class Class_10C22BA0
{
public:
    void CopyFrom(const Class_10C22BA0& Other);

    Struct_10C22BA0 Unknown00;
    Class_10C22A70 Unknown0C;
    char Unknown18[0x5A];
};

// FUNCTION: 0x10C22AD0 ?CopyFrom@Class_10BAEC80@@QAEXABV1@@Z
void Class_10BAEC80::CopyFrom(const Class_10BAEC80& Other)
{
    FUN_10a211e0(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}

// FUNCTION: 0x10C22BA0 ?CopyFrom@Class_10C22BA0@@QAEXABV1@@Z
void Class_10C22BA0::CopyFrom(const Class_10C22BA0& Other)
{
    Unknown00 = Other.Unknown00;
    Unknown0C.CopyFrom(Other.Unknown0C);
    for (int i = 0; i < 0x5A; i++)
        Unknown18[i] = Other.Unknown18[i];
}
