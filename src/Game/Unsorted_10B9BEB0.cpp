// Game/Unsorted_10B9BEB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB89D0.h"
#include "Game/Class_10BE3FF0.h"
#include "Game/Class_10BFB910.h"
#include "Game/Class_10BC9D40.h"
#include "Game/cStateStack.h"
#include "Game/Class_10FF667C.h"
#include "Game/Struct_10B9BDB0_Unknown118.h"
#include "Game/Class_10B9BDB0.h"

class Class_10BB8300;

class Class_10B9CAC0;

extern Class_10FF667C* DAT_10ff667c;

// Game/Class_10B9CAC0.h's copy: FUN_10aa9da0 is a method of this object too.
class Class_10B9CAC0 : public cStateStack
{
public:
    bool FUN_10b9d0c0(int A);
    bool FUN_10b9d0e0(int A);
    Class_10BC9D40* GetCurrent(int A);
    Class_10BC9D40* GetCurrent();
    int FUN_10b9d040(int A, int B);
    void NotifyAllyKilled(int A);
    void* FUN_10aa9da0();

    char Pad01[0xb];
    char Pad47[0x1];
    Class_10BB8300* Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10BC9D40** m_Stack;
};

// FUNCTION: 0x10B9BF60 ?FUN_10b9bf60@Class_10B9BDB0@@QAEXXZ
void Class_10B9BDB0::FUN_10b9bf60()
{
    Struct_10B9BDB0_Unknown118* Obj = Unknown118;
    if (Obj && Obj->Unknown04)
    {
        Obj->Unknown04->Unknown30.FUN_10bfc190();
        if (Obj->Unknown04->FUN_10bb89d0())
        {
            Obj->Unknown04->FUN_10bb89d0()->FUN_10be3ff0();
            DAT_10ff667c->Unknown28->FUN_10bfb910(4);
        }
    }
    Class_10B9CAC0* Items = Unknown118->Unknown08;
    for (int i = *(int*)Items->FUN_10aa9da0(); i > 1; i--)
    {
        switch (Items->GetCurrent()->Virtual3())
        {
        case 1:
        case 6:
        case 7:
        case 0xb:
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x26:
            i = 0;
            break;
        default:
            Items->FUN_10b9d8d0();
        }
    }
}
