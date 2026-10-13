// Game/Unsorted_10BF2FE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10FF667C.h"
#include "Game/Class_10B9BDA0_Member.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BF0A60.h"
#include "Game/Class_10BF3320.h"

extern Class_10FF667C* DAT_10ff667c;

class Class_10BEFA30;

// FUNCTION: 0x10BF3320 ?FUN_10bf3320@Class_10BF3320@@QAE_NXZ
bool Class_10BF3320::FUN_10bf3320()
{
    while (Unknown1F0.m_Count > 0)
    {
        if (!DAT_10ff667c->Unknown14->Virtual6())
            return true;
        if (FUN_10bf0900(Unknown1F0.m_Items))
        {
            Unknown1F0.FUN_10befb10(0);
            return true;
        }
        if (Unknown1F0.m_Count - 1 != 0)
            Unknown1F0.FUN_10befc30(1, 0, Unknown1F0.m_Count - 1);
        Unknown1F0.FUN_10befb10(Unknown1F0.m_Count - 1);
    }
    return false;
}
