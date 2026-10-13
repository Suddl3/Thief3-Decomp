// Game/Class_10E782A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E782A0.h"
#include "Game/Class_10B116B0.h"
#include "Game/Class_10B11600.h"
#include "Game/Class_10B111A0_Unknown0C.h"
#include "Game/Class_10B111A0_Unknown10.h"
#include "Game/Struct_10B111A0_Node.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10B11400_Arg
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10B11400_Unknown04
{
public:
    Class_10B11400_Unknown04(Class_10B11400_Arg* X)
    {
        Next = (Class_10B11400_Unknown04*)-1;
        Prev = (Class_10B11400_Unknown04*)-1;
        Unknown08 = X->Unknown08;
        Unknown0C = X->Unknown0C;
        Unknown10 = X->Unknown10;
    }

    Class_10B11400_Unknown04* Next;
    Class_10B11400_Unknown04* Prev;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10B11400_Unknown10
{
public:
    int Unknown00;
    Class_10B11400_Unknown04* Unknown04;
    Class_10B11400_Unknown04* Unknown08;
};

// FUNCTION: 0x10B111A0 ?RemoveKey@Class_10E782A0@@UAE_NH@Z
bool Class_10E782A0::RemoveKey(int A)
{
    bool Result = false;
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10B111A0_Unknown0C* Bucket = m_Buckets[i];
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

// FUNCTION: 0x10B11400 ?FUN_10b11400@Class_10E782A0@@QAEXPAVClass_10B11400_Arg@@@Z
void Class_10E782A0::FUN_10b11400(Class_10B11400_Arg* X)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10B11400_Unknown04* Node = new(0, 0, 0, 0, 0) Class_10B11400_Unknown04(X);
    GetAllocator()->Virtual9();
    Class_10B11400_Unknown10* List = Unknown10;
    Node->Prev = 0;
    Node->Next = List->Unknown04;
    if (List->Unknown04)
    {
        List->Unknown04->Prev = Node;
    }
    List->Unknown04 = Node;
    if (!List->Unknown08)
    {
        List->Unknown08 = Node;
    }
    List->Unknown00++;
}
