// Game/Unsorted_10919CB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10919B90.h"
#include "Game/Class_1091A4F0.h"
#include "Game/Class_1091B3F0.h"
#include "Game/Struct_1091A610.h"
#include "Game/Struct_1091A610Header.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1091A590.h"

// FUNCTION: 0x1091A590 ??1Class_1091A590@@QAE@XZ
Class_1091A590::~Class_1091A590()
{
}

// FUNCTION: 0x1091A610 ?FUN_1091a610@Class_10919B90@@QAEMPBUStruct_1091A610@@H@Z
float Class_10919B90::FUN_1091a610(const Struct_1091A610* A, int B)
{
    int Length = !A->Unknown00 ? 0 : ((Struct_1091A610Header*)A->Unknown00 - 1)->Unknown00;
    const char* Text = A->Unknown00 ? A->Unknown00 : DAT_10e47660;
    return FUN_10919b90(Text, Length, B);
}

// FUNCTION: 0x1091A920 ?FUN_1091a920@Class_1091A4F0@@QAEXXZ
void Class_1091A4F0::FUN_1091a920()
{
    FUN_1091a4f0(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x1091B3F0 ?FUN_1091b3f0@Class_1091B3F0@@QAEXXZ
void Class_1091B3F0::FUN_1091b3f0()
{
    FUN_1091af10(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
