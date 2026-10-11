// Game/Unsorted_10A2F520_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The class whose vtable is at 0x10E66338: a 0x48-byte object with a clone method at slot 1.
class Class_10E66338
{
public:
    virtual void Virtual0();
    virtual Class_10E66338* FUN_10a2f630();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A);
    virtual int Virtual5();

    Class_10E66338();

    void FUN_10a2eeb0(FString* A, int* B, FString* C);

    char Pad04[0x14];
    FString Unknown18;
    FString Unknown24;
    FString Unknown30;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
};

// FUNCTION: 0x10A2F630 ?FUN_10a2f630@Class_10E66338@@UAEPAV1@XZ
Class_10E66338* Class_10E66338::FUN_10a2f630()
{
    Class_10E66338* Copy = new(0, 0, 0, 0, 0) Class_10E66338();
    Copy->Virtual4(Virtual5());
    Copy->FUN_10a2eeb0(&Copy->Unknown18, &Copy->Unknown3C, Unknown3C ? &Unknown18 : 0);
    Copy->FUN_10a2eeb0(&Copy->Unknown24, &Copy->Unknown40, Unknown40 ? &Unknown24 : 0);
    Copy->FUN_10a2eeb0(&Copy->Unknown30, &Copy->Unknown44, Unknown44 ? &Unknown30 : 0);
    return Copy;
}
