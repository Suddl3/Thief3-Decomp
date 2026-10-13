// Game/Unsorted_10C067D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AAAEB0.h"
#include "Game/Class_10D38640.h"
#include "Game/cIntArray.h"

struct Struct_10C05610;

struct Struct_10C27CB0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

void ExpandBoundsList(Struct_10C05610* A, Struct_10C27CB0* B, Struct_10C27CB0* C, bool* D);

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C067D0
{
public:
    void FUN_10c067d0(Struct_10C27CB0* A, Struct_10C27CB0* B);

    char Pad00[0x10];
    Class_10AAAEB0* Unknown10;
    char Pad14[0x10];
    Struct_10C27CB0* Unknown24;
    Struct_10C27CB0* Unknown28;
};

// FUNCTION: 0x10C067D0 ?FUN_10c067d0@Class_10C067D0@@QAEXPAUStruct_10C27CB0@@0@Z
void Class_10C067D0::FUN_10c067d0(Struct_10C27CB0* A, Struct_10C27CB0* B)
{
    if (Unknown24 && Unknown28)
    {
        *A = *Unknown24;
        *B = *Unknown28;
        return;
    }
    bool Flag = false;
    for (int i = 0; i < ((cIntArray*)Unknown10->FUN_10aaaeb0())->Count; i++)
    {
        Class_10D38640* Elem = (Class_10D38640*)((cIntArray*)Unknown10->FUN_10aaaeb0())->Data[i];
        ExpandBoundsList((Struct_10C05610*)Elem->FUN_10d38640(), A, B, &Flag);
    }
    GetAllocator()->Virtual8(0, 0);
    Unknown24 = new(0, 0, 0, 0, 0) Struct_10C27CB0(*A);
    Unknown28 = new(0, 0, 0, 0, 0) Struct_10C27CB0(*B);
    GetAllocator()->Virtual9();
}
