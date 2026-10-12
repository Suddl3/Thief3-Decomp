// Game/Unsorted_10BBFF10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BC0F30.h"
#include "Game/Class_10905A90_Member.h"

class Class_10BBFF10
{
public:
    void FUN_10bbff10();
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10BC00A0_Unknown00
{
public:
    Class_10BC00A0_Unknown00()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown28 = 0;
        Unknown2C = 0;
        Unknown30 = 0;
        Unknown34 = 0;
        Unknown38 = 0;
        Unknown3C = 0;
        Unknown40 = 0;
        Unknown44 = 0;
        Unknown48 = 0;
        Unknown4C = 0;
        Unknown50 = 0;
        Unknown54 = 0;
        Unknown58 = 0;
        Unknown5C = 0;
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    int Unknown54;
    int Unknown58;
    int Unknown5C;
};

class Class_10BC00A0
{
public:
    Class_10BC00A0();

    Class_10BC00A0_Unknown00* Unknown00;
};

// FUNCTION: 0x10BC00A0 ??0Class_10BC00A0@@QAE@XZ
Class_10BC00A0::Class_10BC00A0()
{
    GetAllocator()->Virtual8(0, 0);
    Unknown00 = new(0, 0, 0, 0, 0) Class_10BC00A0_Unknown00;
    GetAllocator()->Virtual9();
}

// FUNCTION: 0x10BC0F30 ?Destroy@Class_10BC0F30@@QAEXXZ
void Class_10BC0F30::Destroy()
{
    Class_10BBFF10* Object = Unknown00;
    if (Object)
    {
        Object->FUN_10bbff10();
        ::operator delete(Object);
    }
}
