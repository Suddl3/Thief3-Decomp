// Game/Unsorted_1094DA70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1094DF00.h"
#include "Game/Class_1094DF40.h"
#include "Game/Class_1094DF60.h"
#include "Game/Info_1094DF40.h"
#include "Game/Struct_1094DF00.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10E4AA94.h"

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

// FUNCTION: 0x1094DF60 ?SetCurrentIndex@Class_1094DF60@@QAEXH@Z
void Class_1094DF60::SetCurrentIndex(int A)
{
    m_CurrentIndex = A;
    if (m_CurrentIndex >= m_Count)
        m_CurrentIndex = m_Count - 1;
    if (m_CurrentIndex < 0)
        m_CurrentIndex = 0;
}
