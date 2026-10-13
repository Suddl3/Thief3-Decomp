// Game/cMotionControllerAnim_29.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C49740.h"
#include "Game/Class_10C32C30.h"

class Class_10C33AA0_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

class Class_10C33AA0_Unknown1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool Virtual6();

    char Unknown04[0x8];
};

class Class_10C33AA0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();

    char Unknown04[0x18];
    Class_10C33AA0_Unknown1C Unknown1C;
    char Unknown28[0x8];
    Class_10C33AA0_Unknown1C Unknown30;
    Class_10C33AA0_Unknown1C Unknown3C;
};

class Class_10C33AA0_Unknown0A8
{
public:
    char Unknown00[0x8];
    Class_10C33AA0_Unknown08* Unknown08;
};

class cMotionControllerAnim
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
    virtual bool FUN_10c33aa0();

    char Unknown04[0xA0];
    Class_10C32C30 Unknown0A4;
};

// FUNCTION: 0x10C33AA0 ?FUN_10c33aa0@cMotionControllerAnim@@UAE_NXZ
bool cMotionControllerAnim::FUN_10c33aa0()
{
    Class_10C33AA0_Unknown0A8* A = Unknown0A4.Unknown04;
    Class_10C32C30* Motion = &Unknown0A4;
    if (A != 0)
    {
        Class_10C33AA0_Unknown08* Obj = A->Unknown08;
        if (Obj != 0)
        {
            if (Obj->Virtual5() == 0)
                return true;
            Class_10C33AA0_Unknown1C* S = 0;
            switch (Obj->Virtual5())
            {
            case 0:
                S = &Obj->Unknown30;
                break;
            case 1:
                S = &Obj->Unknown3C;
                break;
            case 2:
                S = &Obj->Unknown1C;
                break;
            }
            if (S != 0 && S->Virtual6())
            {
                Class_10C33AA0_Member* Member = (Class_10C33AA0_Member*)Motion->GetValue((int)Obj);
                if (Member != 0)
                    return Member->Virtual5() == 0;
            }
        }
    }
    return false;
}
