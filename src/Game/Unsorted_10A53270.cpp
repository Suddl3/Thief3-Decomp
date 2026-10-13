// Game/Unsorted_10A53270.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AF7F80.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }

    char* Unknown00;
};

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

class WindowManager
{
public:
    float* GetUIScreenSize(float* Out);
};

extern WindowManager* GWindowManager;

extern const char DAT_10e47660[];

extern const char DAT_10e68190[];

extern const char DAT_10e68184[];

int FUN_10af36e0(const char* A, const char* B);

// FUNCTION: 0x10A537C0 ?FUN_10a537c0@@YAXPAMPAVClass_10AF7F80@@1@Z
void FUN_10a537c0(float* Out, Class_10AF7F80* A, Class_10AF7F80* B)
{
    cString Text;
    if (Config::Instance()->GetString(B->FUN_10af7f80(), DAT_10e68190, Text, A->FUN_10af7f80()))
    {
        const char* Value = Text.Unknown00 ? Text.Unknown00 : DAT_10e47660;
        if (FUN_10af36e0(Value, DAT_10e68184) == 0)
        {
            float Size[2];
            *Out = *GWindowManager->GetUIScreenSize(Size);
        }
        else
        {
            Config::Instance()->GetFloat(B->FUN_10af7f80(), DAT_10e68190, Out, A->FUN_10af7f80());
        }
    }
}
