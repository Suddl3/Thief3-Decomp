// Game/Unsorted_10A94CB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D80C.h"
#include "Game/Class_10E5D810.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cd8c[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CD8C : public Class_10EB766C
{
public:
    Class_10E6CD8C()
    {
        VTable = DAT_10e6cd8c;
    }
};

extern void* DAT_10e6cda8[];

class Class_10E6CDA8 : public Class_10EB766C
{
public:
    Class_10E6CDA8()
    {
        VTable = DAT_10e6cda8;
    }
};

// FUNCTION: 0x10A94E80 ?FUN_10a94e80@Class_10E5D80C@@UAEPAVClass_10E6CD8C@@XZ
Class_10E6CD8C* Class_10E5D80C::FUN_10a94e80()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CD8C* Result = new(0, 0, 0, 0, 0) Class_10E6CD8C;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A94F20 ?FUN_10a94f20@Class_10E5D810@@UAEPAVClass_10E6CDA8@@XZ
Class_10E6CDA8* Class_10E5D810::FUN_10a94f20()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CDA8* Result = new(0, 0, 0, 0, 0) Class_10E6CDA8;
    GetAllocator()->Virtual9();
    return Result;
}
