// Game/Unsorted_10C49880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C48320_Field18.h"
#include "Game/Class_10C48320_Node.h"
#include "Game/Class_10E9BBC0_Unknown3C.h"
#include "Game/Class_10C48320.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

class Class_10C48260
{
public:
    unsigned int FUN_10c48260(const int& A, const int& B);
};

class Class_10D3F830 : public Class_10C48260
{
public:
    bool FUN_10d3f830(int* A);
};

struct Struct_10C49880
{
    char Unknown00[4];
    int Unknown04;
};

class Class_10E9BBC0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void RemoveEntry(int A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void AddEntry(Struct_10C49880* A);

    Class_10D3F830 m_Entries;
    char Unknown05[0x37];
    Class_10E9BBC0_Unknown3C* Unknown3C;
};

// FUNCTION: 0x10C49880 ?AddEntry@Class_10E9BBC0@@UAEXPAUStruct_10C49880@@@Z
void Class_10E9BBC0::AddEntry(Struct_10C49880* A)
{
    int Key = A->Unknown04;
    if (m_Entries.FUN_10d3f830(&Key))
        return;
    int Value = A->Unknown04;
    Key = Unknown3C->Virtual0(Value);
    if (Key)
    {
        int Index = A->Unknown04;
        m_Entries.FUN_10c48260(Index, Key);
    }
}

// FUNCTION: 0x10C49960 ?FUN_10c49960@Class_10C48320@@QAE_NABH@Z
bool Class_10C48320::FUN_10c49960(const int& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c484d0(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10C48320_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Unknown00--;
            if (!Prev)
                Unknown14[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            Unknown04--;
            delete Node;
            return true;
        }
    }
    return false;
}
