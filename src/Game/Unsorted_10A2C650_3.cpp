// Game/Unsorted_10A2C650_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A2C610.h"
#include "Game/FCoords.h"
#include "Game/Struct_10A2DA00.h"

struct Struct_10B21820_Object;

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

extern FCoords DAT_10f46de8;

class Class_10A2C2F0
{
public:
    int FindEntry(void* A, void* B);
    Struct_10A2DA00* FindOrAddEntry(Class_10B21820* A, void* B);

    char Unknown00[8];
    Class_10A2C610 Unknown08;
};

// FUNCTION: 0x10A2DA00 ?FindOrAddEntry@Class_10A2C2F0@@QAEPAUStruct_10A2DA00@@PAVClass_10B21820@@PAX@Z
Struct_10A2DA00* Class_10A2C2F0::FindOrAddEntry(Class_10B21820* A, void* B)
{
    int Found = FindEntry(A, B);
    if (Found != 0)
        return (Struct_10A2DA00*)Found;
    Struct_10A2DA00 Item;
    Item.Unknown00 = A;
    Item.Unknown18 = A->FUN_10991e10();
    Item.Unknown08 = 0;
    Item.Unknown7C = false;
    Item.Unknown7D = false;
    Item.Unknown20 = DAT_10f46de8;
    int Count = Unknown08.Unknown00;
    Class_10A2C610* Array = &Unknown08;
    Item.Unknown7A = false;
    Array->SetCount(Count + 1);
    Struct_10A2DA00* Dest = Array->Unknown08 + Count;
    *Dest = Item;
    return Unknown08.Unknown08 + Count;
}
