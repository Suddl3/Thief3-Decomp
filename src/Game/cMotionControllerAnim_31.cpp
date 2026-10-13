// Game/cMotionControllerAnim_31.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C322D0_Unknown1C
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
    virtual float Virtual22();
    virtual float Virtual23();

    char Unknown04[0x8];
};

class Class_10C322D0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();

    char Unknown04[0x18];
    Class_10C322D0_Unknown1C Unknown1C;
    char Unknown28[0x8];
    Class_10C322D0_Unknown1C Unknown30;
    Class_10C322D0_Unknown1C Unknown3C;
};

class Class_10C322D0_Unknown0A8
{
public:
    char Unknown00[0x8];
    Class_10C322D0_Unknown08* Unknown08;
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
    virtual void FUN_10c322d0(float* A, float* B);

    char Unknown04[0xA4];
    Class_10C322D0_Unknown0A8* Unknown0A8;
};

// FUNCTION: 0x10C322D0 ?FUN_10c322d0@cMotionControllerAnim@@UAEXPAM0@Z
void cMotionControllerAnim::FUN_10c322d0(float* A, float* B)
{
    if (Unknown0A8 == 0)
        return;
    Class_10C322D0_Unknown08* Obj = Unknown0A8->Unknown08;
    if (Obj == 0)
        return;
    Class_10C322D0_Unknown1C* S = 0;
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
    if (S == 0)
        return;
    if (A)
        *A = S->Virtual22();
    if (B)
        *B = S->Virtual23();
}
