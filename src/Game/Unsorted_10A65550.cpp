// Game/Unsorted_10A65550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Config.h"

class Class_10A66110
{
public:
    virtual ~Class_10A66110();
};

class cBorderWindow : public Class_10A66110
{
public:
    virtual ~cBorderWindow();

    void FUN_10a66190();

    char Unknown04[0x13C];
    cString Unknown140;
    cString Unknown144;
    cString Unknown148;
    cString Unknown14C;
};

extern const char DAT_10e47660[];

extern const char DAT_10e6ad98[];

extern const char DAT_10e6ad8c[];

extern const char DAT_10e6ad80[];

extern const char DAT_10e6ad74[];

extern const char DAT_10e6ad68[];

Class_10905A90_Member* GetAllocator();

int appStricmp(const char* A, const char* B);

// The window class whose vtable (0x10E68B10) has this function in slot 114.
class Class_10E68B10
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

    virtual void FUN_10a655d0(Class_10AF7F80* A, Class_10AF7F80* B, Class_10AF7F80* C, int* D);
};

// FUNCTION: 0x10A655D0 ?FUN_10a655d0@Class_10E68B10@@UAEXPAVClass_10AF7F80@@00PAH@Z
void Class_10E68B10::FUN_10a655d0(Class_10AF7F80* A, Class_10AF7F80* B, Class_10AF7F80* C, int* D)
{
    cString Value;
    if (Config::Instance()->GetString(B->operator*(), C->operator*(), &Value.Unknown00, A->operator*()))
    {
        if (appStricmp(DAT_10e6ad98, *Value) == 0)
            *D = 0;
        else if (appStricmp(DAT_10e6ad8c, *Value) == 0)
            *D = 0;
        else if (appStricmp(DAT_10e6ad80, *Value) == 0)
            *D = 1;
        else if (appStricmp(DAT_10e6ad74, *Value) == 0)
            *D = 1;
        else if (appStricmp(DAT_10e6ad68, *Value) == 0)
            *D = 2;
    }
}

// FUNCTION: 0x10A66190 ??1Class_10A66190@@UAE@XZ
cBorderWindow::~cBorderWindow()
{
}
