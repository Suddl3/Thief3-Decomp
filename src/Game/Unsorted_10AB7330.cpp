// Game/Unsorted_10AB7330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's memory manager (0x10905AA0).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e47660[];

int FUN_10af3690(const char* A, const char* B);

extern "C" char* _strlwr(char* String);

// Game/Class_109081E0.h copied without its base, with the destructor's own body: the code computes Unknown00 - 4 before FUN_10905aa0().
class Class_109081E0
{
public:
    Class_109081E0() { Unknown00 = 0; }
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
        }
    }

    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }

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

class Class_10AB7500
{
public:
    void FUN_10ab7330();
    void FUN_10ab7500();

    char Unknown00[8];
    int Difficulty;
};

// FUNCTION: 0x10AB7330 ?FUN_10ab7330@Class_10AB7500@@QAEXXZ
void Class_10AB7500::FUN_10ab7330()
{
    Class_109081E0 Name;
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
