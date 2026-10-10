// Game/Class_10E8C638.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C638.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E5B578
{
public:
    virtual void Virtual0() = 0;
};

class Class_10E6DC88_Primary
{
public:
    virtual void Virtual0();

    char Unknown04[8];
};

class Class_10E6DC88 : public Class_10E6DC88_Primary, public Class_10E5B578
{
public:
    Class_10E6DC88(int Value);

    int Unknown10;
};

class Class_10E8C210 : public Class_10E6DC88
{
public:
    Class_10E8C210() : Class_10E6DC88(0x21)
    {
    }

    ~Class_10E8C210();

    virtual void Virtual0();
};

// FUNCTION: 0x10BA33F0 ?FUN_10ba33f0@Class_10E8C638@@UAEPAVClass_10E8C210@@XZ
Class_10E8C210* Class_10E8C638::FUN_10ba33f0()
{
    return new(0, 0, 0, 0, 0) Class_10E8C210;
}
