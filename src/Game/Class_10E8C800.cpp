// Game/Class_10E8C800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10978090.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10BAD190.h"

// The object passed as the second argument: its slot 8 takes no arguments and returns a pointer.
class Class_10BB3B00_Param2
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

// The object passed as the third argument.
class Class_10BB3B00_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AB37C0* Virtual4(int A);
};

UObject* FUN_10c00710(void* A, int B);

class UClass* FUN_109014a0();

// The placeholder class of the vtable at 0x10E8C800; this function is its slot 2.
class Class_10E8C800
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb3b00(int A, Class_10BB3B00_Param2* B, Class_10BB3B00_Param3* C);
};

class Class_10BAD190;

class UObject;

// FUNCTION: 0x10BB3B00 ?FUN_10bb3b00@Class_10E8C800@@UAEHHPAVClass_10BB3B00_Param2@@PAVClass_10BB3B00_Param3@@@Z
int Class_10E8C800::FUN_10bb3b00(int A, Class_10BB3B00_Param2* B, Class_10BB3B00_Param3* C)
{
    Class_10C08940* Result;
    if (B && B->Virtual8() && C && C->Virtual3() >= 2)
    {
        Result = ((Class_10978090*)C->Virtual4(0))->FUN_10978090();
        cString Local(*(cString*)C->Virtual4(1)->GetName());
        if (Local.IsEmpty())
            return 0;
        _strlwr(Local.Unknown00);
        UObject* Obj = FUN_10c00710(B->Virtual8(), (int)&Local);
        if (Obj && Obj->IsA(FUN_109014a0()))
            ((Class_1098E3D0*)Obj)->FUN_1098e3d0(0x800465, &Result);
        return 1;
    }
    return 0;
}
