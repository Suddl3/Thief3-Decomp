// Game/Config.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"
#include "Game/cString.h"
#include <stdlib.h>

// FUNCTION: 0x10910B60 ?GetFloat@Config@@QAE_NPBD0PAM0@Z
bool Config::GetFloat(const char* Section, const char* Key, float* Value, const char* File)
{
    cString Text;
    if (!Find(Section, Key, File, Text))
        return false;
    if (Text.IsEmpty())
        return false;
    *Value = (float)atof(*Text);
    return true;
}

// FUNCTION: 0x10911950 ?Instance@Config@@SAPAV1@XZ
Config* Config::Instance()
{
    static Config GSingleton;
    return &GSingleton;
}
