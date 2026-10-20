// Game/cMissionStatsPane_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E6D60.h"
#include "Game/cIntArray.h"

extern const char DAT_10e47660[];

extern const char DAT_10e82d18[];

extern const char DAT_10e82d04[];

class Class_10B65E90_Unknown200;

class Class_10B45AD0;

class Class_10E84978;

// Game/cString.h copied without its base, with the destructor's own body: the code computes
// Unknown00 - 4 before GetAllocator(), while the base schedules that after the free, and the
// base's default constructor clears Unknown00, so this copy's default constructor does too.
class cString
{
public:
    cString() { Unknown00 = 0; }
    cString(const char* In);
    cString(const cString& Other);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }

    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }

    char* Unknown00;
};

// Game/Config.h copied whole: the code calls GetString with a char** value.
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

// Game/WindowManager.h copied whole, with the two methods the code calls added.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);

    Class_10B65E90_Unknown200* FUN_109e6f40(cString* A, Class_10E84978* B);
    Class_10B65E90_Unknown200* FUN_109e7cb0(Class_10E84978* A, Class_10AF7F80* B, const FString& C);

    void FUN_109e3d60(void* Window);
    void FUN_109e8ae0(void* Window);
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0x190];
    char Unknown264;
};

extern WindowManager* GWindowManager;

// The window class this one derives from: the code passes this to the window manager.
class Class_10E84978
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();

    char Pad04[0xB4];
    cIntArray Unknown0B8;
    char Pad0C4[0xCC];
    Class_10B65E90_Unknown200* Unknown190;
    Class_10B65E90_Unknown200* Unknown194;
};

class cMissionStatsPane : public Class_10E84978
{
public:
    virtual void FUN_10b5b080(Class_10AF7F80* File, Class_10AF7F80* Section);
    virtual void FUN_10b78540(Class_10AF7F80* A, Class_10AF7F80* B);
};

// FUNCTION: 0x10B5B080 ?FUN_10b5b080@cMissionStatsPane@@UAEXPAVClass_10AF7F80@@0@Z
void cMissionStatsPane::FUN_10b5b080(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    cString Text;
    if (Config::Instance()->GetString(Section->FUN_10af7f80(), DAT_10e82d18, &Text.Unknown00, File->FUN_10af7f80()))
    {
        Unknown190 = GWindowManager->FUN_109e6f40(&Text, this);
        if (!Unknown190)
        {
            Unknown190 = GWindowManager->FUN_109e7cb0(this, File, FString(*Text));
            int Index = Unknown0B8.Count;
            int Item = (int)Unknown190;
            cIntArray& Array = Unknown0B8;
            Array.SetCount(Index + 1);
            Array.Data[Index] = Item;
        }
    }
    else
    {
        Unknown190 = 0;
    }
    if (Config::Instance()->GetString(Section->FUN_10af7f80(), DAT_10e82d04, &Text.Unknown00, File->FUN_10af7f80()))
    {
        Unknown194 = GWindowManager->FUN_109e6f40(&Text, this);
        if (!Unknown194)
        {
            Unknown194 = GWindowManager->FUN_109e7cb0(this, File, FString(*Text));
            int Index = Unknown0B8.Count;
            int Item = (int)Unknown194;
            cIntArray& Array = Unknown0B8;
            Array.SetCount(Index + 1);
            Array.Data[Index] = Item;
        }
    }
    else
    {
        Unknown194 = 0;
    }
    cMissionStatsPane::FUN_10b78540(File, Section);
}
