// Game/Unsorted_10919CB0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091AD50.h"

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
struct Class_1091AD50_Node
{
    cString Key;
    int Value;
    Class_1091AD50_Node* Next;
};

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
