// Game/State_Sit_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Game/Class_10AA82D0.h"

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10E8BE68 : public Class_10BC4160
{
public:
    void PopState();
};

float GetFrameDeltaTime();

class Class_10BDF700_Unknown08
{
public:
    char Pad00[0x64];
    bool Unknown64;
};

class Class_10BDF700_Unknown04
{
public:
    char Pad00[0x8];
    Class_10BDF700_Unknown08* Unknown08;
};

class State_Sit : public Class_10E8BE68
{
public:
    virtual void Virtual0(); virtual void Virtual1(); virtual void FUN_10bdf700(); virtual void Virtual3(); virtual void Virtual4(); virtual void Virtual5(); virtual void Virtual6(); virtual void Virtual7();
    virtual void Virtual8(); virtual void Virtual9(); virtual void Virtual10(); virtual void Virtual11(); virtual void Virtual12(); virtual void Virtual13(); virtual void Virtual14(); virtual void Virtual15();
    virtual void Virtual16(); virtual void Virtual17(); virtual void Virtual18(); virtual void Virtual19(); virtual void Virtual20(); virtual void Virtual21(); virtual void Virtual22(); virtual void Virtual23();
    virtual void Virtual24(); virtual void Virtual25(); virtual void Virtual26(); virtual void Virtual27(); virtual void Virtual28(); virtual void Virtual29(); virtual void Virtual30(); virtual void Virtual31();
    virtual void Virtual32(); virtual void Virtual33(); virtual void Virtual34(); virtual void Virtual35(); virtual void Virtual36(); virtual void Virtual37(); virtual void Virtual38(); virtual void Virtual39();
    virtual void Virtual40(); virtual void Virtual41(); virtual void Virtual42(); virtual void Virtual43(); virtual void Virtual44(); virtual void Virtual45(); virtual void Virtual46(); virtual void Virtual47();
    virtual void Virtual48(); virtual void Virtual49(); virtual void Virtual50(); virtual void Virtual51(); virtual void Virtual52(); virtual void Virtual53(); virtual void Virtual54(); virtual void Virtual55();
    virtual void Virtual56(); virtual void Virtual57(); virtual void Virtual58(); virtual void Virtual59(); virtual void Virtual60(); virtual void Virtual61(); virtual void Virtual62(); virtual void Virtual63();
    virtual void Virtual64(); virtual void Virtual65(); virtual void Virtual66(); virtual void Virtual67(); virtual void Virtual68(); virtual void Virtual69(); virtual void Virtual70(); virtual void Virtual71();

    void FUN_10bdf180();
    void FUN_10bc46e0(int A, int B, int C);

    Class_10BDF700_Unknown04* Unknown04;
    char Pad08[0x44];
    bool Unknown4C;
    char Pad4D;
    bool Unknown4E;
    char Pad4F;
    int Unknown50;
    int Unknown54;
    float Unknown58;
};

// FUNCTION: 0x10BDF700 ?FUN_10bdf700@State_Sit@@UAEXXZ
void State_Sit::FUN_10bdf700()
{
    if (!Unknown4E)
        Virtual71();
    FUN_10bdf180();
    Class_10BF7F90* Obj = FUN_10bc4160();
    if (Unknown58 > 0.0f)
    {
        double Remaining = Unknown58;
        Unknown58 = Remaining - GetFrameDeltaTime();
    }
    else
    {
        if (Unknown04->Unknown08->Unknown64)
            Unknown04->Unknown08->Unknown64 = false;
    }
    if (Unknown4C && Obj && Obj->GetLinkedObject() == 0)
    {
        if (Unknown50 != 0)
            FUN_10bc46e0(Unknown50, Unknown54, 1);
        else
            PopState();
    }
}
