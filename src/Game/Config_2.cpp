// Game/Config_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include <stdlib.h>

class Config
{
public:
    Config();
    ~Config();

    static Config* Instance();
    bool FUN_10910a20(const char* Section, const char* Key, int* Value, int D);
    bool GetBool(const char* Section, const char* Key, bool* Value, const char* File);
    bool GetFloat(const char* Section, const char* Key, float* Value, const char* File);
    bool GetString(const char* Section, const char* Key, char** Value, const char* File);
    bool FUN_10910ca0(const char* Section, const char* Key, char* Value, int Size, int Default);
    bool Find(const cString& Section, const cString& Key, const char* File, cString& Value);

    char Pad00[0x1];
};

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
