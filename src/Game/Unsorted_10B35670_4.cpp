// Game/Unsorted_10B35670_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10EB766C.h"

// Ion Storm's memory manager (0x10905AA0): the allocation happens inside a
// scope of it (slots 8 and 9).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The slot is named Virtual0 in the game (0x10B35E40 is Class_10E7C2CC::Virtual0).
class Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, int C, int* D) = 0;
};

// Copied from include/Game/Class_10E6DC88.h, with the second base's slot named as the game has it.
class Class_10E6DC88 : public Class_10EB766C, public Class_10E5B578
{
public:
    virtual ~Class_10E6DC88();

    Class_10E6DC88(int Value);

    void FUN_10aaf500();

    int Unknown10;
};

class Class_10E7C2CC : public Class_10E6DC88
{
public:
    Class_10E7C2CC() : Class_10E6DC88(0x71)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

class Class_10E7955C
{
public:
    virtual Class_10E7C2CC* FUN_10b35670();
};

// FUNCTION: 0x10B35670 ?FUN_10b35670@Class_10E7955C@@UAEPAVClass_10E7C2CC@@XZ
Class_10E7C2CC* Class_10E7955C::FUN_10b35670()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E7C2CC* Result = new(0, 0, 0, 0, 0) Class_10E7C2CC;
    FUN_10905aa0()->Virtual9();
    return Result;
}
