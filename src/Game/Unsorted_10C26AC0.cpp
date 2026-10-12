// Game/Unsorted_10C26AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C26A60.h"
#include "Game/Class_10C26B60.h"
#include "Game/Class_10E9AFA4.h"

struct Struct_10C26A60;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

struct Struct_10C26C80
{
};

class Class_10C26C10
{
public:
    void FUN_10c26c10(Class_10BFBD70* Other);

    int Count;
    int Unknown04;
    int* Data;
};

class Class_10E9925C
{
public:
    virtual void FUN_10c26c80();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();

    char Pad04[0x34];
    Class_10C26C10 Unknown38;
};

// FUNCTION: 0x10C26B60 ?FUN_10c26b60@Class_10C26B60@@QAEXHHH@Z
void Class_10C26B60::FUN_10c26b60(int A, int B, int C)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E9AFA4* Obj = new(0, 0, 0, 0, 0) Class_10E9AFA4(A, B, C);
    GetAllocator()->Virtual9();
    FUN_10c26a60((Struct_10C26A60*)Obj, 0);
}

// FUNCTION: 0x10C26C80 ?FUN_10c26c80@Class_10E9925C@@UAEXXZ
void Class_10E9925C::FUN_10c26c80()
{
    Class_10BFBD70* Copy = new(0, 0, 0, 0, 0) Class_10BFBD70;
    for (int i = 0; i < Unknown38.Count; i++)
    {
        int Value = Unknown38.Data[i];
        int Index = Copy->Count;
        Copy->FUN_10bfbd70(Index + 1);
        Copy->Data[Index] = Value;
    }
    Unknown38.FUN_10c26c10(Copy);
    for (int i = 0; i < Copy->Count; i++)
    {
        delete (Struct_10C26C80*)Copy->Data[i];
    }
    Copy->Count = 0;
    delete Copy;
    Virtual3();
}
