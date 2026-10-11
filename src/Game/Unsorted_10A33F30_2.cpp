// Game/Unsorted_10A33F30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34420_Unknown18.h"
#include "Game/Class_10A345C0.h"

extern "C" void* memcpy(void* Dest, const void* Src, unsigned int Size);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// A chained hash table's entry: a 16-byte key (its constructor sets it to -1), the value, the next entry.
class Class_10A345C0_Node
{
public:
    Class_10A345C0_Node() { Key[0] = -1; Key[1] = -1; }

    __int64 Key[2];
    int Value;
    Class_10A345C0_Node* Next;
};

// FUNCTION: 0x10A34420 ?FUN_10a34420@Class_10A345C0@@QAEIPA_JPAH@Z
unsigned int Class_10A345C0::FUN_10a34420(__int64* Key, int* Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10a34810(Unknown0C * 2);
    Class_10A345C0_Node* Node = new(0, 0, 0, 0, 0) Class_10A345C0_Node;
    memcpy(Node->Key, Key, sizeof(Node->Key));
    Node->Value = *Value;
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
