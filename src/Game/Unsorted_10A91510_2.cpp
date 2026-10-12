// Game/Unsorted_10A91510_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7C0.h"
#include "Game/Class_10E5D7C4.h"
#include "Game/Class_10E5D7C8.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6caac[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CAAC : public Class_10EB766C
{
public:
    Class_10E6CAAC()
    {
        VTable = DAT_10e6caac;
    }
};

class Class_10C08940
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
    virtual void* Virtual8();
};

bool FUN_10a491b0(void* A);

class Class_10978090
{
public:
    virtual void Virtual0();

    Class_10C08940* FUN_10978090();
};

class Class_10E6CAC8 : public Class_10978090
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool FUN_10a91e50(int A, int B);
};

extern void* DAT_10e6cae4[];

class Class_10E6CAE4 : public Class_10EB766C
{
public:
    Class_10E6CAE4()
    {
        VTable = DAT_10e6cae4;
    }
};

extern void* DAT_10e6cb00[];

class Class_10E6CB00 : public Class_10EB766C
{
public:
    Class_10E6CB00()
    {
        VTable = DAT_10e6cb00;
    }
};

// FUNCTION: 0x10A91B50 ?Create@Class_10E5D7C0@@UAEPAVClass_10E6CAAC@@XZ
Class_10E6CAAC* Class_10E5D7C0::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CAAC* Result = new(0, 0, 0, 0, 0) Class_10E6CAAC;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A91E50 ?FUN_10a91e50@Class_10E6CAC8@@UAE_NHH@Z
bool Class_10E6CAC8::FUN_10a91e50(int A, int B)
{
    return FUN_10a491b0(FUN_10978090()->Virtual8()) != 0;
}

// FUNCTION: 0x10A91F10 ?Create@Class_10E5D7C4@@UAEPAVClass_10E6CAE4@@XZ
Class_10E6CAE4* Class_10E5D7C4::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CAE4* Result = new(0, 0, 0, 0, 0) Class_10E6CAE4;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A922C0 ?Create@Class_10E5D7C8@@UAEPAVClass_10E6CB00@@XZ
Class_10E6CB00* Class_10E5D7C8::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CB00* Result = new(0, 0, 0, 0, 0) Class_10E6CB00;
    GetAllocator()->Virtual9();
    return Result;
}
