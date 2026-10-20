// Game/Unsorted_10B9B940_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9C450.h"
#include "Game/Class_10905A90_Member.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

class Class_10BF8CC0
{
public:
    Class_10BF8CC0(int A);

    char Unknown00[0x40];
};

class Class_10BBCBF0
{
public:
    Class_10BBCBF0(int A, Class_10BF8CC0* B);

    char Unknown00[0x348];
};

class Class_10B9D220
{
public:
    Class_10B9D220(Class_10BBCBF0* A);

    char Unknown00[0x48];
};

class Object_10B9C450
{
public:
    Class_10BF8CC0* Unknown00;
    Class_10BBCBF0* Unknown04;
    Class_10B9D220* Unknown08;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10B9B940 ?FUN_10b9b940@Class_10B9C450@@QAEXXZ
void Class_10B9C450::FUN_10b9b940()
{
    Object_10B9C450* Obj = Unknown118;
    if (Obj->Unknown00 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Obj->Unknown00 = new(0, 0, 0, 0, 0) Class_10BF8CC0(Obj->Unknown10);
        GetAllocator()->Virtual9();
    }
    if (Obj->Unknown04 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Obj->Unknown04 = new(0, 0, 0, 0, 0) Class_10BBCBF0(Obj->Unknown10, Obj->Unknown00);
        GetAllocator()->Virtual9();
    }
    if (Obj->Unknown08 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Obj->Unknown08 = new(0, 0, 0, 0, 0) Class_10B9D220(Obj->Unknown04);
        GetAllocator()->Virtual9();
    }
}
