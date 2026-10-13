// Game/Unsorted_10C5BBF0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class InnerClass_10c5b910
{
public:
    char Pad00[0x28];
};

// Class_10C5B990 copied from include/Game/Class_10C5B990.h, its padding retyped as the bucket key
// and its destructor added (the game's out-of-line one at 0x10C5B990).
class Class_10C5B990
{
public:
    ~Class_10C5B990();
    void FUN_10c5b990();

    cString Key;
    InnerClass_10c5b910 inner;
    Class_10C5B990* Next;
};

class Class_10C5BBF0
{
public:
    unsigned int Insert(const cString& Key, InnerClass_10c5b910* Value);
    void FUN_10c5bbf0(int NewSize);

    int Collisions;
    int Count;
    int Bits;
    int Size;
    bool Unknown10;
    Class_10C5B990** Table;
};

// FUNCTION: 0x10C5BBF0 ?FUN_10c5bbf0@Class_10C5BBF0@@QAEXH@Z
void Class_10C5BBF0::FUN_10c5bbf0(int NewSize)
{
    int OldSize = Size;
    Class_10C5B990** OldTable = Table;
    Table = (Class_10C5B990**)operator new(NewSize * sizeof(Class_10C5B990*), 0, 0, 0, 0, 0);
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
        Class_10C5B990* Node = OldTable[j];
        while (Node)
        {
            Insert(Node->Key, &Node->inner);
            Class_10C5B990* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
