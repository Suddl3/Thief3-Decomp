// Game/Class_10E7C584.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109A62E0.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_109A62E0;

class Class_10B48300;

class Class_10E7C584;

class Class_10B48300
{
public:
    Class_10B48300(Class_109A62E0* A, int B, int C);

    virtual ~Class_10B48300();

    void FUN_10b470c0();
    void FUN_10b48300(int A);

    char Unknown04[0x54];
};

class Class_10E7C584
{
public:
    Class_10E7C584(Class_109A62E0* A);

    virtual void FUN_10b39500(int A);

    ~Class_10E7C584();

    int Unknown04;
    Class_109A62E0* Unknown08;
    Class_10B48300* Unknown0C[8];
};

// FUNCTION: 0x10B398D0 ??0Class_10E7C584@@QAE@PAVClass_109A62E0@@@Z
Class_10E7C584::Class_10E7C584(Class_109A62E0* A)
{
    Unknown04 = 0;
    Unknown08 = A;
    int Index = 0;
    for (int i = 0; i < 8; i++)
    {
        Unknown0C[i] = new(0, 0, 0, 0, 0) Class_10B48300(A, Index, Index + 1);
        Index += 2;
    }
    Unknown0C[0]->FUN_10b470c0();
    A->FUN_109a62c0(this);
}
