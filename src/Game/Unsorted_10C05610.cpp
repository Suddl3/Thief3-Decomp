// Game/Unsorted_10C05610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Struct_10C05A50.h"
#include "Game/Struct_10C05610_Item.h"

float Distance2D(const Struct_10C05A50* A, const Struct_10C05A50* B);

struct Struct_10C05610
{
    int Count;
    int Unknown04;
    Struct_10C05610_Item* Items;
};

void ExpandBounds(Struct_10C05610_Item* Item, int A, int B, int C);

// FUNCTION: 0x10C05610 ?ExpandBoundsList@@YAXPAUStruct_10C05610@@HHH@Z
void ExpandBoundsList(Struct_10C05610* List, int A, int B, int C)
{
    for (int i = 0; i < List->Count; i++)
        ExpandBounds(&List->Items[i], A, B, C);
}

// FUNCTION: 0x10C05A20 ?Distance2D@@YAMPBUStruct_10C05A50@@0@Z
float Distance2D(const Struct_10C05A50* A, const Struct_10C05A50* B)
{
    float X = B->Unknown00 - A->Unknown00;
    float Y = B->Unknown04 - A->Unknown04;
    return sqrtf(X * X + Y * Y);
}
