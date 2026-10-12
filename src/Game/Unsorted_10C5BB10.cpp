// Game/Unsorted_10C5BB10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// The placement delete that pairs with Ion Storm's new.
#include "Game/Class_109081E0.h"
#include "Game/Struct_10C5BA20.h"
#include "Game/Class_10C5BB10.h"
#include "Game/Class_10C5BB10_Unknown18.h"

// Class_10C5BA20 as include/Game/Class_10C5BA20.h declares it, plus the constructor the
// new-expression below inlines (it stores -1.0f into Unknown1C and Unknown20, so those are float).
class Class_10C5BA20
{
public:
    Class_10C5BA20() : Unknown08(false), Unknown1C(-1.0f), Unknown20(-1.0f), Unknown24(0) {}
    Class_10C5BA20* FUN_10c5ba20(const Class_10C5BA20& A);

    Class_109081E0 Unknown00;
    Class_109081E0 Unknown04;
    bool Unknown08;
    Struct_10C5BA20 Unknown0C;
    int Unknown18;
    float Unknown1C;
    float Unknown20;
    int Unknown24;
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 48 bytes, allocated per insert.
class Class_10C5BB10_Node
{
public:
    int Key;
    Class_10C5BA20 Value;
    Class_10C5BB10_Node* Next;
};

// FUNCTION: 0x10C5BB10 ?FUN_10c5bb10@Class_10C5BB10@@QAEIABHABVClass_10C5BA20@@@Z
unsigned int Class_10C5BB10::FUN_10c5bb10(const int& Key, const Class_10C5BA20& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c5bbf0(Unknown0C * 2);
    Class_10C5BB10_Node* Node = new(0, 0, 0, 0, 0) Class_10C5BB10_Node;
    Node->Key = Key;
    Node->Value.FUN_10c5ba20(Value);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}
