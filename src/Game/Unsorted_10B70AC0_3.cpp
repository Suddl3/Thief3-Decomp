// Game/Unsorted_10B70AC0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10E871C8Item.h"
#include "Game/Window.h"

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

class Class_10E871C8
{
public:
    virtual void Virtual0();

    void FUN_10b70d40(int p1, int p2);

    Struct_10E871C8Item Unknown04[502];
    char Unknown102DC[0x18];
    int Unknown102F4;
};

// FUNCTION: 0x10B70D40 ?FUN_10b70d40@Class_10E871C8@@QAEXHH@Z
void Class_10E871C8::FUN_10b70d40(int p1, int p2)
{
    for (int i = 0; i < Unknown102F4; i++)
    {
        Class_10BFBD70* Dest = (Class_10BFBD70*)p1;
        Window* Parent = Unknown04[i].Unknown00 ? Unknown04[i].Unknown00->Parent : 0;
        int Index = Dest->Unknown00;
        Dest->FUN_10bfbd70(Index + 1);
        Dest->Unknown08[Index] = (int)Parent;
    }
}
