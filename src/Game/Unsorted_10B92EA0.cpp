// Game/Unsorted_10B92EA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10DA0420.h"
#include "Game/Class_1098E330.h"

class Class_10E89AA0 : public Class_10DA0420
{
public:
    Class_10E89AA0(int A, int B, int C);

    void FUN_10b92f40(int A, int B);

    Class_1098E330* Unknown04;
};

extern void* DAT_10e89aa0[];

extern float DAT_10eafbdc;

// FUNCTION: 0x10B932E0 ??0Class_10E89AA0@@QAE@HHH@Z
Class_10E89AA0::Class_10E89AA0(int A, int B, int C)
    : Class_10DA0420(A, C)
{
    Class_1098E330* Actor = Unknown04;
    *(void**)this = DAT_10e89aa0;
    float Value = 0.0f;
    if (Actor)
    {
        Value = 0.0f;
        if (!Actor->FUN_1098e330(0x1002aa, (int*)&Value) || Value == DAT_10eafbdc)
            Value = 2.2f;
    }
    FUN_10b92f40(B, *(int*)&Value);
}
