// Game/Class_10B2C160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cIntArray;

class FVector;

class Class_10B2BC10_Value
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

class Class_10B2BC90_Unknown
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
    virtual FVector* Virtual8();
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
    virtual void Virtual38(cIntArray& Found);
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
    virtual void Virtual53();
    virtual bool Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual bool Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual Class_10B2BC10_Value* Virtual83();
};

class cHUDLightGem
{
public:
    virtual void Virtual0();
    Class_10B2BC90_Unknown* GetItem(int Index);

    char Unknown04[0xB4];
    int m_Count;
    char UnknownBC[4];
    int* m_Items;
};

class Class_10B2C160 : public cHUDLightGem
{
public:
    bool FUN_10b2bc10();

    char Pad0C4[0x64];
    int Unknown128[5];
    int Unknown13C;
};

// FUNCTION: 0x10B2BC10 ?FUN_10b2bc10@Class_10B2C160@@QAE_NXZ
bool Class_10B2C160::FUN_10b2bc10()
{
    for (int i = 0; i < 5; i++)
    {
        Class_10B2BC90_Unknown* Item = GetItem(Unknown128[(Unknown13C + i) % 5]);
        if (Item && Item->Virtual80() && Item->Virtual83() && !Item->Virtual83()->Virtual1() && Item->Virtual54())
            return true;
    }
    return false;
}
