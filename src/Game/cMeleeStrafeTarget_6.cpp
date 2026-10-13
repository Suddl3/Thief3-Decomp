// Game/cMeleeStrafeTarget_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

float GetFrameDeltaTime();

class Class_10B47720;

struct Struct_10B4C2C0;

class Class_10E90C5C;

class FArchive;

class Class_10BBB410;

class Class_10BF7F90;

class Class_10BB8A60;

class Class_10BDB7C0_Link;

class Class_10B39870
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();

    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown04[0x8];
    Class_10B47720* Unknown0C;
};

class Class_10BB8A60
{
public:
    void Tick(float Delta);

    char Unknown00[0x8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x24C];
    float Unknown258;
};

class Class_10BDB7C0_Link
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
    virtual bool Virtual46();
};

class Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10BDB7C0_Link* GetLinkType();

    char unknown_04[0x10];
    int unknown_14;
};

class Class_10AA82D0 : public Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();

    char Pad01[0x3];
    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
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

    Class_10BF7F90* FUN_10bc4160();

    Class_10BB8A60* Unknown04;
};

class cTacticMoveToPoint : public Class_10BC4160
{
public:
    virtual void FUN_10bdaf10();
    virtual void FUN_10bdb0f0();
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
    virtual void FUN_10bcac50(int A, int B, int C, int D, int E);
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void FUN_10bdaf20(int Param);

    void PopState();
    void FUN_10bcb850(FArchive& Ar);
    bool FUN_10bc40e0();
    void InformArrival();

    char Pad04[0x18];
    Class_10E90C5C* Unknown1C;
};

class cMeleeStrafeTarget : public cTacticMoveToPoint
{
public:
    virtual void FUN_10bdb0a0();
    virtual void Virtual1();
    virtual void FUN_10bdf080();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10bdafa0();
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
    virtual void FUN_10bdb090();

    void FUN_10bdb7c0();
    void FUN_10bdeda0();
    void FUN_10bdb860();
    void FUN_10bdbf70();

    Class_10BBB410* Unknown04;
    char Unknown08[0x58];
    bool Unknown60;
    char Pad61[0x3];
    int m_WaitCount;
};

// FUNCTION: 0x10BDB7C0 ?FUN_10bdb7c0@cMeleeStrafeTarget@@QAEXXZ
void cMeleeStrafeTarget::FUN_10bdb7c0()
{
    Class_10B39870* Linked = FUN_10bc4160()->GetLinkedObject();
    if (Linked && FUN_10bc4160() && FUN_10bc4160()->GetLinkedObject() && FUN_10bc4160()->GetLinkType()->Virtual46())
    {
        if (Linked->Virtual5() == 22)
        {
            Class_10BB8A60* Member = Class_10BC4160::Unknown04;
            double Value = Member->Unknown08->FUN_10dbd510(0x401004b4)->GetFloat();
            Member->Tick((float)(GetFrameDeltaTime() * Value));
        }
    }
}
