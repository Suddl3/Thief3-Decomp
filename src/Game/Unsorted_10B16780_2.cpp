// Game/Unsorted_10B16780_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B16930.h"
#include "Game/Class_10B2B9E0.h"
#include "Game/WindowManager.h"
#include "Game/Class_10B2E720.h"
#include "Game/cCountLabel.h"
#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10B16D80.h"
#include "Game/Class_10B2EEA0.h"
#include "Game/Class_10E7B6E8.h"

extern const char DAT_10e7919c[];

class Class_10B16D80_Window
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
    virtual bool Virtual54();
    virtual void Virtual55();
    virtual void Virtual56(int A);
};

// FUNCTION: 0x10B16D80 ?ToggleLockPickWindow@Class_10B16D80@@QAEXH@Z
void Class_10B16D80::ToggleLockPickWindow(int A)
{
    Class_10B16D80_Window* Window;
    {
        cString Name(DAT_10e7919c);
        Window = (Class_10B16D80_Window*)FindWindowByName(Name);
    }
    if (Window)
    {
        if (Window->Virtual54())
        {
            Window->Virtual56(0);
            return;
        }
        Window->Virtual56(1);
    }
}
