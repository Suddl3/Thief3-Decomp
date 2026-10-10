// Game/Unsorted_1094DA70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094DF00.h"
#include "Game/Class_1094DF40.h"
#include "Game/Class_1094DF60.h"
#include "Game/Info_1094DF40.h"
#include "Game/Struct_1094DF00.h"

extern "C" int memcmp(const void*, const void*, unsigned);

// FUNCTION: 0x1094DF00 ?FUN_1094df00@Class_1094DF00@@QAEXABUStruct_1094DF00@@@Z
void Class_1094DF00::FUN_1094df00(const Struct_1094DF00& Value)
{
    int Diff = memcmp(&Unknown04, &Value, sizeof(Struct_1094DF00));
    if (Diff != 0)
        Unknown5C |= 4;
    Unknown04 = Value;
}

// FUNCTION: 0x1094DF40 ?FUN_1094df40@Class_1094DF40@@QAEXPBUInfo_1094DF40@@@Z
void Class_1094DF40::FUN_1094df40(const Info_1094DF40* In)
{
    Unknown14C = *In;
}

// FUNCTION: 0x1094DF60 ?FUN_1094df60@Class_1094DF60@@QAEXH@Z
void Class_1094DF60::FUN_1094df60(int A)
{
    Unknown110 = A;
    if (Unknown110 >= Unknown10C)
        Unknown110 = Unknown10C - 1;
    if (Unknown110 < 0)
        Unknown110 = 0;
}
