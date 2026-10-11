// Game/Unsorted_10C58FD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5A160_Y.h"

class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C5A160_Y*& A);
    ~Class_10C56E40();

    Class_10C5A160_Y* Unknown00;
};

inline Class_10C56E40::Class_10C56E40(Class_10C5A160_Y*& A)
{
    Class_10C5A160_Y* P = A;
    Unknown00 = P;
    if (P)
        P->Virtual1();
}

class InnerClass_10c58e90
{
public:
    InnerClass_10c58e90(int& B);
};

struct Struct_10C58FD0
{
    Class_10C5A160_Y* Unknown00;
    int Unknown04;
};

class Class_10C58FD0
{
public:
    Class_10C58FD0(Struct_10C58FD0& A);

    Class_10C56E40 Unknown00;
    InnerClass_10c58e90 Unknown04;
};

// FUNCTION: 0x10C58FD0 ??0Class_10C58FD0@@QAE@AAUStruct_10C58FD0@@@Z
Class_10C58FD0::Class_10C58FD0(Struct_10C58FD0& A)
    : Unknown00(A.Unknown00), Unknown04(A.Unknown04)
{
}
