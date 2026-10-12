// Game/Unsorted_10BA2330_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C630.h"
#include "Game/Class_10E8C634.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c1d4[];

extern void* DAT_10e8c1d0[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E8C1D4 : public Class_10E6DC88
{
public:
    Class_10E8C1D4() : Class_10E6DC88(0x28)
    {
        Unknown00 = DAT_10e8c1d4;
        Unknown0C = DAT_10e8c1d0;
    }

    void* Unknown0C;
    int Unknown10;
};

extern void* DAT_10e8c1f0[];

extern void* DAT_10e97bc8[];

class Class_10BA3340 : public Class_10E6DC88
{
public:
    Class_10BA3340() : Class_10E6DC88(0x20)
    {
        Unknown00 = DAT_10e8c1f0;
        Unknown0C = DAT_10e97bc8;
    }

    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10BA32B0 ?Create@Class_10E8C630@@UAEPAVClass_10E8C1D4@@XZ
Class_10E8C1D4* Class_10E8C630::Create()
{
    const int& Tag = 0;
    return new(Tag, 0, 0, 0, 0) Class_10E8C1D4;
}

// FUNCTION: 0x10BA3340 ?Create@Class_10E8C634@@UAEPAVClass_10BA3340@@XZ
Class_10BA3340* Class_10E8C634::Create()
{
    return new(0, 0, 0, 0, 0) Class_10BA3340;
}
