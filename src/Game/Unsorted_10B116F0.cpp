// Game/Unsorted_10B116F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B111A0_Unknown0C.h"
#include "Game/Class_10B111A0_Unknown10.h"
#include "Game/Struct_10B111A0_Node.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10B116F0
{
public:
    Class_10B116F0();

    char Unknown00[0x20];
};

class Class_10B111A0_Unknown10;

class Class_10E782A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool RemoveKey(int A);
    virtual void FUN_10b11bd0(int Key, int Index, int Tag, int Arg);

    int FUN_10b113a0(int Index, Struct_10B111A0_Node* Node);
    void FUN_10b11b00(int A, int B, int C, int D);

    int Unknown04;
    int Unknown08;
    Class_10B111A0_Unknown0C** Unknown0C;
};

// FUNCTION: 0x10B117C0 ?FUN_10b117c0@@YAPAVClass_10B116F0@@XZ
Class_10B116F0* FUN_10b117c0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10B116F0* Result = new(0, 0, 0, 0, 0) Class_10B116F0;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B11BD0 ?FUN_10b11bd0@Class_10E782A0@@UAEXHHHH@Z
void Class_10E782A0::FUN_10b11bd0(int Key, int Index, int Tag, int Arg)
{
    bool Done = false;
    Class_10B111A0_Unknown0C* Bucket = Unknown0C[Index];
    if (Bucket)
    {
        Struct_10B111A0_Node* Node = Bucket->Head;
        while (Node)
        {
            Struct_10B111A0_Node* Victim = Node;
            Node = Victim->Next;
            if (Victim->Key == Key && (Victim->Unknown0C == -1 || Victim->Unknown0C == Tag)
                && (Victim->Unknown10 == (Class_10B111A0_Unknown10*)-1
                    || (Arg != 0 && Arg != -1 && Victim->Unknown10->Virtual2(Arg))))
            {
                if (FUN_10b113a0(Index, Victim))
                {
                    if (!Done)
                    {
                        FUN_10b11b00(Key, Index, Tag, Arg);
                        Done = true;
                    }
                }
                else
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
                }
            }
        }
    }
}
