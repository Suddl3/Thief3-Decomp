// Game/Unsorted_10A95050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D808.h"
#include "Game/Class_10E5D968.h"
#include "Game/Class_10E5D96C.h"
#include "Game/Class_10E5D970.h"
#include "Game/Class_10E5D974.h"
#include "Game/Class_10E5D978.h"
#include "Game/Class_10E5D97C.h"
#include "Game/Class_10E6CDC4.h"
#include "Game/Class_10E6CDD0.h"
#include "Game/Class_10E6CDDC.h"
#include "Game/Class_10E6CDE8.h"
#include "Game/Class_10E6CDF4.h"
#include "Game/Class_10E6CE1C.h"

class Class_10AAB5C0_Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7(int p1);
};

class Class_10AAB5C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    int FUN_10aab5c0();
};

class Class_10E6CE50 : public Class_10AAB5C0
{
public:
    virtual void SetTimeRemaining();

    char Unknown04[8];
    int m_TimeRemaining;
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6ce00[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CE00 : public Class_10EB766C
{
public:
    Class_10E6CE00()
    {
        VTable = DAT_10e6ce00;
    }
};

// FUNCTION: 0x10A95050 ?FUN_10a95050@Class_10E5D96C@@UAEPAVClass_10E6CDC4@@XZ
Class_10E6CDC4* Class_10E5D96C::FUN_10a95050()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CDC4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CDC4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CDC4*>(Memory)->FUN_10a94b00();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A950A0 ?FUN_10a950a0@Class_10E5D970@@UAEPAVClass_10E6CDD0@@XZ
Class_10E6CDD0* Class_10E5D970::FUN_10a950a0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CDD0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CDD0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CDD0*>(Memory)->FUN_10a94b70();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A950F0 ?FUN_10a950f0@Class_10E5D974@@UAEPAVClass_10E6CDDC@@XZ
Class_10E6CDDC* Class_10E5D974::FUN_10a950f0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CDDC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CDDC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CDDC*>(Memory)->FUN_10a94c00();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95140 ?FUN_10a95140@Class_10E5D978@@UAEPAVClass_10E6CDE8@@XZ
Class_10E6CDE8* Class_10E5D978::FUN_10a95140()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CDE8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CDE8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CDE8*>(Memory)->FUN_10a94c80();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95190 ?FUN_10a95190@Class_10E5D97C@@UAEPAVClass_10E6CDF4@@XZ
Class_10E6CDF4* Class_10E5D97C::FUN_10a95190()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CDF4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CDF4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CDF4*>(Memory)->FUN_10a94c90();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A951E0 ?FUN_10a951e0@Class_10E5D808@@UAEPAVClass_10E6CE00@@XZ
Class_10E6CE00* Class_10E5D808::FUN_10a951e0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CE00* Result = new(0, 0, 0, 0, 0) Class_10E6CE00;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95590 ?FUN_10a95590@Class_10E5D968@@UAEPAVClass_10E6CE1C@@XZ
Class_10E6CE1C* Class_10E5D968::FUN_10a95590()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CE1C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CE1C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CE1C*>(Memory)->FUN_10a95040();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A958F0 ?SetTimeRemaining@Class_10E6CE50@@UAEXXZ
void Class_10E6CE50::SetTimeRemaining()
{
    m_TimeRemaining = ((Class_10AAB5C0_Result*)FUN_10aab5c0())->Virtual7(0);
}
