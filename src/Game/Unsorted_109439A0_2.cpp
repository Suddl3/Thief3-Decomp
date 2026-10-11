// Game/Unsorted_109439A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A32000.h"

extern "C" void* memcpy(void*, const void*, unsigned int);

class Object_10944D50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int A, int B, int* C);
    virtual void Virtual7();
};

// FUNCTION: 0x10944CD0 ?FUN_10944cd0@@YGXPAVObject_10944D50@@PAVClass_10A32000@@PAH@Z
void __stdcall FUN_10944cd0(Object_10944D50* A, Class_10A32000* C, int* Offset)
{
    int Base = 0;
    A->Virtual6(0, 0, &Base);
    int Size = A->Virtual4() * A->Virtual3();
    char* Src = (char*)Base;
    C->FUN_10a32000(*Offset + Size);
    memcpy(C->Unknown08 + *Offset, Src, Size);
    *Offset += Size;
    A->Virtual7();
}
