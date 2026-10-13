// Game/Unsorted_10B16930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/WindowManager.h"
#include "Game/cString.h"
#include "Game/Class_10B2E6F0.h"
#include "Game/Class_10E7B6E8.h"

class cIntArray;

class Class_10B16930 : public WindowManager
{
public:
    cIntArray FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void ShowJunkItemWindow(int A);
    void FUN_10b16ef0(int A);

    char Pad00[0x1];
};

class Class_10B16930_Window
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

// FUNCTION: 0x10B16930 ?FUN_10b16930@Class_10B16930@@QAEXXZ
void Class_10B16930::FUN_10b16930()
{
    Class_10B16930_Window* Window;
    {
        cString Name("HUDWindow.JunkItemWindow");
        Window = (Class_10B16930_Window*)FindWindowByName(Name);
    }
    ((Class_10E7B6E8*)Window)->FUN_10b2e840(false);
    Window->Virtual56(0);
    ((Class_10B2E6F0*)Window)->FUN_10b2e6f0();
}
