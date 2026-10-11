// Game/Unsorted_10914530_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10BFBD70.h"
#include "Game/Class_109081E0.h"

// Game/Class_10AB37C0.h without its char unknown_00[4]: that slot is the vtable pointer,
// since the entries are deleted through a virtual destructor (slot 0).
class Class_10AB37C0
{
public:
    virtual ~Class_10AB37C0();
    void* unknown_04;

    void* FUN_10ab37c0();
};

// Game/Class_10AA9DA0.h copied whole, with its +0x10 padding split into the fields the code uses:
// the array's count, capacity and entries at +4, +8 and +0xc (a Class_10BFBD70 view sits on +4).
class Class_10AA9DA0
{
public:
    void* FUN_10aa9da0();
    void FUN_109145f0(Class_109081E0& Item);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_10AB37C0** Items;
    void* Unknown10;
};

// FUNCTION: 0x109145F0 ?FUN_109145f0@Class_10AA9DA0@@QAEXAAVClass_109081E0@@@Z
void Class_10AA9DA0::FUN_109145f0(Class_109081E0& Item)
{
    Class_10BFBD70* Array = (Class_10BFBD70*)&Unknown04;
    for (int i = 0; i < Array->Count; i++)
    {
        Class_109081E0* Name = (Class_109081E0*)Items[i]->FUN_10ab37c0();
        if (strcmp(**Name, *Item) == 0)
        {
            delete Items[i];
            Items[i] = 0;
            if (i != Array->Count - 1)
            {
                int From = i + 1;
                int To = i;
                int Count = Array->Count - i - 1;
                if (From != To && Count)
                    memmove(Array->Data + To, Array->Data + From, Count * sizeof(int));
            }
            Array->FUN_10bfbd70(Array->Count - 1);
            return;
        }
    }
}
