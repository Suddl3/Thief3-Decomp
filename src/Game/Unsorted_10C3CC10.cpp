// Game/Unsorted_10C3CC10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

class Class_1098E330
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
    virtual float Virtual69();
};

class APlayerPawn : public Class_1098E330
{
public:
    char Unknown04[0x74];
    unsigned int bDeleteMe : 1;
    unsigned int bTicked : 1;
    unsigned int bIsPawn : 1;
};

class AGarrett : public APlayerPawn
{
public:
    bool FUN_109a54b0();
};

extern float DAT_10eafbdc;

extern float DAT_10e4a640;

void FUN_10a4acf0(float* A, FVector B, int C, int D, float E);

float FUN_10968dd0(float A, int B, float C);

// FUNCTION: 0x10C3CDD0 ?FUN_10c3cdd0@@YAMPAVClass_10C7D570@@PAVFVector@@PAVAGarrett@@_N@Z
float FUN_10c3cdd0(Class_10C7D570* Obj, FVector* V, AGarrett* Q, bool Flag)
{
    if (Obj->FUN_10dbd510()->FUN_10bbdad0(0x4010039f) > DAT_10eafbdc)
        return Obj->FUN_10dbd510()->FUN_10bbdad0(0x4010039f);
    if (Q && Q->bIsPawn && Q->FUN_109a54b0())
        return DAT_10eafbdc;
    float X;
    if (Flag)
    {
        float Tmp[3];
        FUN_10a4acf0(Tmp, *V, 2, 0, 1.0f);
        X = (Tmp[0] + Tmp[1] + Tmp[2]) * DAT_10e4a640;
    }
    else
        X = Q->Virtual69();
    return FUN_10968dd0(X, 0, 1.0f);
}
