// Game/Unsorted_10AC8670_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC8770.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Object_10B4CA50_A.h"

class Class_10AC8690_Arg2
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10AC8690_Unknown78
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

class UClass;

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70& Found);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

cUObjectLinkManager* FUN_10b0b2b0();

class Class_10B47720;

struct Struct_10B4C2C0;

class Class_10B39870
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Pad10[0x68];
    Class_10AC8690_Unknown78 Unknown78;
};

// FUNCTION: 0x10AC8690 ?FUN_10ac8690@Class_10AC8770@@QAEXHHMH@Z
void Class_10AC8770::FUN_10ac8690(int A, int B, float C, int D)
{
    Class_10AC8690_Arg2* Src = (Class_10AC8690_Arg2*)B;
    int X = (int)((D - Src->Unknown00) * C);
    int Z = Src->Unknown08;
    int Y = Src->Unknown04;
    Class_10BFBD70 Found;
    FUN_10b0b2b0()->Virtual4(0, A, 0x281B9D0, Found);
    Class_10AC8690_Unknown78 Value;
    Value.Unknown00 = X;
    Value.Unknown04 = Y;
    Value.Unknown08 = Z;
    Class_10B39870* Target = (Class_10B39870*)((Class_10AA82D0*)Found.Data[0])->FUN_10aa82d0();
    Target->Unknown78 = Value;
    DAT_10f35dec->Unknown64->Virtual18(A, 0);
}
