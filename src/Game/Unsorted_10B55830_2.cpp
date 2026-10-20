// Game/Unsorted_10B55830_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B559A0.h"
#include "Game/Class_10E68F8C.h"

extern void* DAT_10e7b558[];

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E7B558
{
public:
    Class_10E7B558()
    {
        Unknown08 = 0;
        Unknown04 = 1.0f;
        VTable = DAT_10e7b558;
    }

    void** VTable;
    float Unknown04;
    int Unknown08;
};

class Object_10B55930 : public Class_10E7B558
{
public:
    Class_10E68F8C Unknown0C;
};

// FUNCTION: 0x10B55930 ?FUN_10b55930@Class_10B559A0@@QAEXXZ
void Class_10B559A0::FUN_10b55930()
{
    Object_10B55930* Obj = new(0, 0, 0, 0, 0) Object_10B55930;
    int Result = (int)Virtual10();
    Obj->Unknown0C.Virtual0(Result, (FVector*)&Unknown12C, 0.15f);
    Virtual77(Obj);
}
