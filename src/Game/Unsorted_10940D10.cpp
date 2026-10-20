// Game/Unsorted_10940D10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1091ABB0.h"
#include "Game/Class_10DB58F0.h"

extern int DAT_10efefbc;

class IDirect3DDevice8;

extern IDirect3DDevice8* GDirect3DDevice8;

Class_10DB58F0* FUN_10db58f0();

class Class_10940D10_Unknown308
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_10940D10
{
public:
    bool FUN_10940d10(Class_1091ABB0* Arg);

    char Pad[0x308];
    Class_10940D10_Unknown308* Unknown308;
};

int FUN_10d3b710(const char* Name, int* Out, int A, int B);

void FUN_10d3aac0(int* Out);

void FUN_10d3aa40(int* Object);

// the render entry point: 15 arguments, the callee pops them
int __stdcall FUN_10d6c149(IDirect3DDevice8* Device, int Object, int Data, int C, int D,
                           int E, int F, int G, int H, int I, int J, int K, int L, int M,
                           Class_10940D10_Unknown308** Out);

// FUNCTION: 0x10940D10 ?FUN_10940d10@Class_10940D10@@QAE_NPAVClass_1091ABB0@@@Z
bool Class_10940D10::FUN_10940d10(Class_1091ABB0* Arg)
{
    int Data;
    cString Name;
    int Object;
    int Result = 0;
    if (Unknown308)
    {
        Unknown308->Virtual2();
        Unknown308 = 0;
    }
    FUN_10db58f0()->Virtual24(*Arg->Unknown00, 8, &Name, 1);
    if (FUN_10d3b710(*Name, &Data, 0, 0))
    {
        // the object the renderer builds into
        Object = 0;
        FUN_10d3aac0(&Object);
        if (Object)
        {
            GetAllocator()->Virtual8(0, 0);
            Result = FUN_10d6c149(GDirect3DDevice8, Object, Data, -1, -1, 1, 0, 0x15,
                                  DAT_10efefbc, 1, 1, 0, 0, 0, &Unknown308);
            GetAllocator()->Virtual9();
            FUN_10d3aa40(&Object);
        }
    }
    return Result == 0;
}
