// Game/Class_10E90D70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

class Class_10BC4BE0_Member;

class Class_10E90C58;

double FUN_10c00480();

void FUN_10c28d20();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E90C58
{
public:
    virtual void FUN_10bc4be0();

    Class_10E90C58(void* Owner)
    {
        Unknown04 = (Class_10BC4BE0_Member*)Owner;
    }

    Class_10BC4BE0_Member* Unknown04;
};

class Class_10E90D70
{
public:
    virtual void Virtual0();

    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    int Unknown04;
    int Unknown08;
    float Unknown0C;
    int Unknown10;
    bool Unknown14;
    Class_10E90C58* Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    Class_10BFBD70 Unknown28;
    Class_10BFBD70 Unknown34;
};

// FUNCTION: 0x10BC55A0 ??0Class_10E90D70@@QAE@HH@Z
Class_10E90D70::Class_10E90D70(int A, int B)
    : Unknown04(A), Unknown08(B), Unknown0C(FUN_10c00480()), Unknown10(), Unknown14(), Unknown18(),
      Unknown1C(), Unknown20(), Unknown24(), Unknown28(), Unknown34()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown18 = new(0, 0, 0, 0, 0) Class_10E90C58(this);
    FUN_10905aa0()->Virtual9();
    FUN_10c28d20();
}
