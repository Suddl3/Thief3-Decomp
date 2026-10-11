// Game/Unsorted_10B369B0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10E65574.h"
#include "Game/WindowManager.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

void* FUN_10a4bd70(int A);

void* FUN_10b154c0();

class Class_1090A780
{
public:
    operator int() { return (int)this; }

    ~Class_1090A780()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10B1B8A0
{
public:
    void FUN_10b1afd0(void* A, void* B);
};

Class_10B1B8A0* FUN_10b1b600();

class Class_10B369B0_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void* Virtual4(int A);
};

class Class_10B369B0_Result
{
public:
    char Pad00[0xE8];
    int Unknown0E8;
    int Unknown0EC;
};

extern WindowManager* GWindowManager;

// FUNCTION: 0x10B369B0 ?FUN_10b369b0@@YGHHHPAVClass_10B369B0_Param@@@Z
int __stdcall FUN_10b369b0(int A, int B, Class_10B369B0_Param* P)
{
    Class_10C08940* R1 = ((Class_10978090*)P->Virtual4(0))->FUN_10978090();
    Class_10E65574* O2 = (Class_10E65574*)P->Virtual4(1);
    Class_10B369B0_Result* Y = (Class_10B369B0_Result*)FUN_10a4bd70((int)O2->Class_10E65574::FUN_10b34b10());
    FUN_10b1b600()->FUN_10b1afd0(Y, R1);
    if (GWindowManager)
    {
        int W;
        if (Y->Unknown0EC == 0)
            W = 0;
        else
            W = Y->Unknown0E8;
        ((WindowManager*)FUN_10b154c0())->FUN_10b16110(W, (int)R1);
    }
    return 1;
}
