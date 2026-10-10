// Game/Unsorted_10B92E30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B822C0.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10E894C8_Unknown10.h"
#include "Game/Class_10E894C8_Unknown54.h"

extern void* DAT_10e89aa0[];

class Class_10DA0420
{
public:
    Class_10DA0420(int A, int C);
    ~Class_10DA0420();
};

class Class_10E89AA0 : public Class_10DA0420
{
public:
    Class_10E89AA0(int A, int B, int C, int D);

    void FUN_10b92f40(int A, int B);

    void** Unknown00;
};

class Class_10B8AC90;

class Class_10E894C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b92e50();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B822C0* Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void FUN_10b92d20(int A);

    void FUN_10da03d0(int A);
    void FUN_10da0220(int A);

    char Unknown04[0xC];
    Class_10E894C8_Unknown10* Unknown10;
};

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* A, int B);

// FUNCTION: 0x10B92E50 ?FUN_10b92e50@Class_10E894C8@@UAEXXZ
void Class_10E894C8::FUN_10b92e50()
{
    if (Unknown10)
    {
        Class_10E894C8_Unknown54* Member = Unknown10->Unknown54;
        if (Member && Member->Virtual7() < 3)
        {
            FUN_10da0220(0);
            FUN_10da0220(1);
        }
    }
    Class_10B822C0* Obj = Virtual6();
    if (Obj && Obj->Unknown04 == 2)
        Obj->Virtual15();
}

// FUNCTION: 0x10B93390 ??0Class_10E89AA0@@QAE@HHHH@Z
Class_10E89AA0::Class_10E89AA0(int A, int B, int C, int D)
    : Class_10DA0420(A, C)
{
    Unknown00 = DAT_10e89aa0;
    FUN_10b92f40(B, D);
}
