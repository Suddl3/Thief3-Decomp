// Game/Unsorted_10A34780_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34B90_Node.h"
#include "Game/Class_10A34C10.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// The class of include/Game/Class_10A34B90.h, with FUN_10a34420 added.
class Class_10A34B90
{
public:
    void FUN_10a34b90(int A);
    void FUN_10a35140();
    void FUN_10a34810(int Size);
    void FUN_10a34420(Class_10A34B90_Node* Node, int* Key);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10A34B90_Node** Unknown14;
};

class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();

    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A34C10_Unknown10;

// A bucket entry (0x18 bytes).
struct Class_10A34C10_Node
{
    Class_109081E0 Key;
    char Unknown04[0xC];
    Class_10A34C10_Unknown10* Value;
    Class_10A34C10_Node* Next;
};

// FUNCTION: 0x10A34810 ?FUN_10a34810@Class_10A34B90@@QAEXH@Z
void Class_10A34B90::FUN_10a34810(int Size)
{
    int OldSize = Unknown0C;
    Class_10A34B90_Node** OldBuckets = Unknown14;
    Class_10A34B90_Node** Buckets = new(0, 0, 0, 0, 0) Class_10A34B90_Node*[Size];
    Unknown0C = Size;
    Unknown14 = Buckets;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10A34B90_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10a34420(Node, &Node->Unknown10);
            Class_10A34B90_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10A349E0 ?FUN_10a349e0@Class_10A34C10@@QAEXH@Z
void Class_10A34C10::FUN_10a349e0(int NewSize)
{
    int OldSize = Size;
    Class_10A34C10_Node** OldTable = Table;
    Table = (Class_10A34C10_Node**)operator new(NewSize * sizeof(Class_10A34C10_Node*), 0, 0, 0, 0, 0);
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
        Class_10A34C10_Node* Node = OldTable[j];
        while (Node)
        {
            FUN_10a348e0(Node->Key, &Node->Value);
            Class_10A34C10_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
