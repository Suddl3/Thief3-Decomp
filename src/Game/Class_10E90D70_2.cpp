// Game/Class_10E90D70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10E97B00.h"

class Class_10E90D70
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
    virtual int FUN_10bc8840(const Class_1090A780& Name, bool Flag);

    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    int FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, Class_109081E0* Out, bool Flag);

    int Unknown04[15];
};

// FUNCTION: 0x10BC8840 ?FUN_10bc8840@Class_10E90D70@@UAEHABVClass_1090A780@@_N@Z
int Class_10E90D70::FUN_10bc8840(const Class_1090A780& Name, bool Flag)
{
    int Count = Flag ? 3 : 6;
    Class_109081E0 Text(DAT_10e47660);
    return FUN_10bc7d70(&Class_10E97B00(Name), 0x1e, Count, &Text, true);
}
