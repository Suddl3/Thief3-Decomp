// Game/Unsorted_10B7DD80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10D9FEE0.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10905A90_Member.h"

struct Struct_10D9E5E0_Param;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

Class_10D9B090* FUN_10d9dcb0();

void FUN_10b7def0(class Class_10E89540* Obj, int A);

class Class_10B7DFF0_Unknown10
{
public:
    char Pad00[0x28];
    int Unknown28;
};

class Class_10E89540
{
public:
    Class_10E89540(int A, int B);

    char Pad00[0x10];
    Class_10B7DFF0_Unknown10* Unknown10;
    char Pad14[0x5];
    bool Unknown19;
    char Pad1A[0x16];
};

// FUNCTION: 0x10B7DFF0 ?FUN_10b7dff0@@YGPAVClass_10E89540@@HHH@Z
Class_10E89540* __stdcall FUN_10b7dff0(int A, int B, int C)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E89540* Obj = new(0, 0, 0, 0, 0) Class_10E89540(B, A);
    GetAllocator()->Virtual9();
    Class_10B7DFF0_Unknown10* Field = Obj->Unknown10;
    Field->Unknown28 = (Field->Unknown28 & 0xffffffe1) | 1;
    FUN_10d9dcb0()->FUN_10d9e490((Struct_10D9E5E0_Param*)Obj);
    ((Class_10D9FEE0*)Obj)->FUN_10da0000(true);
    Obj->Unknown19 = true;
    FUN_10b7def0(Obj, A);
    return Obj;
}
