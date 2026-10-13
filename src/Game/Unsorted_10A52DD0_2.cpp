// Game/Unsorted_10A52DD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A52D70_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool Virtual2(int A, int B, int C);
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
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual bool Virtual64(int A);
};

class Class_10E5B2C0
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, int C);
    virtual bool FUN_10a52dd0(int A, int B, int C);

    char Unknown04[0xB4];
    int UnknownB8;
    char UnknownBC[4];
    Class_10A52D70_Item** UnknownC0;
};

// FUNCTION: 0x10A52DD0 ?FUN_10a52dd0@Class_10E5B2C0@@UAE_NHHH@Z
bool Class_10E5B2C0::FUN_10a52dd0(int A, int B, int C)
{
    if (Virtual1(A, B, C))
        return true;
    for (int i = 0; i < UnknownB8; i++)
    {
        Class_10A52D70_Item* Item = UnknownC0[i];
        if (Item && Item->Virtual53() && Item->Virtual64(2) && Item->Virtual2(A, B, C))
            return true;
    }
    return false;
}
