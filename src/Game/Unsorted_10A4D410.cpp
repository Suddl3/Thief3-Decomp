// Game/Unsorted_10A4D410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A4DD60.h"
#include "Game/Class_10A4DDA0.h"
#include "Game/Class_10A4E2A0.h"
#include "Game/Class_10A4EAE0.h"
#include "Game/cIntArray.h"

struct Struct_10A4DD60
{
    char Unknown00[0x328];
    int Unknown328[6];
};

class Class_10A4D4E0
{
public:
    int FindIndex(int Key)
    {
        for (int i = 0; i < UnknownC4; i++)
        {
            if (UnknownC0[i] == Key)
                return i;
        }
        return -1;
    }

    char Unknown00[0xC0];
    int* UnknownC0;
    int UnknownC4;
};

// FUNCTION: 0x10A4D4E0 ?FUN_10a4d4e0@@YGHPAVClass_10A4D4E0@@H@Z
int __stdcall FUN_10a4d4e0(Class_10A4D4E0* Obj, int Key)
{
    int Result = 0;
    if (Obj)
    {
        int Index = Obj->FindIndex(Key);
        if (Index < Obj->UnknownC4 - 1)
            return Obj->UnknownC0[Index + 1];
        Result = Obj->UnknownC0[0];
    }
    return Result;
}

// FUNCTION: 0x10A4DD60 ?FUN_10a4dd60@Class_10A4DD60@@QAEHH@Z
int Class_10A4DD60::FUN_10a4dd60(int Index)
{
    for (int i = 0; i < Unknown04; i++)
    {
        int Value = Unknown0C[i]->Unknown328[Index];
        if (Value != 0x40)
            return Value;
    }
    return Unknown340[Index];
}

// FUNCTION: 0x10A4DDA0 ?FUN_10a4dda0@Class_10A4DDA0@@QAEXXZ
void Class_10A4DDA0::FUN_10a4dda0()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
}

// FUNCTION: 0x10A4EAE0 ?FUN_10a4eae0@Class_10A4EAE0@@QAEXHPAVcIntArray@@@Z
void Class_10A4EAE0::FUN_10a4eae0(int A, cIntArray* B)
{
    B->SetCount(0);
    Unknown1C.FUN_10a4e2a0(A, B);
}
