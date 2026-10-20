// Game/Unsorted_1093E950.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1091ABB0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10DB58F0.h"

extern int DAT_10efefbc;

class IDirect3DDevice8;

extern IDirect3DDevice8* GDirect3DDevice8;

Class_10905A90_Member* GetAllocator();

Class_10DB58F0* FUN_10db58f0();

int FUN_10d3b710(const char* Name, int* Out, int A, int B);

void FUN_10d3aac0(int* Out);

void FUN_10d3aa40(int* Object);

class Class_1093E9B0_Unknown00
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

// the render entry point: 14 arguments, the callee pops them
int __stdcall FUN_10d6c189(IDirect3DDevice8* Device, int Object, int Data, int C, int D,
                           int E, int F, int G, int H, int I, int J, int K, int L,
                           Class_1093E9B0_Unknown00** Out);

class Class_1093E9B0
{
public:
    Class_1093E9B0_Unknown00* Unknown00;
    bool FUN_1093e9b0(Class_1091ABB0* Arg);
};

// FUNCTION: 0x1093E9B0 ?FUN_1093e9b0@Class_1093E9B0@@QAE_NPAVClass_1091ABB0@@@Z
bool Class_1093E9B0::FUN_1093e9b0(Class_1091ABB0* Arg)
{
    int Data;
    cString Name;
    int Object;

    if (Unknown00)
    {
        Unknown00->Virtual2();
        Unknown00 = 0;
    }
    FUN_10db58f0()->Virtual24(*Arg->Unknown00, 8, &Name, 1);
    if (FUN_10d3b710(*Name, &Data, 0, 0))
    {
        Object = 0;
        FUN_10d3aac0(&Object);
        if (Object)
        {
            GetAllocator()->Virtual8(0, 0);
            int Result = FUN_10d6c189(GDirect3DDevice8, Object, Data, -1, 1, 0, 0x16,
                                      DAT_10efefbc, 1, 1, 0, 0, 0, &Unknown00);
            GetAllocator()->Virtual9();
            FUN_10d3aa40(&Object);
            if (!Result)
                return true;
        }
    }
    return false;
}
