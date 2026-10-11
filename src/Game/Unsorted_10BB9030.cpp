// Game/Unsorted_10BB9030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10BB7F30.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10BC9A50.h"

extern float DAT_10eafbdc;

extern "C" void* memset(void*, int, unsigned);

double FUN_10c00480();

class Class_10BC9D40
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
    virtual bool Virtual63();
};

// The address of an object passed by reference.
inline Class_10E97B00* AddressOf(const Class_10E97B00& Object)
{
    return (Class_10E97B00*)&Object;
}

class Class_10BBB410 : public Class_10BB7F30
{
public:
    void FUN_10bb9260();

    char Pad0C[0x1C0];
    FVector Unknown1CC;
    char Pad1D8[0x4];
    float Unknown1DC;
    char Pad1E0[0x4];
    int Unknown1E4;
    char Pad1E8[0x4];
    bool Unknown1EC;
};

// FUNCTION: 0x10BB9260 ?FUN_10bb9260@Class_10BBB410@@QAEXXZ
void Class_10BBB410::FUN_10bb9260()
{
    if (Unknown1E4 != 0)
    {
        float Value = Unknown08->FUN_10dbd510(0x10024f)->FUN_10bbdb40();
        if (Value > DAT_10eafbdc)
        {
            double Limit = Value + Unknown1DC;
            if (Limit < FUN_10c00480())
            {
                Unknown1DC = 0.0f;
                memset(&Unknown1CC, 0, sizeof(FVector));
                Unknown1E4 = 0;
                Unknown1EC = false;
                if (FUN_10bb7f30()->FUN_10b9cac0()->Virtual63())
                {
                    Class_109081E0 Text(DAT_10e47660);
                    ((Class_10BC9A50*)FUN_10bb7f30()->FUN_10b9cac0())->FUN_10bc7d70(AddressOf(Class_10E97B00("+reprimandplayer:ramp_down")), 0x14, 1, &Text, true);
                }
            }
        }
    }
}
