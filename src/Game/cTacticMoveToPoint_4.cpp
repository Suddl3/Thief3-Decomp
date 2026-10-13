// Game/cTacticMoveToPoint_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"
#include "Game/Class_10BC4160.h"
#include "Game/FArchive.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"

class Class_10E90C5C;

void FUN_10c11ff0(FArchive& Ar, int* Value);

extern Class_10FF667C* DAT_10ff667c;

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
    char Pad24[0x1C];
    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    int Unknown54;
    char Unknown58;
};

// FUNCTION: 0x10BCB850 ?FUN_10bcb850@cTacticMoveToPoint@@QAEXAAVFArchive@@@Z
void cTacticMoveToPoint::FUN_10bcb850(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    unsigned char Flag = (unsigned char)Unknown40;
    Ar.Serialize(&Flag, 1);
    if (Ar.Unknown14)
        Unknown40 = Flag;
    FUN_10c11ff0(Ar, &Unknown44);
    FUN_10c11ff0(Ar, &Unknown48);
    FUN_10c11ff0(Ar, &Unknown4C);
    Ar.Serialize(&Unknown50, 4);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown54);
    Ar.Serialize(&Unknown58, 1);
}
