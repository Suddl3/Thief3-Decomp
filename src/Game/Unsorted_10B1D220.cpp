// Game/Unsorted_10B1D220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10B1D220
{
public:
    Class_10B1D220* FUN_10b1d220(const Class_10B1D220& Other);

    FString Unknown00;
    FString Unknown0C;
    FString Unknown18;
    BITFIELD Unknown24 : 1;
    BITFIELD Unknown24Bit1 : 1;
    FString Unknown28;
    FString Unknown34;
};

// FUNCTION: 0x10B1D220 ?FUN_10b1d220@Class_10B1D220@@QAEPAV1@ABV1@@Z
Class_10B1D220* Class_10B1D220::FUN_10b1d220(const Class_10B1D220& Other)
{
    Unknown00 = Other.Unknown00;
    Unknown0C = Other.Unknown0C;
    Unknown18 = Other.Unknown18;
    Unknown24 = Other.Unknown24;
    Unknown24Bit1 = Other.Unknown24Bit1;
    Unknown28 = Other.Unknown28;
    Unknown34 = Other.Unknown34;
    return this;
}
