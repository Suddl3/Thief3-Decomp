// Game/Unsorted_10B2F0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_1090C880.h"
#include "Game/Class_10A52BE0.h"

extern const char DAT_10e7b930[];

cString FUN_1090a660(const char* Format, ...);

// Copied whole from include/Game/Class_10E684A8.h. Its virtuals named Virtual18
// to Virtual54 override the base's slots; FUN_10a55020 and SetLocation are the
// first new slots (55, 56). The placeholders fill slots 57 to 88 so that
// Virtual89 (a flag and an int) sits at slot 89, 0x164 in the vtable.
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
    virtual void Virtual89(bool A, int B);

    void SetNameByIndex(int A);

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

// Copied whole from include/Game/cCountLabel.h, with Unknown120 typed as the
// Class_10E684A8 the function calls through (the header has void*).
class cCountLabel
{
public:
    void RefreshLabel();
    void SetHideCount(unsigned char param);
    void SetName(const cString& Name);
    void SetCount(int p1);

    char Unknown00[0x120];
    Class_10E684A8* m_Label;
    char Unknown124[0x18];
    cString m_Name;
    char Pad140[0x4];
    int m_Count;
    unsigned char m_HideCount;
};

// FUNCTION: 0x10B2F590 ?RefreshLabel@cCountLabel@@QAEXXZ
void cCountLabel::RefreshLabel()
{
    if (m_Label)
    {
        cString Text(FUN_1090a660(DAT_10e47660));
        if (m_Count > 0)
        {
            Text = FUN_1090a660(DAT_10e7b930, m_Count);
        }
        m_Label->SetNameByIndex((int)&Text);
        if (!m_HideCount && m_Count >= 1)
        {
            m_Label->Virtual89(true, 1);
        }
        else
        {
            m_Label->Virtual89(false, 1);
        }
    }
}
