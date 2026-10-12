// Game/Unsorted_10C0BDE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10C0C090.h"
#include "Game/Class_10C0C150.h"
#include "Game/Class_10C0C8E0.h"
#include "Game/Item_10C0C150.h"
#include "Game/Struct_10C0BFC0.h"

struct Struct_10C0C8E0
{
    char Unknown00[0x2C];
    int Unknown2C;
    int Unknown30;
};

double GetTimeSeconds();

void* operator new(unsigned int);

struct Struct_10C0C0D0A
{
    int Unknown00;
    int Unknown04;
};

struct Struct_10C0C0D0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    Struct_10C0C0D0A Unknown0C;
    bool Unknown14;
    bool Unknown15;
};

// FUNCTION: 0x10C0C090 ?UpdatePosition@Class_10C0C090@@QAEXHHPAVFVector@@H@Z
void Class_10C0C090::UpdatePosition(int A, int B, FVector* Pos, int D)
{
    Struct_10C0BFC0* Obj = FindEntry(A, B);
    Obj->Unknown5C = GetTimeSeconds();
    Obj->Unknown38 = *Pos;
}

// FUNCTION: 0x10C0C150 ?Add@Class_10C0C150@@QAEHPBUItem_10C0C150@@@Z
int Class_10C0C150::Add(const Item_10C0C150* Item)
{
    int Index = Unknown00;
    Resize(Index + 1);
    Unknown08[Index] = *Item;
    return Index;
}

// FUNCTION: 0x10C0C8E0 ?FUN_10c0c8e0@Class_10C0C8E0@@QAEXPBUStruct_10C0C8E0@@@Z
void Class_10C0C8E0::FUN_10c0c8e0(const Struct_10C0C8E0* In)
{
    FUN_10c0c200(In->Unknown30, In->Unknown2C);
}
