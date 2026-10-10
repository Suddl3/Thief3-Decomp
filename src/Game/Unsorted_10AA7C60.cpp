// Game/Unsorted_10AA7C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA7C60.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e4eac8[];

class Class_10E4EAC8
{
public:
    Class_10E4EAC8(int B)
    {
        Unknown00 = DAT_10e4eac8;
        Unknown04 = B;
    }

    void* Unknown00;
    int Unknown04;
};

class Class_10AA7C60_Member
{
public:
    virtual int Virtual0();
    virtual int Virtual1(int A, Class_10E4EAC8* Obj);
};

// FUNCTION: 0x10AA7C60 ?FUN_10aa7c60@Class_10AA7C60@@QAEXHH@Z
void Class_10AA7C60::FUN_10aa7c60(int A, int B)
{
    if (Unknown08 && !Unknown0C)
    {
        Class_10E4EAC8* Obj = new(0, 0, 0, 0, 0) Class_10E4EAC8(B);
        Unknown0C = Unknown08->Virtual1(A, Obj);
    }
}
