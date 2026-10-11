// Game/Unsorted_10950340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdlib.h>
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e47660[];

extern int DAT_10eff700;

// Game/Class_109081E0.h copied without its base, with the destructor's own body: the code computes Unknown00 - 4 before FUN_10905aa0().
class Class_109081E0
{
public:
    Class_109081E0() {}
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
        }
    }

    void FUN_10907870(int Length, int Flag);
    Class_109081E0& operator=(const Class_109081E0& Other);
    Class_109081E0& FUN_1090a590(const char* In);
    bool FUN_10911cc0(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }

    char* Unknown00;
};

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
    bool GetString(const char* Section, const char* Key, Class_109081E0& Value, const char* File);

    char Pad00[0x1];
};

// FUNCTION: 0x10950940 ?FUN_10950940@@YAHXZ
int FUN_10950940()
{
    if (DAT_10eff700 == -1)
    {
        Class_109081E0 Text("30");
        if (Config::Instance()->GetString("locale", "ForceMovieFramerate", Text, 0))
        {
            if (Text.FUN_10911cc0("30"))
            {
                if (Text.FUN_10911cc0("25"))
                {
                    Text.FUN_1090a590("30");
                }
            }
        }
        DAT_10eff700 = atoi(*Text);
    }
    return DAT_10eff700;
}
