// Game/Unsorted_10BA0220_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Serialize(void* V, int Length);

    char Pad04[0x10];
    int Unknown14;
    int Unknown18;
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void DeleteItems(cIntArray* Items);

class Class_10BA00C0
{
public:
    Class_10BA00C0(FArchive& Ar);
    void Serialize(FArchive& Ar);

    char Pad00[0x54];
};

class Class_10B9F950
{
public:
    void FUN_10ba0390(FArchive& Ar);

    char Pad00[0x4];
    cIntArray Unknown04;
};

// FUNCTION: 0x10BA0390 ?FUN_10ba0390@Class_10B9F950@@QAEXAAVFArchive@@@Z
void Class_10B9F950::FUN_10ba0390(FArchive& Ar)
{
    int Mode = Ar.Unknown18;
    if (Mode == 1)
    {
        int Count = Unknown04.Count;
        Ar.Serialize(&Count, 4);
        for (int i = 0; i < Count; i++)
            ((Class_10BA00C0*)Unknown04.Data[i])->Serialize(Ar);
    }
    if (Ar.Unknown14 == 1)
    {
        DeleteItems(&Unknown04);
        int Count = 0;
        Ar.Serialize(&Count, 4);
        for (int i = 0; i < Count; i++)
        {
            GetAllocator()->Virtual8(0, 0);
            Class_10BA00C0* Obj = new(0, 0, 0, 0, 0) Class_10BA00C0(Ar);
            GetAllocator()->Virtual9();
            int Index = Unknown04.Count;
            cIntArray* List = &Unknown04;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Obj;
        }
    }
}
