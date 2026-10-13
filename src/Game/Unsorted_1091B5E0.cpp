// Game/Unsorted_1091B5E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1091B480.h"
#include "Game/Class_1091B480_Node.h"

unsigned int HashBytes(const void* Data, int Length);

// The table's key hasher: slot 0 gives the bytes HashBytes hashes, slot 1 compares a key with a node's key (0 when they are equal).
class Class_1091C710_Field18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, const cString& Other);
};

// The hash table of Class_1091B480 with an int key hasher at +0x18.
class Class_1091C710 : public Class_1091B480
{
public:
    unsigned char FUN_1091c710(int* Key);

    Class_1091C710_Field18 Unknown18;
};

// FUNCTION: 0x1091C710 ?FUN_1091c710@Class_1091c710@@QAEEPAH@Z
unsigned char Class_1091C710::FUN_1091c710(int* Key)
{
    if (!Unknown10 && Count < Size * 0.05 && Size > 64)
        Rehash(Size / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Bits) - 1);
    }
    for (Class_1091B480_Node* Node = Table[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Collisions--;
            if (!Prev)
                Table[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            Count--;
            delete Node;
            return true;
        }
    }
    return false;
}
