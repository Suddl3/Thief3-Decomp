// Game/Class_10E67FD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct FBox;

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int A);
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual int FUN_109e3730(int A);
    virtual FBox GetBounds();
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
    virtual Class_10E67FD0* Virtual41();
    virtual void Virtual42(Class_10E67FD0* Parent);
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
    virtual void FUN_10a52a90(int A);
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
    virtual void Virtual70(int A);
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87(bool A);
    virtual void FUN_10a52d00(bool A);

    Class_10E67FD0();

    char Unknown04[0xB4];
    int Count;
    char UnknownBC[4];
    Class_10E67FD0** Items;
    int UnknownC4;
    int Unknown0C8;
    char PadCC[0x1c];
    int Unknown0E8;
    char Unknown0EC[0x2C];
    char Pad118[0x38];
};

// FUNCTION: 0x10A52D00 ?FUN_10a52d00@Class_10E67FD0@@UAEX_N@Z
void Class_10E67FD0::FUN_10a52d00(bool A)
{
    Virtual87(A);
    for (int i = 0; i < Count; i++)
    {
        Class_10E67FD0* Item = Items[i];
        if (Item)
        {
            if (A)
            {
                if (Item->Virtual41() != this)
                    Item->Virtual42(this);
            }
            Item->FUN_10a52d00(A);
        }
    }
}
