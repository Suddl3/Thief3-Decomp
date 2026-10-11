// Game/Unsorted_10A86210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Object_10A858C0.h"

class Class_10A86210_Arg;

class Object_10A858C0;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10BFBD70 DAT_10f3a1c8;

extern Object_10A858C0** DAT_10f3a1d0;

class Class_10A85AD0 : public Object_10A858C0
{
public:
    Class_10A85AD0();

    char Unknown04[0x54];
};

class Class_10A86210_Arg
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* Data, int Size);

    char Unknown04[0x10];
    int Unknown14;
};

// FUNCTION: 0x10A86210 ?FUN_10a86210@@YAXPAVClass_10A86210_Arg@@@Z
void FUN_10a86210(Class_10A86210_Arg* Ar)
{
    int Count = DAT_10f3a1c8.Count;
    Ar->Virtual1(&Count, 4);
    if (Ar->Unknown14)
        DAT_10f3a1c8.FUN_10bfbd70(Count);
    for (int i = 0; i < Count; i++)
    {
        if (Ar->Unknown14)
        {
            GetAllocator()->Virtual8(0, 0);
            DAT_10f3a1d0[i] = new(0, 0, 0, 0, 0) Class_10A85AD0;
            GetAllocator()->Virtual9();
        }
        DAT_10f3a1d0[i]->Virtual19(Ar);
    }
}
