// Game/Class_10E5D7E4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5D7E4.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cc10[];

extern void* DAT_10e6cc0c[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CC10 : public Class_10E6DC88
{
public:
    Class_10E6CC10() : Class_10E6DC88(0x58)
    {
        Unknown00 = DAT_10e6cc10;
        Unknown0C = DAT_10e6cc0c;
    }

    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A93060 ?FUN_10a93060@Class_10E5D7E4@@UAEPAVClass_10E6CC10@@XZ
Class_10E6CC10* Class_10E5D7E4::FUN_10a93060()
{
    return new(0, 0, 0, 0, 0) Class_10E6CC10;
}
