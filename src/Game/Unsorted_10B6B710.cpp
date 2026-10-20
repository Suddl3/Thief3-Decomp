// Game/Unsorted_10B6B710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A58FE0.h"

class Class_10E6B078_Member;

// The object cTextWindow holds at +0x140: the target calls its slot 1.
class Class_10B6B820_Unknown140
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, bool B, bool C);
};

// cTextWindow copied whole from include/Game/cTextWindow.h, with the fields
// at +0x140 and +0x180 the target reads named.
class cTextWindow
{
public:
    virtual ~cTextWindow();
    virtual bool HandleKey(int A, bool B, bool C);
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
    virtual bool Virtual53();
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
    virtual bool Virtual64(int A);

    cTextWindow();

    char Unknown04[0xC0];
    Class_10E6B078_Member* Unknown0C4;
    char PadC8[0x20];
    int Unknown0E8;
    char Unknown0EC[0x54];
    Class_10B6B820_Unknown140* Unknown140;
    char Unknown144[0x3C];
    int Unknown180;
    char Unknown184[0x34];
};

// The class owning the vtable at 0x10E85AD8, whose slot 1 this function is.
class Class_10E85AD8 : public cTextWindow
{
public:
    void ResetState();
    void FUN_10b6af70();
    void FUN_10b6a0a0();
    void FUN_10b6b710();

    virtual bool HandleKey(int A, bool B, bool C);
};

// FUNCTION: 0x10B6B820 ?HandleKey@Class_10E85AD8@@UAE_NH_N0@Z
bool Class_10E85AD8::HandleKey(int Key, bool Modifier, bool Flag)
{
    if (!Flag)
        return true;

    switch (Key)
    {
    case 0x1d:
        if (Unknown180 == 1 && Unknown140)
        {
            bool Handled = Unknown140->Virtual1(0x1d, Modifier, Flag);
            if (Handled)
                return true;
        }
        FUN_10b6b710();
        return false;

    case 0x1e:
        if (Unknown180 == 2)
        {
            FUN_10b6af70();
        }
        else if (Unknown180 == 1)
        {
            if (!Unknown140 || !Unknown140->Virtual1(0x1e, Modifier, Flag))
            {
                ResetState();
            }
        }
        else
        {
            FUN_10b6a0a0();
        }
        return true;

    default:
        if (Unknown180 == 1 && Unknown140)
        {
            if (Unknown140->Virtual1(Key, Modifier, Flag))
                return true;
        }
        if (Unknown180 != 1 && Unknown180 != 2)
            return cTextWindow::HandleKey(Key, Modifier, Flag);
        return false;
    }
}
