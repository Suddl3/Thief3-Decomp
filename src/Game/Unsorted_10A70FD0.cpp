// Game/Unsorted_10A70FD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A70FD0.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10A71030.h"
#include "Game/Class_10C070C0.h"
#include "Game/Class_10C070C0_Result.h"

extern float DAT_10eafbdc;

class Class_10E6B594
{
public:
    virtual ~Class_10E6B594();
};

class Class_10E6B610 : public Class_10E6B594
{
public:
    Class_10E6B610(Class_10C070C0* A);

    float Unknown04;
    float Unknown08;
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A70FD0 ?FUN_10a70fd0@Class_10A70FD0@@QAEPAXHH@Z
void* Class_10A70FD0::FUN_10a70fd0(int A, int B)
{
    if (Unknown04 != 0)
        GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    void* Memory = operator new(A * 52, Tag, 0, 0, 0, 0);
    if (Unknown04 != 0)
        GetAllocator()->Virtual9();
    return Memory;
}

// FUNCTION: 0x10A710E0 ??0Class_10E6B610@@QAE@PAVClass_10C070C0@@@Z
Class_10E6B610::Class_10E6B610(Class_10C070C0* A)
{
    Class_10C070C0_Result Result;
    A->FUN_10c070c0(0x8038b, &Result);
    if (Result.Unknown10 <= DAT_10eafbdc)
        Unknown04 = Unknown08 = 1.0f;
    else
        Unknown04 = Unknown08 = Result.Unknown10;
}
