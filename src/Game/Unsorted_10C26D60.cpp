// Game/Unsorted_10C26D60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10C26C10.h"
#include "Game/Class_10C26E80.h"

// Ion Storm's tagged new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The objects the array at +0x38 holds.
class Class_10C26D60_Unknown38
{
public:
    virtual void Virtual0();
    virtual char Virtual1();
};

// FUNCTION: 0x10C26D60 ?FUN_10c26d60@Class_10C26E80@@QAEXXZ
void Class_10C26E80::FUN_10c26d60()
{
    cIntArray* Copy = 0;
    bool Flag = Virtual8();
    for (int i = 0; i < Unknown38.Count; i++)
    {
        Class_10C26D60_Unknown38* Item = (Class_10C26D60_Unknown38*)Unknown38.Data[i];
        if (!Flag && Item->Virtual1() != 1)
            continue;
        if (Copy == 0)
        {
            GetAllocator()->Virtual8(0, 0);
            int Tag = 0;
            Copy = new(Tag, 0, 0, 0, 0) cIntArray;
            GetAllocator()->Virtual9();
        }
        int Index = Copy->Count;
        Copy->SetCount(Index + 1);
        Copy->Data[Index] = (int)Item;
    }
    if (Copy)
    {
        Unknown38.FUN_10c26c10(Copy);
        for (int i = 0; i < Copy->Count; i++)
            delete (Class_10C26D60_Unknown38*)Copy->Data[i];
        Copy->Count = 0;
        delete Copy;
        if (Unknown38.Count == 0)
            Virtual7();
    }
}
