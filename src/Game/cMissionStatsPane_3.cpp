// Game/cMissionStatsPane_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E6D60.h"
#include "Game/cIntArray.h"

extern const char DAT_10e47660[];

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

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }

    char* Unknown00;
};

// Game/Config.h copied whole, with GetString's value parameter changed to cString&.
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

class Class_10B65E90_Unknown200;

class Class_10E84978;

class Class_10B45AD0;

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

    void FUN_10b75e60(Class_10AF7F80* A, Class_10AF7F80* B);

    char Pad04[0xb4];
    cIntArray Unknown0B8;
    char Pad0C4[0xc0];
    int Unknown184;
    Class_10B65E90_Unknown200* Unknown188;
    char Pad18C[0x74];
    Class_10B65E90_Unknown200* Unknown200;
};

class cMissionStatsPane : public Class_10E84978
{
public:
    void FUN_10b7a890(Class_10AF7F80* A, Class_10AF7F80* B);

    virtual void FUN_10b78540(Class_10AF7F80* A, Class_10AF7F80* B);
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual void Virtual105();
    virtual void Virtual106();
    virtual void Virtual107();
    virtual void Virtual108();
    virtual void Virtual109();
    virtual void Virtual110();
    virtual void Virtual111();
    virtual void Virtual112();
    virtual void Virtual113();
    virtual void Virtual114();
    virtual void Virtual115();
    virtual void Virtual116();
    virtual void Virtual117();
    virtual void Virtual118();
    virtual void Virtual119();
    virtual void Virtual120();
    virtual void Virtual121();
};

// FUNCTION: 0x10B78540 ?FUN_10b78540@cMissionStatsPane@@UAEXPAVClass_10AF7F80@@0@Z
void cMissionStatsPane::FUN_10b78540(Class_10AF7F80* A, Class_10AF7F80* B)
{
    this->FUN_10b7a890(A, B);

    cString Text;
    if (Config::Instance()->GetString(B->FUN_10af7f80(), "ScrollBar", Text, A->FUN_10af7f80()))
    {
        Unknown188 = GWindowManager->FUN_109e6f40(&Text, this);
        if (!Unknown188)
        {
            Unknown188 = GWindowManager->FUN_109e7cb0(this, A, FString(*Text));
            int Index = Unknown0B8.Count;
            int Item = (int)Unknown188;
            cIntArray& Array = Unknown0B8;
            Array.SetCount(Index + 1);
            Array.Data[Index] = Item;
        }
    }
    else
    {
        Unknown188 = 0;
    }

    {
        int NumVisibleRows = 0;
        Config::Instance()->FUN_10910a20(B->FUN_10af7f80(), "NumVisibleRows", &NumVisibleRows, (int)A->FUN_10af7f80());
        Unknown184 = NumVisibleRows;
    }
    Virtual121();
}
