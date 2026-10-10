// Game/Unsorted_10C48220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C48260.h"
#include "Game/Class_10C48260_Field18.h"
#include "Game/Class_10C48260_Node.h"
#include "Game/Class_10C48320.h"
#include "Game/Class_10C48320_Field18.h"
#include "Game/Class_10C48320_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10C48260 ?FUN_10c48260@Class_10C48260@@QAEIABH0@Z
unsigned int Class_10C48260::FUN_10c48260(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c48400(Unknown0C * 2);
    Class_10C48260_Node* Node = new(0, 0, 0, 0, 0) Class_10C48260_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}

// FUNCTION: 0x10C48320 ?FUN_10c48320@Class_10C48320@@QAEIABH0@Z
unsigned int Class_10C48320::FUN_10c48320(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c484d0(Unknown0C * 2);
    Class_10C48320_Node* Node = new(0, 0, 0, 0, 0) Class_10C48320_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}
