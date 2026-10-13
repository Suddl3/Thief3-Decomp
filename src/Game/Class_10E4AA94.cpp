// Game/Class_10E4AA94.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1094DF00.h"
#include "Game/Class_1094DF40.h"
#include "Game/Class_1094DF60.h"
#include "Game/Info_1094DF40.h"
#include "Game/Struct_1094DF00.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10E4AA94.h"

void FUN_1092bdb0(void* Memory);

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
