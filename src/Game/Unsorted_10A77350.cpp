// Game/Unsorted_10A77350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BCD0.h"

class UObject;

class ULevel;

template <class T> T* Cast(UObject* Src);

struct Struct_10A78020
{
    char Unknown00[8];
    int Unknown08;
};

// FUNCTION: 0x10A78020 ?FUN_10a78020@Class_10E6BCD0@@QAEXPAVUObject@@PAUStruct_10A78020@@H@Z
void Class_10E6BCD0::FUN_10a78020(UObject* A, Struct_10A78020* B, int C)
{
    if (B && B->Unknown08 == 0)
    {
        ULevel* Level = Cast<ULevel>(A);
        if (Unknown04 == 0 && Unknown14 == 0)
        {
            FUN_10a77750(Level);
            FUN_10a77af0(Level);
        }
    }
}
