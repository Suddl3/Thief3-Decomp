// Game/Unsorted_10C15BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C15D20.h"
#include "Game/Class_10C15D40.h"
#include "Game/Class_10E8D65C.h"
#include "Game/Class_10E98C80.h"

struct Struct_10C15CC0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
};

extern int DAT_10ff7068;

extern Struct_10C15CC0* DAT_10ff706c;

struct Struct_10C15CC0;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C15BC0 ?FUN_10c15bc0@Class_10E8D65C@@QAEXXZ
void Class_10E8D65C::FUN_10c15bc0()
{
    if (!DAT_10ff706c)
        DAT_10ff706c = (Struct_10C15CC0*)new(0, 0, 0, 0, 0) Class_10E98C80[0x400];
    DAT_10ff7068 = 0;
}

// FUNCTION: 0x10C15CC0 ?AllocEntry@@YA_NPAPAUStruct_10C15CC0@@HHHHH@Z
bool AllocEntry(Struct_10C15CC0** Out, int A, int B, int C, int D, int E)
{
    if (DAT_10ff7068 >= 0x400)
        return false;
    *Out = &DAT_10ff706c[DAT_10ff7068];
    (*Out)->Unknown0C = A;
    (*Out)->Unknown10 = B;
    (*Out)->Unknown14 = C;
    (*Out)->Unknown04 = D;
    (*Out)->Unknown08 = E;
    DAT_10ff7068++;
    return true;
}

// FUNCTION: 0x10C15D20 ?FUN_10c15d20@Class_10C15D20@@QAEXHHHH@Z
void Class_10C15D20::FUN_10c15d20(int A, int B, int C, int D)
{
    Unknown0C = A;
    Unknown14 = B;
    Unknown04 = C;
    Unknown08 = D;
}

// FUNCTION: 0x10C15D40 ?FUN_10c15d40@Class_10C15D40@@QAE_NXZ
bool Class_10C15D40::FUN_10c15d40()
{
    return Unknown401C == 0;
}
