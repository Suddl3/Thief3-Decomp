// Game/Unsorted_10BAA470_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAA6B0_Param.h"
#include "Game/Class_10B9BCA0.h"

class AAIPawn;

class Class_10BABED0;

struct Struct_10B9BCA0_Unknown118
{
    char Unknown00[0x10];
    Class_10BABED0* Unknown10;
};

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// FUNCTION: 0x10BAA6B0 ?FUN_10baa6b0@@YAPAVClass_10BABED0@@PAVClass_10BAA6B0_Param@@@Z
Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param)
{
    if (Param->Unknown0C0 && !Param->Virtual34())
    {
        Class_10B9BCA0* Info = GetAIPawnController((AAIPawn*)Param);
        if (Info && Info->Unknown118)
            return ((Struct_10B9BCA0_Unknown118*)Info->Unknown118)->Unknown10;
    }
    return 0;
}
