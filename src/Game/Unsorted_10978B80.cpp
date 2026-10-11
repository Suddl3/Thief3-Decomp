// Game/Unsorted_10978B80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

class Config
{
public:
    Config();
    ~Config();

    static Config* Instance();
    bool FUN_10910a20(const char* Section, const char* Key, int* Value, int D);
    bool GetBool(const char* Section, const char* Key, bool* Value, const char* File);
    bool GetFloat(const char* Section, const char* Key, float* Value, const char* File);
    bool FUN_10910ca0(const char* Section, const char* Key, char* Value, int Size, int Default);

    char Pad00[0x1];
};

extern const char DAT_10e47820[];

extern const char DAT_10e4ebdc[];

extern const char DAT_10e4ebc8[];

int FUN_10af4710();

void FUN_10ca7ab0(char* Path);

// FUNCTION: 0x10978B80 ?FUN_10978b80@@YG?AVClass_109081E0@@XZ
Class_109081E0 __stdcall FUN_10978b80()
{
    char Path[0x80] = {0};
    if (FUN_10af4710())
    {
        if (!Config::Instance()->FUN_10910ca0(DAT_10e47820, DAT_10e4ebdc, Path, 0x80, 0))
            FUN_10ca7ab0(Path);
    }
    else
    {
        if (!Config::Instance()->FUN_10910ca0(DAT_10e47820, DAT_10e4ebc8, Path, 0x80, 0))
            FUN_10ca7ab0(Path);
    }
    return Class_109081E0(Path);
}
