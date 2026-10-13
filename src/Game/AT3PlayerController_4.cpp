// Game/AT3PlayerController_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39A70.h"
#include "Game/TimeManager.h"
#include "Game/Static_10B3A410.h"

class Class_10B1D460_pad0;

class Class_10B21C80;

class Class_10B22D70;

struct Static_10B3A410;

Static_10B3A410* FUN_10b3a410();

class Class_10B21C80
{
public:
    void FUN_10b21c80(int A);
};

class Class_10B22D70
{
public:
    void FUN_10b22d70(int A);
};

class Class_10B1D460_pad0
{
public:
    Class_10B39A70* Unknown00;
    Class_10B22D70* Unknown04;
};

extern bool DAT_10ff36ec;

class AT3PlayerController
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
    virtual int FUN_10b1d460(int A, int B);

    char Pad04[0xBC];
    Class_10B21C80* Unknown0C0;
    char Pad0C4[0x1FC];
    unsigned int bIsActive : 1;
    Class_10B1D460_pad0* pad0;
};

// FUNCTION: 0x10B1D460 ?FUN_10b1d460@AT3PlayerController@@UAEHHH@Z
int AT3PlayerController::FUN_10b1d460(int A, int B)
{
    if (bIsActive)
    {
        if (!TimeManager::Instance()->IsPaused())
        {
            if (!DAT_10ff36ec)
            {
                Class_10B21C80* Obj = Unknown0C0;
                Obj->FUN_10b21c80(0);
                FUN_10b3a410()->FUN_10b39cb0(Obj);
                DAT_10ff36ec = true;
            }
            Class_10B39A70* H = pad0 == 0 ? 0 : pad0->Unknown00;
            H->FUN_10b39a70(A);
            Class_10B22D70* X = pad0 == 0 ? 0 : pad0->Unknown04;
            X->FUN_10b22d70(A);
        }
    }
    return 1;
}
