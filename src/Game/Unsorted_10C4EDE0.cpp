// Game/Unsorted_10C4EDE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A68AE0.h"

class cIntArray
{
public:
    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10C4EDE0 : public Class_10A68AE0
{
public:
    Class_10C4EDE0* FUN_10c4ede0(const Class_10C4EDE0& Other);

    cIntArray Unknown0C;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    cIntArray Unknown24;
    int Unknown30;
    bool Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
};

// FUNCTION: 0x10C4EDE0 ?FUN_10c4ede0@Class_10C4EDE0@@QAEPAV1@ABV1@@Z
Class_10C4EDE0* Class_10C4EDE0::FUN_10c4ede0(const Class_10C4EDE0& Other)
{
    Class_10A68AE0::FUN_10a68ae0(Other);
    Unknown0C = Other.Unknown0C;
    Unknown18 = Other.Unknown18;
    Unknown1C = Other.Unknown1C;
    Unknown20 = Other.Unknown20;
    Unknown24 = Other.Unknown24;
    Unknown30 = Other.Unknown30;
    Unknown34 = Other.Unknown34;
    Unknown38 = Other.Unknown38;
    Unknown3C = Other.Unknown3C;
    Unknown40 = Other.Unknown40;
    Unknown44 = Other.Unknown44;
    return this;
}
