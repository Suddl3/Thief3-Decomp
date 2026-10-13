// Game/Class_10E8BE68_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Class_10A36450.h"
#include "Game/Struct_10A36570.h"

extern float DAT_10eafbdc;

Class_10A36450* FUN_10a36710();

class Class_10BC4040_Unknown04
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E8BE68
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
    virtual bool FUN_10bc4040();

    Class_10BC4040_Unknown04* Unknown04;
};

// FUNCTION: 0x10BC4040 ?FUN_10bc4040@Class_10E8BE68@@UAE_NXZ
bool Class_10E8BE68::FUN_10bc4040()
{
    int Obj = (int)Unknown04->Unknown08->FUN_10c7d570();
    Struct_10A36570 Buf;
    Struct_10A36570 V = *FUN_10a36710()->GetVulnerability(&Buf, Obj, 8);
    if (V.Unknown00 > DAT_10eafbdc)
        return true;
    V = *FUN_10a36710()->GetVulnerability(&Buf, Obj, 10);
    if (V.Unknown00 > DAT_10eafbdc)
        return true;
    return false;
}
