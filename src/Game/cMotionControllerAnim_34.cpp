// Game/cMotionControllerAnim_34.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C32280_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6();
};

struct Struct_10C32280_Unknown0A8
{
    char Unknown00[8];
    Class_10C32280_Unknown08* Unknown08;
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
    virtual void VirtualA();
    virtual void VirtualB();
    virtual void VirtualC();
    virtual void VirtualD();
    virtual void VirtualE();
    virtual void VirtualF();
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
    virtual void Virtual1A();
    virtual void Virtual1B();
    virtual void Virtual1C();
    virtual void Virtual1D();
    virtual void Virtual1E();
    virtual void Virtual1F();
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
    virtual void Virtual2A();
    virtual void Virtual2B();
    virtual void Virtual2C();
    virtual void Virtual2D();
    virtual void Virtual2E();
    virtual void Virtual2F();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual int FUN_10c32280();

    char Pad04[0xA4];
    Struct_10C32280_Unknown0A8* Unknown0A8;
};

// The entry the controller holds, read through the pointer the controller
// keeps, so the two reads are two loads.
inline Class_10C32280_Unknown08* GetEntry(Struct_10C32280_Unknown0A8*& Entry)
{
    return Entry ? Entry->Unknown08 : 0;
}

// FUNCTION: 0x10C32280 ?FUN_10c32280@cMotionControllerAnim@@UAEHXZ
int cMotionControllerAnim::FUN_10c32280()
{
    if (GetEntry(Unknown0A8))
        return GetEntry(Unknown0A8)->Virtual6();
    return 0;
}
