// Game/Unsorted_10A8D940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D778.h"
#include "Game/Class_10E5D77C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c890[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6C890 : public Class_10EB766C
{
public:
    Class_10E6C890()
    {
        VTable = DAT_10e6c890;
    }
};

extern void* DAT_10e6c8ac[];

class Class_10E6C8AC : public Class_10EB766C
{
public:
    Class_10E6C8AC()
    {
        VTable = DAT_10e6c8ac;
    }
};

// FUNCTION: 0x10A8D9E0 ?FUN_10a8d9e0@Class_10E5D77C@@UAEPAVClass_10E6C890@@XZ
Class_10E6C890* Class_10E5D77C::FUN_10a8d9e0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C890* Result = new(0, 0, 0, 0, 0) Class_10E6C890;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A8E0C0 ?FUN_10a8e0c0@Class_10E5D778@@UAEPAVClass_10E6C8AC@@XZ
Class_10E6C8AC* Class_10E5D778::FUN_10a8e0c0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C8AC* Result = new(0, 0, 0, 0, 0) Class_10E6C8AC;
    GetAllocator()->Virtual9();
    return Result;
}
