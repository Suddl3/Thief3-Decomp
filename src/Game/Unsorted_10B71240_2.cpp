// Game/Unsorted_10B71240_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Class_10B73C30::FUN_10b71240 (third attempt): refreshes the option toggles from the
// options file and tells the engine's key handler about the new selection.

#include "Game/cString.h"
#include "Game/Class_10B79180.h"
#include "Game/Options.h"

// include/Game/Class_10A59370.h, copied whole with the virtual slot it needs added.
class Class_10A59370
{
public:
    virtual void Virtual0();
    void SetStringAt(int Index, const cString& Value);

    char Unknown00[0x1BC];
    cString m_Strings[4];
};

class Class_10B71240_Unknown188
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
    virtual void Virtual114();
    virtual void Virtual115();
    virtual void Virtual116();
    virtual void Virtual117();
    virtual void Virtual118();
    virtual void Virtual119();
    virtual void Virtual120();
    virtual void Virtual121(int A);
    char Pad04[0x1EC];
    int Unknown1F0;
    int Unknown1F4;
};

// The window the toggles live in: slot 49 sets a value, slot 50 reads it back.
class Class_10B71240_Window
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
    virtual void Virtual49(int A, void* B);
    virtual int Virtual50(int A);
};

// One entry of the list the engine walks at the start.
class Class_10B71240_Element
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
    virtual void Virtual56(int A);
};

// The object that holds the three windows.
class Class_10B71240_Unknown1CC
{
public:
    char Pad00[0x128];
    Class_10B71240_Window** Unknown128;
};

// include/Game/cOptionToggle.h, copied with the slots this function calls named.
class cOptionToggle : public Class_10A59370
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
    virtual void Virtual49(int A, int B);
    virtual int Virtual50(int A);

    void SetSelection(int A);
};

// The object that owns the option toggles.
class Class_10B73C30
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
    virtual Class_10B79180* Virtual41();

    void FUN_10b71240(bool A);

    char Pad04[0x184];
    Class_10B71240_Unknown188* Unknown188;
    char Pad18C[0x28];
    cOptionToggle* Unknown1B4;
    cOptionToggle* Unknown1B8;
    cOptionToggle* Unknown1BC;
    cOptionToggle* Unknown1C0;
    char Pad1C4[0x4];
    Class_10B71240_Window* Unknown1C8;
    Class_10B71240_Unknown1CC* Unknown1CC;
    char Pad1D0[0xC];
    int Unknown1DC;
    char Pad1E0[0x4];
    Class_10B71240_Element** Unknown1E4;
};

extern cString DAT_10f3a0e0;

Options* __cdecl GetOptions();

// FUNCTION: 0x10B71240 ?FUN_10b71240@Class_10B73C30@@QAEX_N@Z
void Class_10B73C30::FUN_10b71240(bool A)
{
    int Flag = A ? 2 : 0;
    for (int Index = 0; Index < Unknown1DC; Index++)
        Unknown1E4[Index]->Virtual56(Flag);
    if (!A)
        return;

    Class_10B79180* Handler = Virtual41();
    int Key = Handler->FindKeyByValue((int)(size_t)this);
    if (Unknown1C8)
        Unknown1C8->Virtual49(2, Unknown1C0);
    Unknown1CC->Unknown128[0]->Virtual49(3, Unknown1B4);
    Unknown1CC->Unknown128[1]->Virtual49(3, Unknown1B4);
    Unknown1CC->Unknown128[2]->Virtual49(3, Unknown1B4);

    if (Unknown1B4)
    {
        int Value = GetOptions()->Get(2);
        Unknown1B4->SetSelection(Value);
        Unknown1B4->Virtual49(1, Key);
        if (!Unknown1B4->Virtual50(1))
            Unknown1B4->SetStringAt(1, DAT_10f3a0e0);
    }
    if (Unknown1B8)
    {
        int Value = GetOptions()->Get(3);
        Unknown1B8->SetSelection(Value);
        Unknown1B8->Virtual49(1, Key);
        if (!Unknown1B8->Virtual50(1))
            Unknown1B8->SetStringAt(1, DAT_10f3a0e0);
    }
    if (Unknown1BC)
    {
        int Value = GetOptions()->Get(4);
        Unknown1BC->SetSelection(Value);
        Unknown1BC->Virtual49(1, Key);
        if (!Unknown1BC->Virtual50(1))
            Unknown1BC->SetStringAt(1, DAT_10f3a0e0);
    }
    if (Unknown1C0)
    {
        int Value = GetOptions()->Get(10);
        Unknown1C0->SetSelection(Value);
        Unknown1C0->Virtual49(1, Key);
        if (!Unknown1C0->Virtual50(1))
            Unknown1C0->SetStringAt(1, DAT_10f3a0e0);
    }

    if (Unknown188)
    {
        Unknown188->Virtual121(0);
        Unknown188->Unknown1F4 = Unknown188->Unknown1F0;
    }
}
