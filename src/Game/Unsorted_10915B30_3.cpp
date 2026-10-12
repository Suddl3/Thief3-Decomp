// Game/Unsorted_10915B30_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10915D50.h"

// A string-keyed hash table: buckets of singly linked nodes.

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    cString& operator=(const cString& Other);

    char* Unknown00;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// A bucket entry (12 bytes; Insert allocates it).
struct Class_10915D50_Node
{
    cString Key;
    int Value;
    Class_10915D50_Node* Next;
};

// FUNCTION: 0x10915E30 ?Rehash@Class_10915D50@@QAEXH@Z
void Class_10915D50::Rehash(int NewSize)
{
    int OldSize = Size;
    Class_10915D50_Node** OldTable = Table;
    Table = (Class_10915D50_Node**)operator new(NewSize * sizeof(Class_10915D50_Node*), 0, 0, 0, 0, 0);
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
        Class_10915D50_Node* Node = OldTable[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10915D50_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
