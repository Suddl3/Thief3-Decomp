// Game/Class_10A4C4A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A4C130.h"
#include "Game/Class_10A4C4A0.h"
#include "Core/Core.h"
#include "Game/Class_10A492B0_Field18.h"
#include "Game/FCoords.h"
#include "Game/Class_10A492B0.h"
#include "Game/cString.h"
#include "Game/Class_10A492B0_Node.h"

struct Struct_10A4C4A0;

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

struct Struct_10A4C4A0_Pair
{
    int Unknown00;
    int Unknown04;
};

struct Struct_10A4C4A0
{
    int Unknown00;
    int Unknown04;
    Struct_10A4C4A0_Pair Unknown08;
};

// FUNCTION: 0x10A4C0D0 ?Allocate@Class_10A4C4A0@@QAEPAUStruct_10A4C4A0@@HH@Z
Struct_10A4C4A0* Class_10A4C4A0::Allocate(int A, int B)
{
    if (Unknown04 != 0)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 16, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        GetAllocator()->Virtual9();
    return (Struct_10A4C4A0*)Memory;
}

// FUNCTION: 0x10A4C4A0 ?FUN_10a4c4a0@Class_10A4C4A0@@QAEXHHPAUStruct_10A4C4A0_Pair@@@Z
void Class_10A4C4A0::FUN_10a4c4a0(int A, int B, Struct_10A4C4A0_Pair* C)
{
    Struct_10A4C4A0* Node = Allocate(1, 0);
    if (Node)
    {
        Node->Unknown00 = A;
        Node->Unknown04 = B;
        Node->Unknown08 = *C;
    }
}
