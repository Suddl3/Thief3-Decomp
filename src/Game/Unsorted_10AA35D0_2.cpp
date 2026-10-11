// Game/Unsorted_10AA35D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10AA44B0_Node
{
public:
    int Key;
    Class_109081E0 Value;
    Class_10AA44B0_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes FUN_1090e9b0 hashes.
class Class_10AA44B0_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
};

class Class_10AA44B0
{
public:
    void FUN_10aa3830(int A);
    void FUN_10aa44b0();
    void FUN_10aa36b0(int Size);
    unsigned int FUN_10aa35d0(const int& Key, const Class_109081E0& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10AA44B0_Node** Unknown14;
    Class_10AA44B0_Field18 Unknown18;
};

// FUNCTION: 0x10AA35D0 ?FUN_10aa35d0@Class_10AA44B0@@QAEIABHABVClass_109081E0@@@Z
unsigned int Class_10AA44B0::FUN_10aa35d0(const int& Key, const Class_109081E0& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10aa36b0(Unknown0C * 2);
    Class_10AA44B0_Node* Node = new(0, 0, 0, 0, 0) Class_10AA44B0_Node;
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
