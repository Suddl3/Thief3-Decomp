// Game/Unsorted_10A8F9A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C08940.h"
#include "Game/Class_10E5D788.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c90c[];

extern void* DAT_10e6c908[];

// Constructed by 0x10AAF5B0: a primary table at +0x0 and a second base's at +0xC.
class Class_10E6DC88
{
public:
    Class_10E6DC88(int Value);

    void** VTable;
    int Unknown04;
    int Unknown08;
    void** VTable0C;
    int Unknown10;
};

// Its primary table is folded with Class_10E6C90C's; the second base's table
// (0x10E6C908) is its own.
class Class_10E6C908 : public Class_10E6DC88
{
public:
    Class_10E6C908() : Class_10E6DC88(0xb)
    {
        VTable = DAT_10e6c90c;
        VTable0C = DAT_10e6c908;
    }
};

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

struct Struct_10A8F9A0
{
    char Unknown00[4];
    int Unknown04;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    Class_10C08940* FUN_10978090();

    Class_10C08940* Unknown04;
};

class Class_10AAB5C0 : public Class_10978090
{
public:
    int FUN_10aab5c0();

    int Unknown08;
};

class Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, Struct_10A8F9A0* C, int* D) = 0;
};

class Class_10E6C904 : public Class_10AAB5C0, public Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, Struct_10A8F9A0* C, int* D);
};

// FUNCTION: 0x10A8F9A0 ?Virtual0@Class_10E6C904@@UAEHHHPAUStruct_10A8F9A0@@PAH@Z
int Class_10E6C904::Virtual0(int A, int B, Struct_10A8F9A0* C, int* D)
{
    if (C && DAT_10f35dec->Unknown08 && C->Unknown04 == DAT_10f35dec->Unknown08)
        return FUN_10978090()->Virtual3(Virtual4(), FUN_10aab5c0());
}

// FUNCTION: 0x10A8F9F0 ?FUN_10a8f9f0@Class_10E5D788@@UAEPAVClass_10E6C908@@XZ
Class_10E6C908* Class_10E5D788::FUN_10a8f9f0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C908* Result = new(0, 0, 0, 0, 0) Class_10E6C908;
    FUN_10905aa0()->Virtual9();
    return Result;
}
