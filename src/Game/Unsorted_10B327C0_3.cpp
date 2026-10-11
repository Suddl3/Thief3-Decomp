// Game/Unsorted_10B327C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B47660.h"
#include "Game/Class_10B39580.h"
#include "Game/Struct_10AA3520.h"

class Class_10B21340
{
public:
    char Unknown00[0x400];
    int Unknown400;
    char Unknown404[0x3C];
    int Unknown440;
    int Unknown444;
    char Unknown448[0x1C];
    int Unknown464;

    void FUN_10b21340();
};

class Object_10B4CA50_A
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, FString* C, FString* D, FString* E, int F, int G);
    virtual void Virtual5();
    virtual void Virtual6(int A);
};

class Class_10B32B50
{
public:
    void FUN_10b32b50(Class_10B21340* A);
    void FUN_10b31fb0(int* A, Class_10B21340* B);
    void FUN_10b32620(Class_10B21340* A);
    void FUN_10b326b0(Class_10B21340* A);

    char Unknown00[0x32];
    bool Unknown32;
    int Unknown34;
};

extern const char DAT_10e7bdd0[];

extern const char* DAT_10ff3810;

extern const char* DAT_10ff3814;

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B32B50 ?FUN_10b32b50@Class_10B32B50@@QAEXPAVClass_10B21340@@@Z
void Class_10B32B50::FUN_10b32b50(Class_10B21340* A)
{
    ((Class_10B39580*)((Class_10AA82D0*)this)->FUN_10aa82d0())->FUN_10b39580(0x6c, 0);
    int Local[3];
    Unknown32 = true;
    FUN_10b31fb0(Local, A);
    Unknown34 = Local[0] - A->Unknown400;
    A->FUN_10b21340();
    FUN_10b32620(A);
    DAT_10f35dec->Unknown64->Virtual6(A->Unknown444);
    {
        FString First(DAT_10e7bdd0);
        FString Second(DAT_10ff3810);
        FString Third(DAT_10ff3814);
        DAT_10f35dec->Unknown64->Virtual4(A->Unknown440, A->Unknown444, &Third, &Second, &First, 0, 0);
    }
    FUN_10b326b0(A);
}
