// Game/Unsorted_10A2C650_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10B21820_Object;

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

class FCoords
{
public:
    char Unknown00[0x30];
};

extern FCoords DAT_10f46de8;

struct Struct_10A2DA00
{
    Class_10B21820* Unknown00;
    char Unknown04[4];
    int Unknown08;
    char Unknown0C[0xC];
    Struct_10B21820_Object* Unknown18;
    char Unknown1C[4];
    FCoords Unknown20;
    char Unknown50[0x2A];
    bool Unknown7A;
    char Unknown7B;
    bool Unknown7C;
    bool Unknown7D;
    char Unknown7E[0x32];
};

class Class_10A2C610
{
public:
    void FUN_10a2c3b0(int NewCount);

    int Unknown00;
    int Unknown04;
    Struct_10A2DA00* Unknown08;
};

class Class_10A2C2F0
{
public:
    int FUN_10a2c2f0(void* A, void* B);
    Struct_10A2DA00* FUN_10a2da00(Class_10B21820* A, void* B);

    char Unknown00[8];
    Class_10A2C610 Unknown08;
};

// FUNCTION: 0x10A2DA00 ?FUN_10a2da00@Class_10A2C2F0@@QAEPAUStruct_10A2DA00@@PAVClass_10B21820@@PAX@Z
Struct_10A2DA00* Class_10A2C2F0::FUN_10a2da00(Class_10B21820* A, void* B)
{
    int Found = FUN_10a2c2f0(A, B);
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
    Array->FUN_10a2c3b0(Count + 1);
    Struct_10A2DA00* Dest = Array->Unknown08 + Count;
    *Dest = Item;
    return Unknown08.Unknown08 + Count;
}
