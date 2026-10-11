// Game/Unsorted_10C09A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1098E330.h"
#include "Game/Struct_10C099A0.h"
#include "Game/Class_10C099A0.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C09B60.h"

// FUNCTION: 0x10C09B60 ??1Class_10C09B60@@QAE@XZ
Class_10C09B60::~Class_10C09B60()
{
}

// FUNCTION: 0x10C09BF0 ?FUN_10c09bf0@@YG_NPAVClass_1098E330@@PAH@Z
bool __stdcall FUN_10c09bf0(Class_1098E330* Obj, int* Other)
{
    int Value = 0;
    if (Obj->FUN_1098e330(0x800182, &Value) && Value)
        return true;
    bool Positive = *Other > 0;
    return Positive;
}

// FUNCTION: 0x10C09F10 ?FUN_10c09f10@Class_10C099A0@@QAE_NHH@Z
bool Class_10C099A0::FUN_10c09f10(int Key, int B)
{
    int Value = FindValue(Key);
    if (Value)
        return FUN_10c09c30(Value, B);
    return false;
}
