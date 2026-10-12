// Game/Unsorted_10C56E50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56E50.h"
#include "Game/Class_10C576F0.h"
#include "Game/Class_10C576F0_Field18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10C576F0_Node
{
public:
    int Key;
    int Value;
    Class_10C576F0_Node* Next;
};

// FUNCTION: 0x10C56E50 ?FUN_10c56e50@Class_10C56E50@@QAEXXZ
void Class_10C56E50::FUN_10c56e50()
{
    Unknown00 = 5.0f;
    Unknown04 = 50.0f;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown28 = 0;
    Unknown2C = 0;
    Unknown30 = 0;
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown3C = 0;
    Unknown40 = 0;
    Unknown44 = 0;
    Unknown48 = 0;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown60 = 0;
    Unknown64 = 0;
    Unknown68 = 0;
    Unknown6C = 0;
    Unknown70 = 0;
    Unknown74 = 0;
    Unknown78 = 0;
    Unknown7C = 0;
    Unknown80 = 0;
    Unknown84 = 0;
    Unknown88 = 0;
    Unknown8C = 0;
    Unknown90 = 0;
    Unknown94 = 0;
    Unknown98 = -100.0f;
    Unknown9C = 0;
}

// FUNCTION: 0x10C576F0 ?FUN_10c576f0@Class_10C576F0@@QAEIABH0@Z
unsigned int Class_10C576F0::FUN_10c576f0(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c577b0(Unknown0C * 2);
    Class_10C576F0_Node* Node = new(0, 0, 0, 0, 0) Class_10C576F0_Node;
    Node->Key = Key;
    Node->Value = Value;
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

// FUNCTION: 0x10C577B0 ?FUN_10c577b0@Class_10C576F0@@QAEXH@Z
void Class_10C576F0::FUN_10c577b0(int Size)
{
    int OldSize = Unknown0C;
    Class_10C576F0_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10C576F0_Node*[Size];
    Unknown0C = Size;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10C576F0_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10c576f0(Node->Key, Node->Value);
            Class_10C576F0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
