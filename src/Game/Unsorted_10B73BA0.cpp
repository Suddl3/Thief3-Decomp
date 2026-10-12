// Game/Unsorted_10B73BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B717E0.h"

class Class_10E67FD0;

class Class_10B73C30_Unknown1E4
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

class Class_10B73C30 : public Class_10B717E0
{
public:
    void FUN_10b73a00(int A);
    void FUN_10b71240(int A);
    void FUN_10b73c30(int Mode);
};

// FUNCTION: 0x10B73C30 ?FUN_10b73c30@Class_10B73C30@@QAEXH@Z
void Class_10B73C30::FUN_10b73c30(int Mode)
{
    switch (Mode)
    {
    case 0:
        FUN_10b73a00(1);
        for (int i = 0; i < Unknown1DC; i++)
            Unknown1E4[i]->Virtual56(0);
        SetChildStates(false);
        break;
    case 1:
        FUN_10b73a00(0);
        FUN_10b71240(1);
        SetChildStates(false);
        break;
    case 2:
        FUN_10b73a00(0);
        for (int i = 0; i < Unknown1DC; i++)
            Unknown1E4[i]->Virtual56(0);
        SetChildStates(true);
        break;
    }
}
