// Game/Class_10E90A68.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E90A68.h"

class Class_10BBD9D0_CC
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
    virtual void Virtual44(int A, int B);
};

struct Struct_10AA3520
{
    char Unknown00[0xCC];
    Class_10BBD9D0_CC** UnknownCC;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E90A68;

void FUN_10bbd8f0(cIntArray* A);

void FUN_10c27990(Class_10E90A68* A);

// FUNCTION: 0x10BBD9D0 ??1Class_10E90A68@@UAE@XZ
Class_10E90A68::~Class_10E90A68()
{
    FUN_10bbd8f0(&Unknown18);
    FUN_10c27990(this);
    Class_10BBD9D0_CC** Slot = DAT_10f35dec->UnknownCC;
    if (Slot)
    {
        Class_10BBD9D0_CC* Mgr = *Slot;
        if (Mgr)
        {
            if (Unknown04)
            {
                Mgr->Virtual44(Unknown04, 0);
                Unknown04 = 0;
            }
            if (Unknown08)
            {
                Mgr->Virtual44(Unknown08, 0);
                Unknown08 = 0;
            }
            if (Unknown0C)
            {
                Mgr->Virtual44(Unknown0C, 0);
                Unknown0C = 0;
            }
            if (Unknown10)
            {
                Mgr->Virtual44(Unknown10, 0);
                Unknown10 = 0;
            }
            if (Unknown14)
            {
                Mgr->Virtual44(Unknown14, 0);
                Unknown14 = 0;
            }
        }
    }
}
