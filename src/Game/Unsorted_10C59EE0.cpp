// Game/Unsorted_10C59EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C59EE0.h"
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
    InnerClass_10c58e90(int B);
};

class Class_10C5A160
{
public:
    Class_10C5A160(Class_10C5A160_Y*& A, int B);

    Class_10C56E40 Unknown00;
    InnerClass_10c58e90 Unknown04;
};

// FUNCTION: 0x10C5A160 ??0Class_10C5A160@@QAE@AAPAVClass_10C5A160_Y@@H@Z
Class_10C5A160::Class_10C5A160(Class_10C5A160_Y*& A, int B)
    : Unknown00(A), Unknown04(B)
{
}
