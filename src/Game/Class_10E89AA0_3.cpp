// Game/Class_10E89AA0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10DA0420.h"
#include "Game/Class_1098E330.h"

class Class_10E89AA0 : public Class_10DA0420
{
public:
    Class_10E89AA0(int A, int B, int C);

    void Init(int A, int B);

    Class_1098E330* m_Actor;
};

extern void* DAT_10e89aa0[];

extern float DAT_10eafbdc;

// FUNCTION: 0x10B932E0 ??0Class_10E89AA0@@QAE@HHH@Z
Class_10E89AA0::Class_10E89AA0(int A, int B, int C)
    : Class_10DA0420(A, C)
{
    Class_1098E330* Actor = m_Actor;
    *(void**)this = DAT_10e89aa0;
    float Value = 0.0f;
    if (Actor)
    {
        Value = 0.0f;
        if (!Actor->GetPropertyValue(0x1002aa, (int*)&Value) || Value == DAT_10eafbdc)
            Value = 2.2f;
    }
    Init(B, *(int*)&Value);
}
