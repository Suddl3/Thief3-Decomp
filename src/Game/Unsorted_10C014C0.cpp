// Game/Unsorted_10C014C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C00F60_Node.h"

class Class_10C00F60_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const __int64& A, const __int64& B);
};

class Class_10C00F60
{
public:
    unsigned int FUN_10c00f60(const int& Key, const int& Value);
    void FUN_10c01200(int Size);
    unsigned int FUN_10c00b40(const int& Key);
    bool FUN_10c014c0(const int& Key);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10C00F60_Node** Unknown14;
    Class_10C00F60_Field18 Unknown18;
};

// FUNCTION: 0x10C014C0 ?FUN_10c014c0@Class_10C00F60@@QAE_NABH@Z
bool Class_10C00F60::FUN_10c014c0(const int& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c01200(Unknown0C / 2);
    unsigned int Index = FUN_10c00b40(Key);
    for (Class_10C00F60_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
