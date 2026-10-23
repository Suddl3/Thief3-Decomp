// Game/Class_10E7007C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7007C.h"
#include "Game/Class_1098E330.h"

void FUN_10abcdd0(int p1, int p2);

extern float DAT_10e499a4;

// FUNCTION: 0x10ACC440 ?FUN_10acc440@Class_10E7007C@@UAEMHHPAVClass_1098E330@@@Z
float Class_10E7007C::FUN_10acc440(int A, int B, Class_1098E330* Obj)
{
    if (Obj)
    {
        float Value = 0.0f;
        if (Obj->GetPropertyValue(0x100588, (int*)&Value))
            return Value;
    }
    return DAT_10e499a4;
}

// FUNCTION: 0x10ACE350 ?FUN_10ace350@Class_10E7007C@@UAEXHHHH@Z
void Class_10E7007C::FUN_10ace350(int p1, int p2, int p3, int p4)
{
    FUN_10abcdd0(p1, p3);
}
