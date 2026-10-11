// Game/Unsorted_10B16EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10BFBD70.h"
#include "Game/WindowManager.h"
#include "Game/Class_109081E0.h"

class Class_10B45AD0;

class Class_10B45AD0
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
    virtual int Virtual39();
};

class Class_10B16930
{
public:
    Class_10BFBD70 FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void FUN_10b16860(int A);
    void FUN_10b16ef0(bool A);

    char Pad00[0x1];
};

// FUNCTION: 0x10B16EF0 ?FUN_10b16ef0@Class_10B16930@@QAEX_N@Z
void Class_10B16930::FUN_10b16ef0(bool A)
{
    Class_10B45AD0* Window;
    {
        Class_109081E0 Name("FMVWindow");
        Window = (Class_10B45AD0*)((WindowManager*)this)->FUN_109e5960(Name);
    }
    if (Window)
    {
        if (Window->Virtual39() == 0x78)
        {
            if (A)
            {
                ((Class_109E6D60*)this)->Virtual4((int)Window);
                return;
            }
            ((WindowManager*)this)->FUN_109e6b20(1);
        }
    }
}
