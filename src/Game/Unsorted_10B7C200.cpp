// Game/Unsorted_10B7C200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10D9B090.h"
#include "Game/Class_10D9FEE0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E894C8.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

Class_10D9B090* FUN_10d9dcb0();

class Object_10B8B420;

class Class_10E89540
{
public:
    Class_10E89540(int A, int B);

    char Pad00[0x19];
    bool Unknown19;
    char Pad1A[0x16];
};

class Class_10B8C4D0
{
public:
    Class_10B8C4D0();
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18(int A, int B, int C);
    void FUN_10b85a10(Class_10E89540* A);

    char Pad04[0x4];
    Class_10E89540* Unknown08;
    char Pad0C[0x120];
};

// FUNCTION: 0x10B7C200 ?FUN_10b7c200@@YGPAVClass_10E89540@@HH@Z
Class_10E89540* __stdcall FUN_10b7c200(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E89540* Obj = new(0, 0, 0, 0, 0) Class_10E89540(B, A);
    GetAllocator()->Virtual9();
    FUN_10d9dcb0()->FUN_10d9e490((Struct_10D9E5E0_Param*)Obj);
    ((Class_10D9FEE0*)Obj)->FUN_10da0000(true);
    Obj->Unknown19 = true;
    ((Class_10E894C8*)Obj)->FUN_10da0220(0);
    GetAllocator()->Virtual8(0, 0);
    Class_10B8C4D0* Obj2 = new(0, 0, 0, 0, 0) Class_10B8C4D0();
    GetAllocator()->Virtual9();
    Obj2->Unknown08 = Obj;
    Obj2->FUN_10b85a10(Obj);
    ((Class_10E894C8*)Obj)->FUN_10b8b420((Object_10B8B420*)Obj2);
    Obj2->Virtual18(1, 1, 0);
    return Obj;
}
