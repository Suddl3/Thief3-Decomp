// Game/Unsorted_10B88900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B88A80_Field18.h"
#include "Game/Class_10B89820.h"
#include "Game/Class_10B88A80.h"

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10B88A80_Node
{
public:
    Class_109081E0 Key;
    int Value;
    Class_10B88A80_Node* Next;
};

Class_10905A90_Member* GetAllocator();

extern bool DAT_10ffc854;

extern char const* const DAT_10e47660;

struct Struct_10B88900_Entry
{
    int Unknown00;
    void* Unknown04;
    int Unknown08;
};

class Class_10B88900_Arg1
{
public:
    char const* Unknown00;
};

class Class_10B88900_Arg2
{
public:
    Struct_10B88900_Entry Unknown00[4];
    bool Unknown30;
};

class Class_10D393D0
{
public:
    ~Class_10D393D0();
    void FUN_10d393d0(void* A, int B, char const* C);
    void FUN_10d393b0();

    char Unknown00[0xC];
};

Class_10D393D0 FUN_10d39cf0(char const* File, int Line, char const* Name, int A, Class_10B88900_Arg1* B, int C, int D, int E, int F, unsigned G);

// FUNCTION: 0x10B88900 ?FUN_10b88900@@YGXPAVClass_10B88900_Arg1@@PAVClass_10B88900_Arg2@@H@Z
void __stdcall FUN_10b88900(Class_10B88900_Arg1* A, Class_10B88900_Arg2* B, int C)
{
    if (B)
    {
        char const* Name = A->Unknown00;
        if (!Name)
            Name = (char const*)&DAT_10e47660;
        Class_10D393D0 Writer = FUN_10d39cf0(".\\RagdollBlockDataManager.cpp", 300, Name, -1, A, 6, C, 2, 0, 0xdeadbeef);
        for (int i = 0; i < 4; i++)
        {
            int Count = B->Unknown00[i].Unknown00;
            void* Data = B->Unknown00[i].Unknown04;
            if (DAT_10ffc854)
            {
                Writer.FUN_10d393d0(&Count, 4, "uint32");
                if (DAT_10ffc854)
                    Writer.FUN_10d393d0(Data, Count, 0);
            }
        }
        if (DAT_10ffc854)
            Writer.FUN_10d393b0();
        B->Unknown30 = true;
    }
}

// FUNCTION: 0x10B88A80 ?FUN_10b88a80@Class_10B88A80@@QAEIABVClass_109081E0@@ABH@Z
unsigned int Class_10B88A80::FUN_10b88a80(const Class_109081E0& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10b88b60(Unknown0C * 2);
    Class_10B88A80_Node* Node = new(0, 0, 0, 0, 0) Class_10B88A80_Node;
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

// FUNCTION: 0x10B88B60 ?FUN_10b88b60@Class_10B88A80@@QAEXH@Z
void Class_10B88A80::FUN_10b88b60(int Size)
{
    int OldSize = Unknown0C;
    Class_10B88A80_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10B88A80_Node*[Size];
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
        Class_10B88A80_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10b88a80(Node->Key, Node->Value);
            Class_10B88A80_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10B89820 ?FUN_10b89820@Class_10B89820@@QAEXXZ
void Class_10B89820::FUN_10b89820()
{
    FUN_10b89460(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
