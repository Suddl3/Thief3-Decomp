// Game/Unsorted_10BEF240_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"

struct Struct_10BA91E0;

class Class_10BF1C40_Unknown40
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
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual float Virtual71();
};

class Class_10BF1C40
{
public:
    bool FUN_10bf1c40();
    float FUN_10bef370();
    bool FUN_10bf0ea0(Struct_10BA91E0* Out, int Id, bool Flag);

    char Unknown00[4];
    Class_10BBB410* Unknown04;
    char Unknown08[0x38];
    Class_10BF1C40_Unknown40* Unknown40;
    char Unknown44[0xC];
    float Unknown50;
};

class Class_10BEF3F0 : public Class_10BF1C40
{
public:
    bool FUN_10bef3f0(bool Flag);
};

// FUNCTION: 0x10BEF3F0 ?FUN_10bef3f0@Class_10BEF3F0@@QAE_N_N@Z
bool Class_10BEF3F0::FUN_10bef3f0(bool Flag)
{
    Class_10BFF460* Obj = Unknown04->GetCurrent();
    float B;
    float A;
    if (Unknown40)
        A = Unknown40->Virtual71();
    else
        A = 0.0f;
    B = FUN_10bef370();
    if (Obj)
    {
        if (Obj->FUN_10bff330() || Flag)
        {
            if (B < A)
                return true;
        }
    }
    return false;
}
