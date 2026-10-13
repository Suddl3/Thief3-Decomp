// Game/Unsorted_10B90330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B912E0.h"
#include "Game/Class_10B91800.h"

class Class_10DA0410
{
public:
    int FUN_10da0410();
};

struct Struct_10B90530
{
    Struct_10B90530() {}

    int Unknown00;
};

extern Struct_10B90530 DAT_10f05c20;

extern Struct_10B90530 DAT_10f05c24;

extern Struct_10B90530 DAT_10f05c28;

extern Struct_10B90530 DAT_10f05c2c;

// FUNCTION: 0x10B90530 ?FUN_10b90530@@YG?AUStruct_10B90530@@PAVClass_10DA0410@@H@Z
Struct_10B90530 __stdcall FUN_10b90530(Class_10DA0410* Thing, int C)
{
    Struct_10B90530 Result;
    switch (Thing->FUN_10da0410())
    {
    case 1:
        Result = DAT_10f05c20;
        break;
    case 3:
        Result = DAT_10f05c28;
        break;
    case 4:
        Result = DAT_10f05c24;
        break;
    default:
        Result = DAT_10f05c2c;
        break;
    }
    return Result;
}
