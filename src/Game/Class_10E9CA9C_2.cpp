// Game/Class_10E9CA9C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10905A90_Member.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C61C20_Param;

class Class_10C62290;

class Class_10E9CA9C
{
public:
    virtual void Virtual0();
    virtual void __stdcall FUN_10c62760(const char* Text);
    virtual void FUN_10c61c20(Class_10C61C20_Param* p1);
    virtual void Virtual3();
    virtual Class_10C62290* FUN_10c62550(int A, const char* B);

    char Unknown04;
    char Pad05[0x3];
    Class_109081E0 Unknown08;
};

class Class_10C62290
{
public:
    Class_10C62290(int A);
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(const Class_109081E0& A);

    char Unknown04[0x138];
};

// FUNCTION: 0x10C62550 ?FUN_10c62550@Class_10E9CA9C@@UAEPAVClass_10C62290@@HPBD@Z
Class_10C62290* Class_10E9CA9C::FUN_10c62550(int A, const char* B)
{
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        Class_10C62290* Obj = new(0, 0, 0, 0, 0) Class_10C62290(A);
        FUN_10905aa0()->Virtual9();
        {
            Class_109081E0 Name(B);
            Obj->Virtual3(Name);
        }
        return Obj;
    }
    return 0;
}
