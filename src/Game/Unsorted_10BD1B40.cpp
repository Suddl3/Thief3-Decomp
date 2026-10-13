// Game/Unsorted_10BD1B40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB85E0.h"
#include "Game/Class_10BB8640.h"

class Class_10BB89D0;

class Class_10E93878
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
    virtual int FUN_10bd1b40();

    Class_10BB89D0* Unknown04;
    char Unknown08[0x48];
    unsigned char Unknown50;
    char Unknown51[0x55];
    unsigned char UnknownA6;
};

// FUNCTION: 0x10BD1B40 ?FUN_10bd1b40@Class_10E93878@@UAEHXZ
int Class_10E93878::FUN_10bd1b40()
{
    if (!Unknown50)
        return 0x1a;
    if (UnknownA6)
    {
        Unknown50 = 1;
        UnknownA6 = 0;
    }
    if (reinterpret_cast<Class_10BB85E0*>(Unknown04)->FUN_10bb85e0())
    {
        if ((int)reinterpret_cast<Class_10BB8640*>(Unknown04)->FUN_10bb8640() == 2)
            return 0x1c;
        if ((int)reinterpret_cast<Class_10BB8640*>(Unknown04)->FUN_10bb8640() == 3)
            return 0x1c;
    }
    switch (Unknown50 % 3)
    {
    case 0:
        return 0x1c;
    case 1:
        return 0x19;
    case 2:
        return 0x1a;
    }
    return 0;
}
