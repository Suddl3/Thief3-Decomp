// Game/Unsorted_10C4F490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A68AE0.h"

struct Struct_10C4F870
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Item_10C4F870
{
    int Unknown00;
    Struct_10C4F870 Unknown04;
    float Unknown10;
};

class Class_10C4EDA0
{
public:
    void FUN_10a550b0(int Count);

    int Unknown00;
    int Unknown04;
    Item_10C4F870* Unknown08;
};

class Class_10C4F870
{
public:
    int FUN_10c4f870(const Struct_10C4F870& A, float B);

    char Unknown00[0x34];
    int Unknown34;
    Class_10C4EDA0 Unknown38;
};

class Class_10BFBD70
{
public:
    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

class Class_10C4F7E0 : public Class_10A68AE0
{
public:
    Class_10C4F7E0* FUN_10c4f7e0(const Class_10C4F7E0& Other);

    Class_10BFBD70 Unknown0C;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    Class_10BFBD70 Unknown24;
    int Unknown30;
    bool Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
};

// FUNCTION: 0x10C4F7E0 ?FUN_10c4f7e0@Class_10C4F7E0@@QAEPAV1@ABV1@@Z
Class_10C4F7E0* Class_10C4F7E0::FUN_10c4f7e0(const Class_10C4F7E0& Other)
{
    Unknown04 = 0;
    Unknown00 = 0;
    Unknown08 = 0;
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

// FUNCTION: 0x10C4F870 ?FUN_10c4f870@Class_10C4F870@@QAEHABUStruct_10C4F870@@M@Z
int Class_10C4F870::FUN_10c4f870(const Struct_10C4F870& A, float B)
{
    Item_10C4F870 Item;
    Item.Unknown00 = Unknown34++;
    Item.Unknown04 = A;
    Item.Unknown10 = B;
    Class_10C4EDA0* Array = &Unknown38;
    int Index = Array->Unknown00;
    Array->FUN_10a550b0(Index + 1);
    Array->Unknown08[Index] = Item;
    return Item.Unknown00;
}
