// Game/Class_1091AD50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1091AD50.h"
#include "Game/cString.h"
#include "Game/Class_1091AD50_Node.h"
#include "Game/Class_1091AD50_Field18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x1091AD50 ?Insert@Class_1091AD50@@QAEIABVcString@@ABH@Z
unsigned int Class_1091AD50::Insert(const cString& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        Rehash(Unknown0C * 2);
    Class_1091AD50_Node* Node = new(0, 0, 0, 0, 0) Class_1091AD50_Node;
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

// FUNCTION: 0x1091AE30 ?Rehash@Class_1091AD50@@QAEXH@Z
void Class_1091AD50::Rehash(int NewSize)
{
    int OldSize = Size;
    Class_1091AD50_Node** OldTable = Table;
    Table = (Class_1091AD50_Node**)operator new(NewSize * sizeof(Class_1091AD50_Node*), 0, 0, 0, 0, 0);
    Size = NewSize;
    Bits = 0;
    while (NewSize >>= 1)
        Bits++;
    Count = 0;
    Collisions = 0;
    for (int i = 0; i < Size; i++)
        Table[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_1091AD50_Node* Node = OldTable[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_1091AD50_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
