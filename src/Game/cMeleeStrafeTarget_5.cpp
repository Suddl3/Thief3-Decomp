// Game/cMeleeStrafeTarget_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10AA82D0.h"

float GetFrameDeltaTime();

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BDB050 : public Class_10BC4160
{
public:
    bool FUN_10bdb050();
};

class Class_10E94100 : public Class_10BDB050
{
public:
    void FUN_10bc4360(int Param);
};

class Class_10BDB860_Unknown08
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
    virtual int Virtual53(Class_10BBB410* Param);
};

class cMeleeStrafeTarget : public Class_10E94100
{
public:
    void FUN_10bdb860();

    Class_10BBB410* Unknown04;
    Class_10BDB860_Unknown08* Unknown08;
    char Pad0C[0x54];
    bool Unknown60;
    char Pad61[0x3];
    int m_WaitCount;
    float Unknown68;
};

// FUNCTION: 0x10BDB860 ?FUN_10bdb860@cMeleeStrafeTarget@@QAEXXZ
void cMeleeStrafeTarget::FUN_10bdb860()
{
    Class_10BF7F90* Result = FUN_10bc4160();
    if (Unknown04->GetCurrent() != 0)
    {
        if (Result->GetLinkedObject() == 0)
        {
            if (FUN_10bdb050())
            {
                Unknown68 = 0.0f;
                return;
            }
            Unknown68 += GetFrameDeltaTime();
            if (!FUN_10bdb050() && Unknown68 > 2.0f)
            {
                Class_10BBB410* Item = Unknown04;
                int Count = Unknown08->Virtual53(Item);
                if (Count != 0)
                    FUN_10bc4360(Count);
            }
        }
    }
}
