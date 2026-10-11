// Game/Unsorted_10B431D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10D4ACC0
{
public:
    ~Class_10D4ACC0();
    int FUN_10d4acb0();

    int Unknown00;
};

Class_10D4ACC0 FUN_10d4acc0();

class Class_10B432A0_Unknown1B0
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
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual bool Virtual53();
};

class Class_10B432A0
{
public:
    Class_10B432A0_Unknown1B0* FUN_10b432a0();

    char Unknown00[0x194];
    int Unknown194;
    char Pad198[0xC];
    Class_10B432A0_Unknown1B0* Unknown1A4;
    char Pad1A8[0x8];
    Class_10B432A0_Unknown1B0* Unknown1B0;
};

// FUNCTION: 0x10B432A0 ?FUN_10b432a0@Class_10B432A0@@QAEPAVClass_10B432A0_Unknown1B0@@XZ
Class_10B432A0_Unknown1B0* Class_10B432A0::FUN_10b432a0()
{
    bool Flag = FUN_10d4acc0().FUN_10d4acb0() == 0 && Unknown194 == 1;
    if (Flag && Unknown1B0 && Unknown1B0->Virtual53())
    {
        return Unknown1B0;
    }
    return Unknown1A4;
}
