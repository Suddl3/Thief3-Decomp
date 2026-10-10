// Game/Unsorted_1091F710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091F710.h"

class Class_1091F710_Unknown38;

// FUNCTION: 0x1091F710 ?FUN_1091f710@Class_1091F710@@QAE_NPAVClass_1091F710_Unknown38@@@Z
bool Class_1091F710::FUN_1091f710(Class_1091F710_Unknown38* Item)
{
    if (Item)
    {
        for (int i = 0; i < Unknown30; i++)
        {
            if (Unknown38[i] == Item)
                return true;
        }
    }
    return false;
}
