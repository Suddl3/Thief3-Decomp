// Game/Class_10E93020_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BA9EC0.h"
#include "Game/Class_10BFC190.h"
#include "Game/Class_10C00C70.h"
#include "Game/Class_10BD0270.h"

class Class_10BF7F90 : public Class_10AA82D0
{
};

struct Struct_10BC4240_Param;

class Class_10BE3FF0
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
    virtual void Virtual63();
    virtual void Virtual64();
    virtual float Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual bool Virtual74();
    virtual bool Virtual75();
};

class Class_10BB89D0
{
public:
    Class_10BE3FF0* FUN_10bb89d0();
    void FUN_10bbc0f0(int A);

    char Unknown00[8];
    Class_10BA9EC0* Unknown08;
    char Pad0C[0x24];
    Class_10BFC190 Unknown30;
    char Pad50[0x2ec];
    float Unknown33C;
    char Pad340[0x20];
};

class Class_10E90D70
{
public:
    virtual void Virtual0();

    Class_10BB89D0* Unknown04[15];
};

class Class_10E93020 : public Class_10E90D70
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10bd0f30();

    Class_10BF7F90* FUN_10bc4160();
    void PopState();
    Struct_10BC4240_Param* FUN_10bc58f0(int A, int B, int C);
    void FUN_10bc4360(int A);
    void FUN_10bd0d80(Class_10BD0270* A, int B);

    Class_10BD0270* m_CurrentAction;
    Class_10BD0270* m_ActionQueue[4];
    bool Unknown54;
    bool Unknown55;
    bool Unknown56;
    char Pad57[0x1];
};

// FUNCTION: 0x10BD0F30 ?FUN_10bd0f30@Class_10E93020@@UAEXXZ
void Class_10E93020::FUN_10bd0f30()
{
    if (!(FUN_10bc4160() && FUN_10bc4160()->FUN_10aa82d0() != 0))
    {
        if (m_CurrentAction)
        {
            delete m_CurrentAction;
            m_CurrentAction = 0;
            for (int I = 0; I < 3; I++)
                m_ActionQueue[I] = m_ActionQueue[I + 1];
        }
        if (m_ActionQueue[0])
        {
            FUN_10bd0d80(m_ActionQueue[0], 0);
            return;
        }
        if (!Unknown56 || !((Class_10C00C70*)Unknown04[0]->Unknown08->FUN_10ba9ec0())->FUN_10c00c70())
        {
            PopState();
            return;
        }
    }
    Class_10BE3FF0* P = Unknown04[0]->FUN_10bb89d0();
    if (P)
    {
        if (P->Virtual74() || P->Virtual75())
            PopState();
    }
    else
    {
        Struct_10BC4240_Param* R = FUN_10bc58f0(0, 1, 1);
        if (R)
            FUN_10bc4360((int)R);
    }
}
