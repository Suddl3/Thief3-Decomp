// Game/Class_10E8C63C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C63C.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c22c[];

extern void* DAT_10e70820[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E8C22C : public Class_10E6DC88
{
public:
    Class_10E8C22C() : Class_10E6DC88(0x1d)
    {
        Unknown00 = DAT_10e8c22c;
        Unknown0C = DAT_10e70820;
    }

    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10BA34A0 ?FUN_10ba34a0@Class_10E8C63C@@UAEPAVClass_10E8C22C@@XZ
Class_10E8C22C* Class_10E8C63C::FUN_10ba34a0()
{
    return new(0, 0, 0, 0, 0) Class_10E8C22C;
}
