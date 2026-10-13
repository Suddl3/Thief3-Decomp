// Game/cDifficulty.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cDifficulty.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

int FUN_10af3690(const char* A, const char* B);

extern "C" char* _strlwr(char* String);

// Game/Config.h copied whole, with GetString added.
class Config
{
public:
    Config();
    ~Config();

    static Config* Instance();
    bool FUN_10910a20(const char* Section, const char* Key, int* Value, int D);
    bool GetBool(const char* Section, const char* Key, bool* Value, const char* File);
    bool GetFloat(const char* Section, const char* Key, float* Value, const char* File);
    bool GetString(const char* Section, const char* Key, cString& Value, const char* File);

    char Pad00[0x1];
};

// FUNCTION: 0x10AB7330 ?LoadDifficulty@cDifficulty@@QAEXXZ
void cDifficulty::LoadDifficulty()
{
    cString Name;
    if (Config::Instance()->GetString("T3Settings", "CurrentDifficulty", Name, 0))
    {
        if (Name.Unknown00)
            _strlwr(Name.Unknown00);
        if (FUN_10af3690(*Name, "easy") == 0)
            Difficulty = 0;
        else if (FUN_10af3690(*Name, "normal") == 0)
            Difficulty = 1;
        else if (FUN_10af3690(*Name, "hard") == 0)
            Difficulty = 2;
        else if (FUN_10af3690(*Name, "expert") == 0)
            Difficulty = 3;
    }
    else
        Difficulty = 1;
}
