// Game/Unsorted_10B65E90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cIntArray.h"

extern const char DAT_10e47660[];

// Game/cString.h copied without its base, with the destructor's own body: the code computes Unknown00 - 4 before GetAllocator().
// The base's default constructor clears Unknown00, so this copy's default constructor does too.
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

class Class_10B65E90_Unknown200
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
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
    virtual void Virtual70(int A);
};

class Class_10E84978;

class WindowManager
{
public:
    Class_10B65E90_Unknown200* FUN_109e6f40(cString* A, Class_10E84978* B);
    Class_10B65E90_Unknown200* FUN_109e7cb0(Class_10E84978* A, Class_10AF7F80* B, const FString& C);
};

extern WindowManager* GWindowManager;

class Class_10E84978
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_10b65e90(Class_10AF7F80* A, Class_10AF7F80* B);

    void FUN_10b75e60(Class_10AF7F80* A, Class_10AF7F80* B);

    char Pad04[0xb4];
    cIntArray Unknown0B8;
    char PadC4[0x13c];
    Class_10B65E90_Unknown200* Unknown200;
};

// FUNCTION: 0x10B65E90 ?FUN_10b65e90@Class_10E84978@@UAEXPAVClass_10AF7F80@@0@Z
void Class_10E84978::FUN_10b65e90(Class_10AF7F80* A, Class_10AF7F80* B)
{
    FUN_10b75e60(A, B);
    cString Text;
    if (Config::Instance()->GetString(B->FUN_10af7f80(), "TextDisplay", Text, A->FUN_10af7f80()))
    {
        Unknown200 = GWindowManager->FUN_109e6f40(&Text, this);
        if (!Unknown200)
        {
            Unknown200 = GWindowManager->FUN_109e7cb0(this, A, FString(*Text));
            int Index = Unknown0B8.Count;
            int Item = (int)Unknown200;
            cIntArray& Array = Unknown0B8;
            Array.SetCount(Index + 1);
            Array.Data[Index] = Item;
        }
        if (Unknown200)
            Unknown200->Virtual70(0);
    }
    else
    {
        Unknown200 = 0;
    }
}
