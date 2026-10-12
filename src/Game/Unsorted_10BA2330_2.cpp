// Game/Unsorted_10BA2330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6DC88_Primary.h"
#include "Game/Class_10E8C5D0.h"
#include "Game/Class_10E8C628.h"
#include "Game/Class_10E984BC.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E5B578
{
public:
    virtual void Virtual0();
};

class Class_10E6DC88 : public Class_10E6DC88_Primary, public Class_10E5B578
{
public:
    Class_10E6DC88(int A);
};

class Class_10E8C194 : public Class_10E6DC88
{
public:
    Class_10E8C194() : Class_10E6DC88(0x22)
    {
    }

    virtual void Virtual0();

    int Unknown10;
};

// FUNCTION: 0x10BA2FB0 ?Create@Class_10E8C5D0@@UAEPAVClass_10E984BC@@HH@Z
Class_10E984BC* Class_10E8C5D0::Create(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E984BC;
}

// FUNCTION: 0x10BA3150 ?Create@Class_10E8C628@@UAEPAVClass_10E8C194@@XZ
Class_10E8C194* Class_10E8C628::Create()
{
    return new(0, 0, 0, 0, 0) Class_10E8C194;
}
