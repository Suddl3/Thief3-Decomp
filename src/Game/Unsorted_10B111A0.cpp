// Game/Unsorted_10B111A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B116B0.h"
#include "Game/Class_10B11600.h"
#include "Game/Class_10E782A0.h"

Class_10905A90_Member* GetAllocator();

class Class_10B111A0_Unknown10
{
public:
    virtual ~Class_10B111A0_Unknown10();
};

struct Struct_10B111A0_Node
{
    Struct_10B111A0_Node* Next;
    Struct_10B111A0_Node* Prev;
    int Key;
    int Unknown0C;
    Class_10B111A0_Unknown10* Unknown10;
};

class Class_10B111A0_Unknown0C
{
public:
    int Count;
    Struct_10B111A0_Node* Head;
    Struct_10B111A0_Node* Tail;
};

// The element: 0xC bytes, its three words cleared by the loop.
class Class_10B11520_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10B11600_Unknown08
{
public:
    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B111A0 ?FUN_10b111a0@Class_10E782A0@@UAE_NH@Z
bool Class_10E782A0::FUN_10b111a0(int A)
{
    bool Result = false;
    for (int i = 0; i < Unknown04; i++)
    {
        Class_10B111A0_Unknown0C* Bucket = Unknown0C[i];
        if (!Bucket)
            continue;
        Struct_10B111A0_Node* Node = Bucket->Head;
        while (Node)
        {
            Struct_10B111A0_Node* Victim = Node;
            Node = Node->Next;
            if (Victim->Key == A)
            {
                if (Bucket->Head == Victim)
                    Bucket->Head = Victim->Next;
                if (Bucket->Tail == Victim)
                    Bucket->Tail = Victim->Prev;
                if (Victim->Next)
                    Victim->Next->Prev = Victim->Prev;
                if (Victim->Prev)
                    Victim->Prev->Next = Victim->Next;
                Victim->Next = (Struct_10B111A0_Node*)-1;
                Victim->Prev = (Struct_10B111A0_Node*)-1;
                Bucket->Count--;
                if (Victim->Unknown10 && Victim->Unknown10 != (Class_10B111A0_Unknown10*)-1)
                    delete Victim->Unknown10;
                delete Victim;
                Result = true;
            }
        }
    }
    return Result;
}

// FUNCTION: 0x10B11520 ?FUN_10b11520@Class_10B116B0@@QAEXH@Z
void Class_10B116B0::FUN_10b11520(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10B11520_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10B11520_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10B11520_Unknown08);
        Unknown08 = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10B11520_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10B11520_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10B11520_Unknown08* Element = (Class_10B11520_Unknown08*)((char*)Unknown08 + j * sizeof(Class_10B11520_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
            Element->Unknown08 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10B11600 ?FUN_10b11600@Class_10B11600@@QAEXHHH@Z
void Class_10B11600::FUN_10b11600(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10B11600_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10B11600_Unknown08* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                }
            }
        }
        else
        {
            for (int I = To + Count; I < From + Count; I++)
            {
                Class_10B11600_Unknown08* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                }
            }
        }
    }
}

// FUNCTION: 0x10B116B0 ?FUN_10b116b0@Class_10B116B0@@QAEXXZ
void Class_10B116B0::FUN_10b116b0()
{
    FUN_10b11520(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
