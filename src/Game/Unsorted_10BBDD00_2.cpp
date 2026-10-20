// Game/Unsorted_10BBDD00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10905A90_Member.h"

// Ion Storm's tagged new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class FArchive;

class Class_10E90A64
{
public:
    virtual void Serialize(FArchive& Ar);

    Class_10E90A64() : Unknown04(0), Unknown08(0), Unknown0C(0) {}

    ~Class_10E90A64()
    {
        if (Unknown08)
            delete Unknown08;
        if (Unknown0C)
            delete Unknown0C;
    }

    int Unknown04;
    void* Unknown08;
    void* Unknown0C;
};

// The four byte object the function fills with the value it is given.
class Class_10BBDDE0_Unknown08
{
public:
    Class_10BBDDE0_Unknown08(int Value) : Unknown00(Value) {}

    int Unknown00;
};

class Class_10BBDDE0
{
public:
    void FUN_10bbdde0(int Key, int Value);

    char Pad00[0x18];
    cIntArray Unknown18;
};

// FUNCTION: 0x10BBDDE0 ?FUN_10bbdde0@Class_10BBDDE0@@QAEXHH@Z
void Class_10BBDDE0::FUN_10bbdde0(int Key, int Value)
{
    cIntArray* Array = &Unknown18;
    int Count = Unknown18.Count;
    for (int i = 0; i < Count; i++)
    {
        Class_10E90A64* Item = (Class_10E90A64*)Unknown18.Data[i];
        if (Item->Unknown04 == Key)
        {
            if (Item->Unknown08)
                delete Item->Unknown08;
            GetAllocator()->Virtual8(0, 0);
            Class_10BBDDE0_Unknown08* NewValue = new(0, 0, 0, 0, 0) Class_10BBDDE0_Unknown08(Value);
            Item->Unknown08 = NewValue;
            GetAllocator()->Virtual9();
            return;
        }
    }
    GetAllocator()->Virtual8(0, 0);
    Class_10E90A64* Item = new(0, 0, 0, 0, 0) Class_10E90A64;
    Class_10BBDDE0_Unknown08* NewValue = new(0, 0, 0, 0, 0) Class_10BBDDE0_Unknown08(Value);
    Item->Unknown08 = NewValue;
    GetAllocator()->Virtual9();
    Item->Unknown04 = Key;
    int N = Array->Count;
    Array->SetCount(N + 1);
    Array->Data[N] = (int)Item;
}
