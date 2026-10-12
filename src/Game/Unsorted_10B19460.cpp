// Game/Unsorted_10B19460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdlib.h>
#include "Core/Core.h"
#include "Game/Class_10B19300.h"
#include "Game/Class_10B193E0.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_1096D780_Field98.h"
#include "Game/Class_10B22020.h"

int FUN_10b1dad0(int Value);

// FUNCTION: 0x10B19460 ?FUN_10b19460@Class_10B19300@@QAEXPAVClass_10B22020@@@Z
void Class_10B19300::FUN_10b19460(Class_10B22020* A)
{
    int Key[3];
    FRotator Rot;
    ((Class_10B193E0*)this)->FUN_10b19260((Struct_10B193E0*)A, 1.0f);
    Rot = A->Unknown38;
    ((Class_10B193E0*)this)->FUN_10b19140(Key, (Struct_10B193E0*)A);
    int Delta = FUN_10b1dad0(A->Unknown38.Yaw - A->Unknown404);
    if (Key[1] != -1 && abs(Delta) > Key[1])
        Rot.Yaw = (int)(Rot.Yaw + A->Unknown410);
    Rot.Yaw = FUN_10b1dad0(Rot.Yaw);
    if (((Class_1096D780*)A)->Get() != 0)
    {
        ((Class_1096D780_Field98*)((Class_1096D780*)A)->Get())->Virtual41((Class_1096D780*)A, Rot);
        return;
    }
    A->Unknown38 = Rot;
}
