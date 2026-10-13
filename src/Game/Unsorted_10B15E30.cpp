// Game/Unsorted_10B15E30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B154C0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/WindowManager.h"
#include "Game/cString.h"

// Game/Class_10B45AD0.h does not declare FUN_10b2a610, which the window calls on itself: this copy has it.
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

    void FUN_10b45ad0(int A);
    void FUN_10b2a610(void* A, int* B);

    char Pad04[0x154];
    int Unknown158;
    char Pad15C[0x1];
    char Unknown15D;
    char Pad15E[0x2];
};

// FUNCTION: 0x10B15E30 ?FUN_10b15e30@Class_10B154C0@@QAEXPAXH@Z
void Class_10B154C0::FUN_10b15e30(void* A, int B)
{
    Class_10B45AD0* Window;
    {
        cString Name("HUDWindow.AlertTextOverlay");
        Window = (Class_10B45AD0*)((WindowManager*)this)->FindWindowByName(Name);
    }
    if (Window)
    {
        if (Window->Virtual39() == 0x65)
        {
            Window->FUN_10b2a610(A, &B);
        }
    }
}
