// Game/Unsorted_10C27630.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10AA82C0.h"
#include "Game/Class_10C27630.h"

class Class_10C27630_Member
{
public:
    virtual int Virtual0();
};

struct Struct_10C27630
{
    int Unknown00;
    char Unknown04[4];
    Class_10C27630_Member** Unknown08;
};

// FUNCTION: 0x10C27630 ?FUN_10c27630@Class_10C27630@@QAEXPAVcIntArray@@@Z
void Class_10C27630::FUN_10c27630(cIntArray* Dst)
{
    for (int i = 0; i < ((Struct_10C27630*)Unknown14->FUN_10aa82c0())->Unknown00; i++)
    {
        Class_10C27630_Member* Member = ((Struct_10C27630*)Unknown14->FUN_10aa82c0())->Unknown08[i];
        if (Dst->FindIndex(Member->Virtual0()) == -1)
        {
            int Value = Member->Virtual0();
            int Index = Dst->Count;
            Dst->SetCount(Index + 1);
            Dst->Data[Index] = Value;
        }
    }
}
