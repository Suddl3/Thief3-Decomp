// Game/Unsorted_10B9FA50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Serialize(void* V, int Length);

    char Pad04[0x8];
    int Unknown0C;
    char Pad10[0x4];
    int Unknown14;
    int Unknown18;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

// Ion Storm's tagged new and its delete.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The items the array holds: two serialized fields, at +0 and +0xC.
class Class_10B9FA50_Data
{
public:
    Class_10B9FA50_Data(FArchive& Ar)
    {
        if (Ar.Unknown14)
        {
            FUN_10b052a0(Ar, &Unknown00);
            FUN_10b052a0(Ar, &Unknown0C);
        }
    }

    int Unknown00;
    char Unknown04[0x8];
    int Unknown0C;
    char Unknown10[0x8];
};

class Class_10B9F950
{
public:
    void FUN_10b9fa50(FArchive& Ar);

    cIntArray Unknown00;
};

// FUNCTION: 0x10B9FA50 ?FUN_10b9fa50@Class_10B9F950@@QAEXAAVFArchive@@@Z
void Class_10B9F950::FUN_10b9fa50(FArchive& Ar)
{
    int Mode = Ar.Unknown18;
    if (Mode == 1)
    {
        if (Ar.Unknown0C < 0x12)
            return;
        int Count = Unknown00.Count;
        Ar.Serialize(&Count, 4);
        for (int i = 0; i < Count; i++)
        {
            int Flag = Ar.Unknown18;
            Class_10B9FA50_Data* Item = (Class_10B9FA50_Data*)Unknown00.Data[i];
            if (Flag)
            {
                FUN_10b052a0(Ar, &Item->Unknown00);
                FUN_10b052a0(Ar, &Item->Unknown0C);
            }
        }
    }
    if (Ar.Unknown14 == 1)
    {
        for (int i = 0; i < Unknown00.Count; i++)
            delete (Class_10B9FA50_Data*)Unknown00.Data[i];
        Unknown00.Count = 0;
        if (Ar.Unknown0C < 0x12)
            return;
        int Count = 0;
        Ar.Serialize(&Count, 4);
        for (int i = 0; i < Count; i++)
        {
            GetAllocator()->Virtual8(0, 0);
            Class_10B9FA50_Data* Obj = new(0, 0, 0, 0, 0) Class_10B9FA50_Data(Ar);
            GetAllocator()->Virtual9();
            int Index = Unknown00.Count;
            cIntArray* List = &Unknown00;
            List->SetCount(Index + 1);
            List->Data[Index] = (int)Obj;
        }
    }
}
