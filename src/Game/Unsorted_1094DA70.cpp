// Game/Unsorted_1094DA70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1094DF00.h"
#include "Game/Class_1094DF40.h"
#include "Game/Class_1094DF60.h"
#include "Game/Info_1094DF40.h"
#include "Game/Struct_1094DF00.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

extern "C" int memcmp(const void*, const void*, unsigned);

Class_10905A90_Member* FUN_10905aa0();

void FUN_1092bdb0(void* Memory);

class Class_10E4AA94
{
public:
    virtual ~Class_10E4AA94();

    Class_109081E0 Unknown04;
    Class_109081E0 Unknown08;
    int Unknown0C;
    int Unknown10;
    void* Unknown14[4];
};

// FUNCTION: 0x1094DB20 ??1Class_10E4AA94@@UAE@XZ
Class_10E4AA94::~Class_10E4AA94()
{
    for (int i = 0; i < 4; i++)
    {
        if (Unknown14[i])
            FUN_1092bdb0(Unknown14[i]);
        Unknown14[i] = 0;
    }
    Unknown0C = 0;
    Unknown10 = 0;
}

// FUNCTION: 0x1094DBD0 ??_GClass_10E4AA94@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1094DB20's definition in this unit.

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
