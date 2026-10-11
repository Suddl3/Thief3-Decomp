// Game/Unsorted_10C49030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdio.h>
#include "Game/Class_1090A780.h"
#include "Game/Class_10C49100_Field18.h"
#include "Game/Class_10C491E0.h"
#include "Game/Struct_10C49030.h"
#include "Game/Class_10C49100.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10C49100_Node.h"
#include "Game/Class_10E9BB8C.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10C49100 ?FUN_10c49100@Class_10C49100@@QAEIABVClass_109081E0@@ABH@Z
unsigned int Class_10C49100::FUN_10c49100(const Class_109081E0& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c49260(Unknown0C * 2);
    Class_10C49100_Node* Node = new(0, 0, 0, 0, 0) Class_10C49100_Node;
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

// FUNCTION: 0x10C491E0 ?FUN_10c491e0@Class_10C491E0@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10C491E0::FUN_10c491e0()
{
    return *Unknown00;
}
