// Game/Unsorted_10ABB6B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10ABB6B0.h"

extern "C" void* memmove(void* Dst, const void* Src, unsigned int Size);

class Class_10ABB6B0;

class Class_10ABB6B0_Unknown04
{
public:
    virtual void Virtual0(Class_10ABB6B0* Owner, int A);
};

// FUNCTION: 0x10ABB6B0 ?FUN_10abb6b0@Class_10ABB6B0@@QAEXH@Z
void Class_10ABB6B0::FUN_10abb6b0(int A)
{
    for (int i = 0; i < Unknown04.Count; i++)
        ((Class_10ABB6B0_Unknown04*)Unknown04.Data[i])->Virtual0(this, A);
    while (Unknown10.Count != 0)
    {
        FUN_10abb520(Unknown10.Data[0]);
        cIntArray& Items = Unknown10;
        int Remaining = Items.Count - 1;
        if (Remaining != 0)
            memmove(Items.Data, Items.Data + 1, Remaining * 4);
        Items.SetCount(Items.Count - 1);
    }
}
