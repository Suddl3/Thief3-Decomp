// Game/Unsorted_10B64DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// include/Game/Class_1090A780.h (and Class_10905A90_Member.h) give the base
// class and GetAllocator(); the cString class is copied whole from
// include/Game/cString.h with the method the code calls added.
#include "Game/Class_1090A780.h"
#include "Core/Core.h"
#include "Game/Class_1090C880.h"
#include "Game/Class_10A52BE0.h"
#include "Game/Class_10B651B0.h"
#include "Game/Struct_10B651B0.h"

extern const char DAT_10e47660[];

class cString : public Class_1090A780
{
public:
    // No destructor of its own: the implicit one inlines Class_1090A780's.
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    void FUN_1090afd0(const cString& Other);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

// include/Game/Class_10E684A8.h copied whole.
class Class_10E684A8 : public Class_10A52BE0
{
public:
    virtual void FUN_10a55020(bool Param);
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void SetLocation(FVector* A);
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
    virtual bool Virtual54();

    void SetNameByIndex(int A);
    Class_10E684A8();

    char Unknown04[0x18];
    FVector m_Location;
    char Pad28[0xf8];
    bool m_Dirty;
    char Unknown121[3];
    cString m_Name;
    Class_1090C880 m_Names;
    int Unknown134;
    char Pad138[0xc0];
};

// include/Game/Options.h copied whole, with the names table the code indexes.
class Options
{
public:
    int Get(int Index);
    void GetResolution(int* Width, int* Height);
    void FUN_10ab5c60(int Index);
    void FUN_10ab6420();
    void Save();
    void FUN_10ab66e0();
    int SetDefaults(int Index);
    unsigned int Load();
    void Set(int Name, int Value);
    void ApplyVideo();
    void FUN_10ab5a90();

    static const char* Names[];
    static int ResolutionWidths[];
    static int ResolutionHeights[];

    int Unknown00;
    int Values[21];
    char Unknown58;
    char Unknown59;
    char Pad5A[0x2];
};

Options* GetOptions();

// The class of the option value holder the code calls through.
class Class_10B651B0_Member
{
public:
    virtual void Virtual0();  virtual void Virtual1();  virtual void Virtual2();
    virtual void Virtual3();  virtual void Virtual4();  virtual void Virtual5();
    virtual void Virtual6();  virtual void Virtual7();  virtual void Virtual8();
    virtual void Virtual9();  virtual void Virtual10(); virtual void Virtual11();
    virtual void Virtual12(); virtual void Virtual13(); virtual void Virtual14();
    virtual void Virtual15(); virtual void Virtual16(); virtual void Virtual17();
    virtual void Virtual18(); virtual void Virtual19(); virtual void Virtual20();
    virtual void Virtual21(); virtual void Virtual22(); virtual void Virtual23();
    virtual void Virtual24(); virtual void Virtual25(); virtual void Virtual26();
    virtual void Virtual27(); virtual void Virtual28(); virtual void Virtual29();
    virtual void Virtual30(); virtual void Virtual31(); virtual void Virtual32();
    virtual void Virtual33(); virtual void Virtual34(); virtual void Virtual35();
    virtual void Virtual36(); virtual void Virtual37(); virtual void Virtual38();
    virtual void Virtual39(); virtual void Virtual40(); virtual void Virtual41();
    virtual void Virtual42(); virtual void Virtual43(); virtual void Virtual44();
    virtual void Virtual45(); virtual void Virtual46(); virtual void Virtual47();
    virtual void Virtual48(); virtual void Virtual49(); virtual void Virtual50();
    virtual void Virtual51(); virtual void Virtual52(); virtual void Virtual53();
    virtual void Virtual54(); virtual void Virtual55(); virtual void Virtual56();
    virtual void Virtual57(); virtual void Virtual58(); virtual void Virtual59();
    virtual void Virtual60(); virtual void Virtual61(); virtual void Virtual62();
    virtual void Virtual63(); virtual void Virtual64(); virtual void Virtual65();
    virtual void Virtual66(); virtual void Virtual67(); virtual void Virtual68();
    virtual void Virtual69(); virtual void Virtual70(); virtual void Virtual71();
    virtual void Virtual72(); virtual void Virtual73(); virtual void Virtual74();
    virtual void Virtual75(); virtual void Virtual76(); virtual void Virtual77();
    virtual void Virtual78(); virtual void Virtual79(); virtual void Virtual80();
    virtual void Virtual81(); virtual void Virtual82(); virtual void Virtual83();
    virtual void Virtual84(); virtual void Virtual85(); virtual void Virtual86();
    virtual void Virtual87(); virtual void Virtual88(); virtual void Virtual89();
    virtual void Virtual90(); virtual void Virtual91(); virtual void Virtual92();
    virtual void Virtual93(); virtual void Virtual94(); virtual void Virtual95();
    virtual void Virtual96(); virtual void Virtual97(); virtual void Virtual98();
    virtual void Virtual99(); virtual void Virtual100(); virtual void Virtual101();
    virtual void Virtual102(); virtual void Virtual103(); virtual void Virtual104();
    virtual void Virtual105(); virtual void Virtual106(); virtual void Virtual107();
    virtual void Virtual108(); virtual void Virtual109(); virtual void Virtual110();
    virtual void Virtual111(); virtual void Virtual112(); virtual void Virtual113();
    virtual void Virtual114(); virtual void Virtual115(); virtual void Virtual116();
    virtual void Virtual117(); virtual void Virtual118(); virtual void Virtual119();
    virtual void Virtual120();
    virtual void Virtual121(int A);

    char Unknown00[0x1EC];
    int Unknown1F0;
    int Unknown1F4;
};

extern const char DAT_10e84908[];

cString FUN_1090a660(const char* Format, ...);

void FUN_10a27a60(void* A, void* B);

// FUNCTION: 0x10B64DE0 ?FUN_10b64de0@Class_10B651B0@@QAEXXZ
void Class_10B651B0::FUN_10b64de0()
{
    cString Label;
    cString Screen("T_OptionsScreen");
    {
        cString Opt(Options::Names[m_Data.Unknown00]);
        Screen.FUN_1090afd0(Opt);
    }
    FUN_10a27a60(&Screen, &Label);
    int Value = GetOptions()->Get(m_Data.Unknown00);
    Unknown04->Virtual121(Value);
    Unknown04->Unknown1F4 = Unknown04->Unknown1F0;
    if (m_Data.Unknown00 >= 5 && (m_Data.Unknown00 <= 6 || m_Data.Unknown00 == 8))
    {
        Label = FUN_1090a660("%s: %d", Label.Unknown00, Value);
    }
    Unknown08->SetNameByIndex((int)&Label);
    Unknown08->SetLocation((FVector*)2);
}
