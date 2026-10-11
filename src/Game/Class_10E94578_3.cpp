// Game/Class_10E94578_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BC4160.h"
#include "Game/Class_10BB8600.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10E97B00.h"

class Class_10E90C5C;

class FArchive;

class Class_10E94578 : public Class_10BC4160
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

    void FUN_10bc5b50();
    void FUN_10bcb850(FArchive& Ar);
    bool FUN_10bc40e0();
    void FUN_10bca4f0();
    void FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, Class_109081E0* Out, bool Flag);

    char Pad04[0x18];
    Class_10E90C5C* Unknown1C;
};

// FUNCTION: 0x10BCA4F0 ?FUN_10bca4f0@Class_10E94578@@QAEXXZ
void Class_10E94578::FUN_10bca4f0()
{
    if (!((Class_10BB8600*)Unknown04)->FUN_10bb8600())
    {
        Class_109081E0 Text("redalert");
        FUN_10bc7d70(&Class_10E97B00("+Inform:arrive,+ArrivalStatus:present"), 0x28, 4, &Text, true);
    }
}
