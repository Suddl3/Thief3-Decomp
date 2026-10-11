// Game/Class_10E8C644.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C644.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c268[];

extern void* DAT_10e8c264[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E8C268 : public Class_10E6DC88
{
public:
    Class_10E8C268() : Class_10E6DC88(0x1f)
    {
        Unknown00 = DAT_10e8c268;
        Unknown0C = DAT_10e8c264;
    }

    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10BA3600 ?FUN_10ba3600@Class_10E8C644@@UAEPAVClass_10E8C268@@XZ
Class_10E8C268* Class_10E8C644::FUN_10ba3600()
{
    return new(0, 0, 0, 0, 0) Class_10E8C268;
}
